#include <stdio.h>
#include <stdlib.h>

struct Student {
  int id;
  float grade;
  struct Student *next;
};

void printStudentData(struct Student *s) {
  printf("Student ID: %d\nStudent grade: %f\n", s->id, s->grade);
}

int main() {
  struct Student s1;
  s1.id = 1;
  s1.grade = 4.5f;

  struct Student *s2 = malloc(sizeof(struct Student));

  s1.next = s2;

  printStudentData(&s1);
  printStudentData(s1.next);

  return 0;
}
