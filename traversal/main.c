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

void push(struct Student **head_ref, int new_id) {
  struct Student *new = malloc(sizeof(struct Student));

  new->id = new_id;
  new->grade = 0.0f;
  new->next = *head_ref;

  *head_ref = new;
}

void printList(struct Student *node) {
  while (node != NULL) {
    printStudentData(node);
    node = node->next;
  }
}

int main() {
  struct Student *head = NULL;
  push(&head, 101);
  push(&head, 102);

  printList(head);

  return 0;
}
