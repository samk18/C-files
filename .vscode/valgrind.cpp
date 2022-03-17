#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("You must pass a single integern");
        exit(1);
    }

    int limit = atoi(argv[1]); 
    int numbers[limit / 2];
    int count = 0;
    int i;
    for (i = 3; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            numbers[count] = i;
            count++;
        }
    }

    int sum = 0;

    for (i = 0; i < count; i++) {
        sum += numbers[i];
    }

    printf("The sum is: %dn", sum);

    return 0;
}