#include<stdio.h> // header files  
#include<conio.h>  
int main()  
{   // initialize the local variables.  
    int l, b, ar, pr;  
    printf("Length of the rectangle is: ");  
    scanf("%i", &l);
    printf("\nBreadth of the rectangle is: ");  
    scanf("%i", &b);
    ar = l * b; // calculate area of rectangle.  
    pr = 2 * (l + b); // calculate perimeter of rectangle.  
    printf("\n Area of Rectangle is: %d", ar);  
    printf("\n Perimeter of Rectangle is: %d", pr);
    return 0;
}   