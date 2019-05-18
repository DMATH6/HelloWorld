#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
int main()
{
    int hours;
    double grosspay;
    double taxes;

    printf("Please enter hours worked for this week: ");

    scanf("%d", &hours);

    if (hours  <= 40)
    {
        grosspay = hours * PAYRATE;
    }
    else
    {
        grosspay = 40 * PAYRATE;
        double overtimepay = (hours * 40) * (PAYRATE * 1.5);
        grosspay += overtimepay;
    }


    if (grosspay <= 300)
        {
            taxes = grosspay * TAXRATE_300;
        }
    else if(grosspay > 300 && grosspay <= 450)
        {
            taxes = 300 * TAXRATE_300;
            taxes += (grosspay - 300) * TAXRATE_150;
        }

    else if (grosspay > 450)
        {
            taxes = 300 * TAXRATE_300;
            taxes += 150 * TAXRATE_150;
            taxes += (grosspay - 450) * TAXRATE_REST;
        }

        double netpay = grosspay - taxes;

        printf("Your gross pay this week is: %.2f\n", grosspay);
        printf("Your taxes this week is: %.2f\n", taxes);
        printf("Your net pay week is: %.2f\n", netpay);
    return 0;
}
