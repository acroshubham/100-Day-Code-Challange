#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number to find it's fibbonaci series: ";
    int n;
    cin>>n;
    int fib1=0; 
    int fib2=1;
    int sum=1;
    cout<<fib1 << " " << fib2 <<" ";
    for(int i=0; i<n; i++){
        int fibn=fib1+fib2;
        fib1=fib2;
        fib2=fibn;
        cout<<fibn << " ";
        sum+=fibn;
    }
    cout<< "Sum of the fibbonacci series is: "<< sum;
return 0;
}