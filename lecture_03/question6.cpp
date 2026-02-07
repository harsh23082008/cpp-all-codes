#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<< "enter the number" <<endl;
    cin>>n;
    for(int i =1 ;i<=n;i++){
        sum = sum + i;
    }
    cout<<"the sum is equal to: "<<sum ;
    return 0;
    

}