#include<iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i =0 ; i<10;i++){
        cout<<"enter the value of "<< i+1<<endl;
        cin>>arr[i];
    }
    for(int i = 0 ; i<10;i++){
        cout<<"value which you have enter for "<<i+1<<" is "<<arr[i]<<endl;
    }
    int max = arr[0];
    for (int i =1 ;i<10;i++){
        if (arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    cout <<"maximum number is "<<arr[0]<<endl;
    int min = arr[0];
    for(int i =1 ; i<10;i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
        }
    }
    cout<<"minimum term is "<<arr[0]<<endl;
    return 0 ;
}