#include <stdio.h>
#include <string.h>

int main()
{
    char x[]="\n Look at me im useing a variable";
    char y[]="\n I am concentrateing my strings";
    char z[]="\n Oh wow it didn't fuck up; this never happens";
    char a[1000000]="";

    printf ("\n Yep the first lesson made me print to console"), printf ("\n Hey look i made a newline! \n \n");
    strcat(a, x);
    strcat(a, y);
    strcat(a, z);
    printf ("%s",a);
    printf ("\n");
    return 0;
}
