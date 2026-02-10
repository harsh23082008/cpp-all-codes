#include<iostream>
using namespace std;
int sumofn(int n ){
    int sum =0 ;
    for(int i = 1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    cout<<sumofn(a);
    return 0;

}