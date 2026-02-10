#include<iostream>
using namespace std;

void sumproduct(int arr[], int size){
    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Product = "<<product<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    sumproduct(arr,5);
    return 0;
}
