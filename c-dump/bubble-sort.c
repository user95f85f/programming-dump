#include <stdio.h>

#define SORT_SIZE 128

int
main (void)
{
  static int array[SORT_SIZE];

  int i, j, tmp;

  for (i = 0; i < SORT_SIZE; i++)
    array[i] = SORT_SIZE - i - 1;

  for (i = 0; i < SORT_SIZE - 1; i++)
    for (j = 0; j < SORT_SIZE - 1 - i; j++)
      if (array[j] > array[j + 1])
	{
	  tmp = array[j];
	  array[j] = array[j + 1];
	  array[j + 1] = tmp;
	}

  printf ("sort exiting with code %d\n", array[0]);
  return array[0];
}
