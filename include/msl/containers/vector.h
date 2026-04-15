#ifndef MSLVEC_H
#define MSLVEC_H

#include <msl/ints.h>
#include <msl/containers/iterator.h>

struct vector;
typedef struct vector vector_t;

vector_t *vector_init(isz_t element_size);
vector_t *vector_from(isz_t element_size, const void *element_array, isz_t element_count);
vector_t *vector_repeat(isz_t element_size, const void *element, isz_t element_count);

void vector_free(vector_t *self);

vector_t *vector_clone(const vector_t *self);
void vector_copy(vector_t *destination, const vector_t *source);

isz_t vec_size(const vector_t *self);
isz_t vec_element_size(const vector_t *self);

void vec_get(const vector_t *self, void *element, isz_t index);
void vec_set(vector_t *self, const void *element, isz_t index);

void vec_push(vector_t *self, const void *element);
void vec_resize(vector_t *self, isz_t new_size);
void vec_clear(vector_t *self);

iterator_t *vec_at(vector_t *self, isz_t index);
iterator_t *vec_begin(vector_t *self);
iterator_t *vec_end(vector_t *self);
const iterator_t *vec_at_const(const vector_t *self, isz_t index);
const iterator_t *vec_begin_const(const vector_t *self);
const iterator_t *vec_end_const(const vector_t *self);

#endif
