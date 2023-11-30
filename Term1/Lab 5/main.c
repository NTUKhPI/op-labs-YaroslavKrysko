#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;


    printf ("Write x coordinate: ");
    scanf ("%lf", &x);
    printf ("Write y coordinate: ");
    scanf ("%lf", &y);

    printf("x=%6.3lf; y=%6.3lf\n", x,y);


    if ((( y>=-1 && y<=0)&&(x>=-1 && x<=0)) || (((x >= 0 && x <= 1) && (y >= 0 && y <= 1 - x))))
        printf("Dot is going in the area \n");
        else printf("Dot is not going in the area \n");

    return 0;
}
