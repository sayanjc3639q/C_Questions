//LQ001.Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary , and the house rent allowance is 20% of basic salary. Write a basic program to calculate his salary
#include <stdio.h>

int main(){
    float bs,da,hra,grpay; // We are using float beacuse currency are in 00.00 foramt
    printf("Enter basic salary of Ramesh : ");
    scanf("%f",&bs);
    da = 0.40 * bs;
    hra = 0.20 * bs;
    grpay = bs + da + hra;
    printf("Basic Salary : %0.2f\n",bs);
    printf("Dearness allowance : %0.2f\n",da);
    printf("House rent allowance : %0.2f\n",hra);
    printf("Gross pay of Ramesh : %0.2f",grpay);
    return 0;
}