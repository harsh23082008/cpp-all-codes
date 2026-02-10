#include<iostream>
using namespace std;
int main(){
    int n ;
    int p=1 ;
    cin>>n;
    for(int i =n;i>=1;i--){
        for(int j =1 ;j<=n-i;j++){
            cout<<" ";
        }
        for(int k = 1 ;k<=i;k++){
            cout<<p;
        }
        cout<<endl;
        p++;
    }
    return 0;
}