#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {      // outer loop (rows)

        char ch = 'A';                // reset to A every row

        for(int j = 0; j < n; j++) {  // inner loop (columns)
            cout << ch;
            ch = ch + 1;              // move to next character
        }

        cout << endl;
    }

    return 0;
}
