#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter the number "<< endl;
    cin >> n ;
    if (n>0){
        cout << "postive"<<endl;
    }
    else if (n<0){
        cout << "negaitve"<<endl;
    }
    else if (n==0 ){
        cout << "zero"<< endl;
    }
    else {
        cout <<"invalid input"<<endl;
    }
    return 0 ;
}