#include<iostream>
using namespace std;
void reversearray(int arr[],int size){
    int start =0 , end = size -1 ;
    while (start < end ){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int size = 4;
    int arr[4]={4,7,3,9};
    reversearray(arr,size);
    for(int i = 0 ;i<size;i++){
        cout<<arr[i];
    }
    return 0;

}