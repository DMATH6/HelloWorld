#include <stdio.h>
#include <string.h>

int main() {

    int years[5] = {2014, 2015, 2016, 2017, 2018};
    float rainfall[5] = {32.4, 37.9, 49.8, 44.0, 32.9};
    int loop;
    float total;
    float avgrainfallmonth[12] = {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7};
    char titles[6][100] = {"|YEARS|","|RAINFALL", "(INCHES)|", "The yearly average rainfall is", "Inches", "MONTHLY AVERAGES"};
    char months [12][100] = {"JANUARY:", "FEBURARY:", "MARCH:", "APRIL:", "MAY:", "JUNE:", "JULY:", "AUGEST:", "SEPTEMBER:", "OCTOBER:", "NOVEMBER:", "DECEMBER:"};

    printf("\n %s %s%s \n",  titles[0], titles[1], titles[2] );


    for(loop = 0; loop < 5; loop++){

       printf("\n  %d         %0.1f", years[loop], rainfall[loop]);

    }


    for(loop = 0; loop < 5; loop++){

       total += rainfall[loop];

    }


    total = total / 5;

    printf("\n \n %s %0.1f %s \n \n", titles[3], total, titles[4]);

    printf(" %s \n \n", titles[5]);


    for(loop = 0; loop < 12; loop++){

        printf("\n %s ", months[loop]);
        printf(" %0.1f \n", avgrainfallmonth[loop]);

    }


   return 0;
}
