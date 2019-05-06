#include <stdio.h>
#include <stdlib.h>

int main()
{

    float length; //The variables i need
    float width;
    float faces;
    float arearesult;
    float perimeterresult;
    printf("Please enter the width of the shape\n");
    scanf ("%f", &width);
    printf("Please enter the length of the shape\n");
    scanf ("%f", &length);
    printf("Please enter the number of faces of the shape\n");
    scanf ("%f", &faces);
    arearesult = width * length * faces;
    perimeterresult = width * 2 + length * 2 * faces; //Have i told you all i dont know basic math?
    printf("\nThe area is %f ", arearesult);
    printf("and the perimeter of the shape is %f\n", perimeterresult);
    return 0;
}
