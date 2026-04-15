#ifndef MSLSTR_H
#define MSLSTR_H

#include <msl/ints.h>

struct string;
typedef struct string str_t;

str_t *string_init(void);
str_t *string_from(const char *chars);
str_t *string_create(const char *chars, isz_t capacity);

void string_free(str_t *self);

str_t *string_clone(const str_t *self);
void string_copy(str_t *destination, const str_t *source);

isz_t str_size(const str_t *self);

char str_get(const str_t *self, isz_t index);
void str_set(str_t *self, char c, isz_t index);

char *str_at(str_t *self, isz_t index);
const char *str_at_const(const str_t *self, isz_t index);

void str_resize(str_t *self, isz_t new_size);
void str_clear(str_t *self);

void str_push(str_t *self, char element);
void str_concatenate(str_t *self, const str_t *source);

is8_t str_compare(const str_t *self, const str_t *source);

void str_substring(str_t *destination, const str_t *source, isz_t begin, isz_t end);
void str_split(array_t *parts, const str_t *self, char c, );

#endif
