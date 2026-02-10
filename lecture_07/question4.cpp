#include<iostream>
using namespace std;

void uniquevalues(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[7] = {1,2,2,3,4,4,5};
    uniquevalues(arr,7);
    return 0;
}
