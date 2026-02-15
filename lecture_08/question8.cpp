#include <iostream>
using namespace std;
int bisrh(int arr[],int n,int target,int start,int end){
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            return bisrh(arr,n,target,start,mid+1);
        }
        else{
            return bisrh(arr,n,target,mid-1,end );
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int target = 3;
    int start = 0;
    int end = n-1;
    cout<<bisrh(arr,n,target,start,end);
    return 0;
}
