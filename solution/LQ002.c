// LQ002. If the marks obtained by a student in five diffrent subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained bt the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>

int main(){

    int m1,m2,m3,m4,m5;
    int aggr;
    float percentage;

    printf("Enter the subject marks one by one : "); //eg. 50 60 70 80
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    aggr = m1 + m2 + m3 + m4 + m5;
    percentage = aggr/5 ; // avarage = aggr/5
    printf("Aggregate Marks = %d \n",aggr);
    printf("Percentage Marks = %0.2f",percentage);

    return 0;
}