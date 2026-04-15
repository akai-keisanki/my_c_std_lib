#ifndef MSLITER_H
#define MSLITER_H

#include <msl/ints.h>

struct iterator;
typedef struct iterator iterator_t;

void iterator_init(void *ptr, isz_t element_size);
void iterator_from_previous(void *ptr, iterator_t *previous);

void iterator_free(iterator_t *self);

void iter_set_next(iterator_t *self, iterator_t *next);

void iter_get(const iterator_t *self, void *element);
void iter_set(iterator_t *self, const void *element);
void *iter_ptr(iterator_t *self);

void iter_next(iterator_t *self, isz_t increment);
void iter_increment(iterator_t *self, isz_t increment);

is8_t iter_compare(const iterator_t *self, const iterator *source);

#endif
