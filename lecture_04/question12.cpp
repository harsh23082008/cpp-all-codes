#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;

    for(int i = 0; i < n; i++) {

        char ch = 'a' + i;   

        for(char j = ch; j >= 'a'; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
