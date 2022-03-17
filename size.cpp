#include <stdio.h>

#define NELMS(A) (sizeof(A) / sizeof(A[0]))

char* myarray[] = {"Hell", "there!", "LQ", "56789"};

int
main (int argc, char *argv[])
{
 char* sd[] = {"Hell", "there!", "LQ", "56789"};
  printf ("#/elements= %d...\n", NELMS(myarray));
   printf ("#/elements= %d...\n", sizeof(myarray));
   printf ("#/elements= %d...\n",  sizeof(myarray[0]));
   printf ("#/elements= %d...\n",  sizeof(sd[0]));
    printf ("#/elements= %d...\n",  sizeof(*sd));

    char* a = "ABCghkjk";
int length = sizeof(a)/sizeof(char);
printf ("#/elements= %d...\n",  length);


  return 0;
}