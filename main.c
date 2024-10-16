#include <stdio.h>

int main()
{
    float bs , da , hra , gs ;
    printf("enter the basic salary: ");
    scanf("%f\n", &bs);
    da = 0.3 * bs;
    hra = 0.1 * bs;
    gs = bs + da + hra;
    printf("the basic salary is : %f\n",bs);
    printf("the dear allowance is : %f\n",da);
    printf("the house rent allowance is : %f\n",hra);
    printf("the gross salary is : %f\n",gs);
    return 0;
}
