#include<iostream>
using namespace std;
int main(){
    int sum =0 ;
    int n;
    cin>>n;

    for(int i =1 ;i<=n;i++){
        if (i%3==0){
            sum = sum +i;
        }
    }
    cout<<"you sum is equal to "<<sum<<endl;
    return 0;

}