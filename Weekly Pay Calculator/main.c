#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours;
    float grosspay;
    float netpay;
    float aftertax;
    float tax;
    //Currently static variables
    float payrateperhour= 44;

    printf(" \n Please enter number of hours worked\n");
    scanf(" \n %f", &hours);
    printf(" \n You have entered %f hours\n ", hours);
    //Work out the total amount
    grosspay= hours * payrateperhour;
    printf(" \n Your total earned for this period is %f dollers\n", grosspay);

    if (hours > 40)
    {
        grosspay = grosspay * 1.5;
        printf("\n The amount you earned over time and a half is %f\n", netpay);
    }

    if (grosspay > 300)
    {
        netpay = aftertax * 0.15;
    }

    else if (grosspay > 450);
    {
        netpay = aftertax * 0.20;
    }

        tax = netpay-aftertax;

    if (aftertax != 0);
    {
        printf("\nAfter tax is %f\n", tax);
    }

    return 0;
}
