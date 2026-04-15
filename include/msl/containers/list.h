#ifndef MSLLIST_H
#define MSLLIST_H

#include <msl/ints.h>
#include <msl/containers/iterator.h>

struct list;
typedef struct list list_t;

list_t *list_init(isz_t element_size);

void list_free(list_t *self);

list_t *list_clone(const list_t *self);
void list_copy(list_t *destination, const list_t *source);

isz_t list_size(const list_t *self);
isz_t list_element_size(const list_t *self);

void list_push(list_t *self, const void *element);
void list_pop(list_t *self);
void list_clear(list_t *self);
  
iterator_t *list_at(list_t *self, isz_t index);
iterator_t *list_begin(list_t *self);
iterator_t *list_end(list_t *self);
const iterator_t *list_at_const(const list_t *self, isz_t index);
const iterator_t *list_begin_const(const list_t *self);
const iterator_t *list_end_const(const list_t *self);

#endif
