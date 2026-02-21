#include <iostream>
using namespace std;
class Maths{
    public:
    double add(double a,double b){
        return a+b;
    }
    int  add(float  a,float  b){
        return a+b;
    }
    int  add(double  a,double  b,double  c){
        return a+b+c;
    }
};

int main() {
    Maths m;
    cout<< m.add(2,3)<<endl;
    cout<< m.add(2.5,3.1)<<endl;
    cout<< m.add(1.123,2.13,3.13)<<endl;

    
    return 0;
}