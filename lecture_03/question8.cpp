#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;

    cout << "Enter the number: " << endl;
    cin >> n;

    int i = 1;  
    do{
        if(n % i == 0){
            count++;
        }
        i++;   
    }while(i <= n);

    if(count == 2){
        cout << "It is prime" << endl;
    }
    else{
        cout << "Not prime" << endl;
    }

    return 0;
}
