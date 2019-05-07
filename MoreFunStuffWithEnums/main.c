#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company {GOOGLE=0, FACEBOOK, XEROX=2, YAHOO, EBAY=4, MICROSOFT};
    printf("XEROX is:\n%i\n", XEROX);
    printf("GOOGLE is:\n%i\n", GOOGLE);
    printf("EBAY is:\n\%i\n", EBAY);
    return 0;
}
