#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *arr;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Allocating memory for n elements
  arr = (int *)calloc(n, sizeof(int));
  if (arr == NULL) 
  {
     printf("Error!!! memory not allocated.");
    exit(0);
  }

  
  for (int i = 0; i < n; ++i) {
  printf("Enter number %d : ", i + 1);
  scanf("%d", arr + i);
  }

  // Finding the largest number
  for (int i = 1; i < n; ++i) {
    if (*arr < *(arr + i)) {
      *arr = *(arr + i);
    }
  }
  printf("Largest number = %d", *arr);

  free(arr);

  return 0;
}