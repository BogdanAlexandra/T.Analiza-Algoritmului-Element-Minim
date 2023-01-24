#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  clock_t start_time, end_time;

  start_time = clock();  // start timing
    FILE *f1=fopen("test.in","r");
	FILE *f2=fopen("test.out","w");
 /*I write my programm here*/
  end_time = clock();  // stop timing

  double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
  printf("Elapsed time: %f seconds\n", elapsed_time);

  return 0;
}
