#include <iostream>
using namespace std;

int fabonachi(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fabonachi(n-1) + fabonachi(n-2);
}

int main() {
    cout << fabonachi(10);
    return 0;
}
