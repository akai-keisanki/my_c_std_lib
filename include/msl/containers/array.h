#ifndef MSLARR_H
#define MSLARR_H

#include <msl/ints.h>
#include <msl/containers/iterator.h>

struct array;
typedef struct array array_t;

array_t *array_init(isz_t element_size, isz_t size);
array_t *array_from(isz_t element_size, const void *element_array, isz_t element_count);
array_t *array_repeat(isz_t element_size, const void *element, isz_t element_count);

void array_free(array_t *self);

array_t *array_clone(const array_t *self);
void array_copy(array_t *destination, const array_t *source);

isz_t arr_size(const array_t *self);
isz_t arr_element_size(const array_t *self);

void *arr_at(array_t *self, isz_t index);
void arr_get(const array_t *self, void *element, isz_t index);
void arr_set(array_t *self, const void *element, isz_t index);

iterator_t *arr_at(array_t *self, isz_t index);
iterator_t *arr_begin(array_t *self);
iterator_t *arr_end(array_t *self);
const iterator_t *arr_at_const(const array_t *self, isz_t index);
const iterator_t *arr_begin_const(const array_t *self);
const iterator_t *arr_end_const(const array_t *self);

#endif
