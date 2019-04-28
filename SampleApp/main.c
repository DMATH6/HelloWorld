#include <stdio.h>
#include <string.h>  //Im not sure if i need this libary

int main()
{
    char x[]="\n Look at me im useing a variable";
    char y[]="\n I am concentrateing my strings";
    char z[]="\n Oh wow it didn't fuck up; this never happens"; //Is there a rule against bad language?
    char a[1000000]=""; //Well i dont know why i put a limit on this char

    printf ("\n Yep the first lesson made me print to console"), printf ("\n Hey look i made a newline! \n \n");
    strcat(a, x);
    strcat(a, y);
    strcat(a, z);
    printf ("%s",a); //Could i do it better, yeah but that would make it difficult to read
    printf ("\n"); //Leave me alone this is easier todo
    return 0;
}
