#include<iostream>
using namespace std;
int main (){
    int arr[10]={12,1,12,32,10,21,324,654,234,23};
    for(int i =0 ; i<10;i++){
        if (arr[i] == 10){
            cout<<arr[i];
            break;
        }
    }
    return 0;
}