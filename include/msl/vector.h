#ifndef MSLVEC_H
#define MSLVEC_H

#include <msl/ints.h>

struct vector;

struct string *vector_init(isz_t element_size);
struct string *vector_from(isz_t element_size, void *element_array, isz_t element_count);

void vector_free(struct string *self);

#endif
