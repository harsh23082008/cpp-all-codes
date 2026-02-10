#include<iostream>
using namespace std;
int sumofdigit(int n ){
    int sum = 0;
    while(n!=0){
        int rem = n%10;
        sum = sum+rem;
        n=n/10;
    }
    return sum ; 
}
int main(){
    int a ;
    cin>> a;
    cout <<sumofdigit(a);
}