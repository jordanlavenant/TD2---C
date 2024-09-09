#include <stdio.h>
#include "td2_exos.h"

int test(void)
{
  int x = 3;
  int *px = &x;
  *px = px + 1;
  printf("%d\n", x);
  return 0;
}
