#include<iostream>
using namespace std;

void swapmaxmin(int arr[], int size){
    int maxIndex = 0, minIndex = 0;

    for(int i = 1; i < size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(){
    int arr[5] = {4,2,9,1,6};
    for(int i =0 ;i<5;i++){
        cout<<arr[i]<<" "<<endl;
    }
    swapmaxmin(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
