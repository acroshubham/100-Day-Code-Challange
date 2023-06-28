#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    while(m!=0){
        int mast = (mask<<1)|1;
        n = m>>1;
    }
    cout<<n;
    return 0;
}