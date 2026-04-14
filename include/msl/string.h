#ifndef MSLSTR_H
#define MSLSTR_H

#include <msl/ints.h>

struct string;

struct string *string_init(void);
struct string *string_from(const char *chars);
struct string *string_create(const char *chars, isz_t capacity);

void string_free(struct string *self);

#endif
