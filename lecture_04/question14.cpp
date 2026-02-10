#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    for(int i = n ;i>=1;i--){
        for(int j = 1 ;j<=n-i;j++){
            cout<<" ";
        }
        for(int k =1 ; k<=i;k++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    return 0;
}̃