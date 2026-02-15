#include <iostream>
using namespace std;
int sumofn(int n){
    if(n==1){
        return 1;
    }
    return (n+sumofn(n-1));
}

int main() {
    int a =5;
    cout<<sumofn(a);
    
    return 0;
}