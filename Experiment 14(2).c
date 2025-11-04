#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float marks;
};

void display(struct student a)
{
    printf("\nSTUDENTS DETAILS-\n");
    printf("STUDENT'S NAME: %s\n", a.name);
    printf("STUDENT'S ROLL NO.: %d\n", a.roll);
    printf("STUDENT'S MARKS: %f\n", a.marks);
}

int main()
{
    struct student a;

    printf("ENTER STUDENT'S NAME:");
    scanf("%s", &a.name);

    printf("ENTER STUDENT'S ROLL NO.:");
    scanf("%d", &a.roll);

    printf("ENTER STUDENT'S MARKS:");
    scanf("%f", &a.marks);

    display(a);

    printf("Vaibhav 125113039");

    return 0;
}