#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "enter the number" << endl;
    cin >> x;

    int a = 0;
    int b = 1;

    if(x >= 1){
        cout << a << endl;
    }
    if(x >= 2){
        cout << b << endl;
    }

    for(int i = 3; i <= x; i++){
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    return 0;
}
