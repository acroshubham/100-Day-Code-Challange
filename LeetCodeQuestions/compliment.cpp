#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int m=n;
    int mask=0;
    while(m!=0){
        mask = (mask<<1)|1;
        n = m>>1;
    }
    int ans =~n&mask;
    cout<<ans;
    return 0;
}