#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            end=mid-1;
        }else if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end =mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start=mid+1;
        }else if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end =mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    int even[10]={6,9,15,15,15,15,15,20,29,32};
    int firsttOcc=firstOcc(even,10,15);
    int lasttOcc=lastOcc(even,10,15);
    cout<<"The index of First Occurence of the number is\n"<<firsttOcc<<"\n"<< "The Occurence of last number is\n"<<lasttOcc;
return 0;
}