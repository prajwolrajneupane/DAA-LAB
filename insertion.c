#include <stdio.h>
#include<time.h>

void insertionSort(int arr[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

int main() {
clock_t start,end;

  int arr[] = {4,8,1,2,5,3};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Unsorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
start=clock();

  insertionSort(arr, n);
end=clock();

  printf("\nSorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
printf("\n Time taken: %.6f seconds.\n",((double) (end-start))/CLOCKS_PER_SEC);


  return 0;
}
