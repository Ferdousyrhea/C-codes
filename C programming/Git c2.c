/*Write a program to find area and perimeter of the rectangle
and the area & circumference of the circle*/
#include <stdio.h>
int main ()
{
    int h,l,r;
    printf ("Enter height :");
    scanf ("%d",&h);
    printf ("Enter length :");
    scanf ("%d",&l);
    printf ("Enter radius :");
    scanf ("%d",&r);
    printf ("The area of the rectangle : %d\n",h*l);
    printf ("The perimeter of the rectangle : %d\n",2*(h+l));
    printf ("The area of the circle : %f\n",3.1416*r*r);
    printf ("The circumference of the circle : %f\n",2*3.1416*r);
    return 0;
}
