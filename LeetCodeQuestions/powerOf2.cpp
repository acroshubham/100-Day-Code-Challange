#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=1; i<=30; i++){
        if(ans==n){
            return true;
        }
        if(ans<INTMAX_MAX/2)
        ans = ans*2;
    }
return false;
}