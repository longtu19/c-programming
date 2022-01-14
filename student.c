#include <stdio.h>
#include <string.h>

struct Student {
char name[12];
float gpa;
};

int main() {
struct Student student1 = {"ABC", 1.0};
struct Student student2 = {"BCD", 2.0};
struct Student student3 = {"CDE", 3.0};
struct Student student4 = {"DEF", 4.0};

struct Student students[4];


for(int i = 0; i < 4; i++){
printf("Enter name ");
scanf("%s", students[i].name);
printf("Enter gpa ");
scanf("%f", &students[i].gpa);

}

for (int i = 0; i < 4; i++){
    printf("%s, GPA: %f\n", students[i].name, students[i].gpa);

}

return 0;
}