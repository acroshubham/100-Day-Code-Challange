#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>> n;
    int sum=0;
    cout << "The number is: " << n <<endl;
    for(int i=0; i<n; i++){
        if(n%2==0){
            sum = sum + i;
        }
    }
    cout<<"Sum of the even nos. is " << sum;
}