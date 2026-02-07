#include<iostream>
using namespace std;
int main(){
    int sum =1 ;
    int n;
    cin>>n;
    for(int i =1 ;i<=n;i++){
        sum = sum *i;
    }
    cout<<"you factorial is equal to "<<sum<<endl;
    return 0;

}