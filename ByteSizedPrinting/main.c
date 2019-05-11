#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size-of data types on your machine\n");
    printf("int: %zd", sizeof(int));
    printf("\nchar: %zd", sizeof(char));
    printf("\nlong: %zd", sizeof(long));
    printf("\nlong long: %zd", sizeof(long long));
    printf("\ndouble: %zd", sizeof(double));
    printf("\nlong double: %zd", sizeof(long double));
    return 0;
}
