#include <stdio.h>
#include <time.h> 

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}



void printfibo(int n) {
clock_t start,end;
    printf("The fibonacci series is: ");
    start = clock();
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
 end = clock();
 printf("Time taken: %f\n", (double)(end-start)/CLOCKS_PER_SEC);
}

int main() {
    int n;

    printf("Enter the nth number: ");
    scanf("%d", &n);

    printfibo(n);

    return 0;
}
