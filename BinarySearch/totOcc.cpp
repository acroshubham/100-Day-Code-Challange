#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(k==arr[m]){
            ans=m;
            e=m-1;
        }else if(k>arr[m]){
            s=m+1;
        }else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(k==arr[m]){
            ans=m;
            s=m+1;
        }else if(k>arr[m]){
            s=m+1;
        }else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int a[10]={1,2,3,3,3,3,3,3,4,5};
    int fO=firstOcc(a,10,3);
    int lO=lastOcc(a,10,3);
    int totalOcc= lO-fO+1;
    cout<<"Total Occ of the number 3 is: "<< totalOcc;
    return 0;
}