//Currently broken on gnu compiler for some fuckn reason
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    double minutes = 0;
    double years = 525600;
    double days = 1440;
    double result;

    printf("Please enter the number of minutes\n");
    scanf( "%lf", minutes); //dosn't get input!!??
    printf("\nYou have entered %lf", minutes);
    result = (minutes/days);
    printf("\n%lf",minutes);
    printf("converted to days is %lf",result);
    return 0;
}
