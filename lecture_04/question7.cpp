#include <iostream>
using namespace std;

int main() {        
    char n ='A';
    for (int i =1 ;i<=4;i++){
        for (int j =1 ; j<=i;j++){
            cout<<n;
        }            
        cout<<endl;
        n++;
    }
    return 0;
}
