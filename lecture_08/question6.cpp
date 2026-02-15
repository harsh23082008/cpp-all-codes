#include <iostream>
using namespace std;
int arrsort(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    return (arr[n-1]>=arr[n-2])&&(arrsort(arr,n-1));
        
    
}

int main() {
    const int n = 5;
    int arr[n]={6,2,3,4,5};
    cout<<arrsort(arr,n);

    return 0;
}