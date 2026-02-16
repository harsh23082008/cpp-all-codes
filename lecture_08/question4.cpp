#include <iostream>
using namespace std;

int fabonachi(int n){
    if(n == 0 || n == 1)
        return n;
    return fabonachi(n-1) + fabonachi(n-2);
}

int main(){
    for(int i = 0; i < 10; i++)
        cout << fabonachi(i) << " ";
    return 0;
}
