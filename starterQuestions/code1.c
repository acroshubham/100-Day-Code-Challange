#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Enter a digit to calculate it's factorial");
    int n;
    scanf("%d", &n);
    int fact=1;
    for(int i=n; i>1; i--){
        fact*=i;
    }
    printf("The factorial of given number is %d", fact);
return 0;
}