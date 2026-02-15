#include<iostream>
#include<string>
using namespace std;

class dog{
public:
    string breed;
    string size;
    string age;
    string colour;

    dog(string a, string b, string c, string d){
        this->breed = a;
        this->size = b;
        this->age = c;
        this->colour = d;
    }

    void bark(){ cout << "bark\n"; }
    void sleep(){ cout << "sleep\n"; }
    void sit(){ cout << "sit\n"; }
    void run(){ cout << "run\n"; }
};

int main(){


    dog dog1("neapolitan mastiff","large","5","black");
    dog dog2("maltese","small","2","white");
    dog dog3("chow chow","medium","3","brown");


    dog dogs[3] = { dog1, dog2, dog3 };


    for(int i = 0; i < 3; i++){
        cout << dogs[i].breed << endl;
        cout << dogs[i].size << endl;
        cout << dogs[i].age << endl;
        cout << dogs[i].colour << endl;

        dogs[i].bark();
        dogs[i].sit();
        dogs[i].sleep();
        dogs[i].run();

        cout << "--------\n";
    }

    return 0;
}
