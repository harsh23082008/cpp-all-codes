#include<iostream>
using namespace std;

int main(){
    char alpha ;
    cout << "Enter a character: " << endl;
    cin >> alpha;

    if (alpha >= 'a' && alpha <= 'z'){
        cout << "Lower case" << endl;
    }
    else if (alpha >= 'A' && alpha <= 'Z'){
        cout << "Upper case" << endl;
    }
    else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}
