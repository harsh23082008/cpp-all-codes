#include<iostream>
using namespace std;
int fact(int  a ){
    int f=1;
    for (int i =1 ;i<=a;i++){
        f=f*i;

    }
    return f;

}
int ncr(int c,int d ){
    int factn= fact(c);
    int factr= fact(d);
    int factnmr= fact(c-d);
    int factncr= factn/((factr)*(factnmr));
    return factncr;
}
int main(){
    int n,m ;
    cin >> n >> m;

    cout << ncr(n, m);
    return 0;

}