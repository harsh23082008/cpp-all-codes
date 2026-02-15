#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"enter the number"<<endl;
    cin>>x;
    int fact = 1;
    for(int i = 1 ;i<=x;i++){
        fact = fact *i ;
    }
    cout <<"factorial "<<fact;

    return 0;
}