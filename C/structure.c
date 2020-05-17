#include<stdio.h>
struct student{
    char fname[20];
    char lname[20];
    int roll;
};
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("\n");
    struct student s[n];
    for(int i=0; i<n; i++){
        printf("Enter first name: ");
        scanf("%s", s[i].fname);
        printf("Enter last name: ");
        scanf("%s", s[i].lname);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("\n");
    }
    for(int i=0; i<n; i++){
        printf("Roll no. %d is %s %s\n", s[i].roll, s[i].fname, s[i].lname);
    }
    return 0;
}