//If the marks obtained by a student in five subjects are inputed through the keyboard find out the aggregate marks and percentage marks
//obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>
int main()
{
    float marks[5], sum, average;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of one subject: ");
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    average = sum / 5;
    printf("The average of the student is %.2f", average);
}