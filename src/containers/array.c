#include <msl/containers/array.h>

struct array
{
  void *data;
  isz_t element_size;
  isz_t size;
  iterator_t *begin;
  iterator_t *end;
}
