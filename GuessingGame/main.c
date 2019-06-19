/*Author: Dylan Matheson

  Date Modified: 19.6.2019

  Purpose: Picks a random number and then the user has to guess
  the correct number
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomnumber;
    int guessednumber;
    int counter=10; //How many lives you get

    //random number generator
    int Lower = 0;
    int max = 20;


    srand(time(0));

    randomnumber=(rand()) % (max + 1 - Lower);
    //printf("%i", randomnumber); //DEBUG, PRINTS THE NUMBER PICKED

    //took way to long to figure this out

    while(counter>=0)
    {

        scanf("%d", &guessednumber);

        if(guessednumber == randomnumber)
        {
            printf("YOU WIN");
            break;
        }
        if(guessednumber < randomnumber)
            printf("TOO LOW");



        if(guessednumber > randomnumber)
            printf("TOO HIGH");

        --counter;
        printf("\nTRIES LEFT %i \n", counter);

    }
    if(guessednumber!=randomnumber)
    {
        printf("YOU FAILED");
    }

return 0;
}


