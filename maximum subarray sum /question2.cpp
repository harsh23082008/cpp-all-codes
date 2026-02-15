#include<iostream>
using namespace std;
int main(){
    const int n = 5 ;
    int arr[n]={1,-2,3,-4,-5};
    int maxSum = INT_MIN;
    for(int st = 0 ;st<n;st++){
        int currentmax =  0;
        for(int end = st ;end<n;end++){
            currentmax = currentmax +arr[end];
            maxSum= max(currentmax , maxSum);
        }
    }
    cout<<"the max sum is = "<<maxSum;
    return 0;

}