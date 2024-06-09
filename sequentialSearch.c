#include <stdio.h>
#include<time.h>

int sequential_search(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
clock_t start,end;

  int arr[] = {9,1,6,3,8,17,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 17;
start=clock();

  int index = sequential_search(arr, n, target);

  if (index != -1) {
    printf("Element %d found at index %d\n", target, index);
  } else {
    printf("Element %d not found in the list\n", target);
  }
end=clock();
printf("\n Time taken: %.6f seconds.\n",((double) (end-start))/CLOCKS_PER_SEC);


  return 0;
}
