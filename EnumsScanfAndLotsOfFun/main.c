#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum WeekDays{Sunday, Monday=1, Tuesday, Wensday, Thursday, Friday=0, Saturday};
    printf("\n Is it Monday? (1 for yes and 0 for no) \n\n %i\n", Monday); //Lets just grab one variable at a time caz screw if statements for now
    printf("\n What about Friday?\n\n %i\n\n", Friday);

    return 0;
}
