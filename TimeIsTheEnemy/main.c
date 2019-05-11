//Nothings wrong i forgot toadd an &
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    double minutes = 0;
    double years = 525600;
    double days = 1440;
    double result;
    double result2;

    printf("Please enter the number of minutes\n");
    scanf( "%lf", &minutes); //nvm forgot the & key
    printf("\nYou have entered %lf", minutes);
    result = (minutes/days);
    result2= (minutes/years);
    printf("\n%lf",minutes);
    printf(" converted to days is %lf",result);
    printf(" \nconverted to years is %lf",result2);
    return 0;
}
