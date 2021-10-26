/************************
    Project: Quadratic Equation Solution
    Author: Mark Kimani
    Date: 26th Oct,2021
    Compiler: GCC
    Language: C99
    License: MIT
************************/



#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    //variable declaration
    int a,b,c;
    float x1,x2;

    //Capture Input
    printf("\tQuadratic Equation Solver!\n");
    printf("Enter the values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);

    //processing/computation
    if((b*b-4*a*c)==0) {
       x1=x2=(-b+sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)>0) {
       x1=(-b+sqrt(b*b-4*a*c))/(2*a);
       x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)<0) {
       printf("The eguation has no roots\n");
       exit(1);
    }

    //Output
    printf("The values of x are %f and %f\n",x1,x2);
    return 0;
}
