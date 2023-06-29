#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start=0;
    int end= size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=mid){
        if(arr[mid]==key){
            ans=mid;
            // store the value in ans. As, I have got the correct answer but I have to not stop here. I have to go furthrer and check the first occurence using the logic i.e. following.
            end=mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int even[5]={1,2,3,4,5};
    cout<<"First Occurence of 3 is"<< firstOccurence(even, 5, 3);
return 0;
}