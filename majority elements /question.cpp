#include<iostream>
using namespace std;

void uniquevalues(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = IntMin;

        for(int j = 0; j < size; j++){
            int xcount = 0 ;

            if(arr[i] == arr[j]){
                count++;
            }
            count = max(xcount,count);
            cout<<arr[i];
        }
        



    }
}

int main(){
    int arr[7] = {1,1,3,5,5,5,5};
    uniquevalues(arr,7);
    return 0;
}
