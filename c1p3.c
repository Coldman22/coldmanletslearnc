/* If the marks obtained by a student in five different subjects are inout through the keyboard,
write a program to find out the aggregate marks and percentage marks obtained by student.
Assume that the maximum marks that can be obtained by a student in each subject is 100*/
/*Calculation of aggragate and percentage marks obtained by student*/
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5, aggr;
    float per;
    printf("\nEnter marks in 5 subjects:");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    aggr= m1+m2+m3+m4+m5;
    per=aggr/5;
    printf("Aggregate Marks= %d\n",aggr);
    printf("Percentage Marks= %f\n",per);
    return 0;
}
/*
Output:
Enter marks in 5 subjects: 85, 75, 60, 72, 56
Aggregate Marks= 348
Percentage Marks= 69.00000
*/