#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number"<< endl;
    int n; 
    cin>>n;
    int i=2;
    while(i<n){
        // devide ho gya mtlb not prime
        if(n%i==0){
            cout<<"Not a prime number" << endl;
        }
        i=i+1;
    }
}