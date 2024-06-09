#include <stdio.h>
#include<time.h>

void bubbleSort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // Swap elements
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
clock_t start,end;

  int arr[] = {56,41,5,7,1,19};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Unsorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

start=clock();

  bubbleSort(arr, n);
end=clock();

  printf("\nSorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
printf("\n Time taken: %.6f seconds.\n",((double) (end-start))/CLOCKS_PER_SEC);

  return 0;
}
