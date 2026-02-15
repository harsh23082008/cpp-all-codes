#include <iostream>
using namespace std;

int main() {
    const int n = 5;

    int arr[n]={9,2,3,4,5};
    for(int i =0 ;i<n;i++){
        for(int j = i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}