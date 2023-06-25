#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Enter a digit to calculates it's fibbonacci");
    int n;
    scanf("%d", &n);
    int fib1=0;
    int fib2=1;
    int sum=1;
    printf("The fibbonacci series is: \n");
    printf("%d ", fib1);
    printf("%d ", fib2);
    for(int i=0; i<n;i++){
        int fibn=fib1+fib2;
        fib1=fib2;
        fib2=fibn;
        printf("%d ",fibn);
        sum+=fibn;
    }
    printf("The sum of the fibonacci Series is: %d", sum);
return 0;
}