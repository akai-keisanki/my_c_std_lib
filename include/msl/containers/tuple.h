#ifndef MSLTUP_H
#define MSLTUP_H

#include <msl/ints.h>

struct tuple;
typedef struct tuple tuple_t;

tuple_t *tuple_init(isz_t *element_sizes, isz_t size);
tuple_t *tuple_from(isz_t *element_sizes, void *element_struct, isz_t element_count);

void tuple_free(tuple_t *self);

tuple_t *tuple_clone(const tuple_t *self);
void tuple_copy(tuple_t *destination, const tuple_t *source);

isz_t tup_size(const tuple_t *self);
const isz_t *tup_element_sizes(const tuple_t *self);

const void *tup_at(const tuple_t *self, isz_t index);
void tup_get(const tuple_t *self, void *element, isz_t index);

#endif
