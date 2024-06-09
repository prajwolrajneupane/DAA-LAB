#include<stdio.h>
#include<time.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
clock_t start,end;
int a,b;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
start=clock();
printf("The result is: %d",gcd  (a,b));
end=clock();
printf("\n Time taken: %.6f seconds.\n",((double) (end-start))/CLOCKS_PER_SEC);
}