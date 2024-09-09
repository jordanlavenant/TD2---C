#include <stdio.h>
#include "td2_exos.h"

struct maillon
{
  int val;
  struct maillon *next;
};

int test(void)
{
  int x = 3;
  int *px = &x;
  *px = px + 1;
  printf("%d\n", x);
  return 0;
}

int insert(int n)
{
}

int delete(int n)
{
  return 0;
}

int search(int n)
{
  return 0;
}