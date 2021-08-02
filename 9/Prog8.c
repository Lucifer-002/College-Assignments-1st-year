#include <stdio.h>
#include <stdlib.h>
struct details {
  float marks;
  char name[30];
  int rn;
};

int main() {
  struct details *ptr;
  int n;
  printf("Enter the number of Students: ");
  scanf("%d", &n);

  // Memory allocation for noOfRecords structures
  ptr = (struct details *)malloc(n*sizeof(struct details));
  for (int i = 0; i < n; ++i) 
  {
    printf("Enter Name , marks and Roll No :\n");
    scanf("%s %f %d", (ptr + i)->name, &(ptr + i)->marks, &(ptr+i)->rn);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < n; ++i) {
    printf("%s\t%d\t%.2f\n", (ptr + i)->name, (ptr + i)->rn ,(ptr+i)->marks);
  }

  free(ptr);

  return 0;
}