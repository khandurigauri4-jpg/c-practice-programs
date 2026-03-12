#include <stdio.h>

struct Student {
    char name[50];
    int marks[3];
    float average;
};

int main() {
    struct Student s;
    int i, sum = 0;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter marks of 3 subjects:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &s.marks[i]);
        sum += s.marks[i];
    }

    s.average = sum / 3.0;

    printf("\nName: %s", s.name);
    printf("\nAverage: %.2f", s.average);

    if(s.average >= 75)
        printf("\nGrade: A");
    else if(s.average >= 50)
        printf("\nGrade: B");
    else
        printf("\nGrade: C");

    return 0;
}