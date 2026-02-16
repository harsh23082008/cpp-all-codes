#include <iostream>
using namespace std;
class Vector{
public:
    int size ;
    int capacity;
    int* arr;
    Vector(){
        size = 0 ;
        capacity =1 ;
        arr = new int[capacity];
    }
    void add(int ele){
        if(size == capacity){
            capacity= capacity*2;
            int* arr2 = new int[capacity];
            
            for(int i = 0;i<size;i++){
               arr2[i]=arr[i];
            }
        }
       
        arr[size++]=ele;
    }

        void add(int ele) {
        if (size == capacity) {
            capacity *= 2;
            int* arr2 = new int[capacity];

            for (int i = 0; i < size; i++) {
                arr2[i] = arr[i];
            }

            // delete[] arr;
            // arr = arr2;
        }
        arr[size++] = ele;
    }


    void print(){
        for(int i = 0;i<size;i++){
            cout<<arr[i];
        }

    }
};

int main() {
    Vector v;
    v.add(10);
    v.add(20);
    v.add(30);
    v.add(40);
    v.print();

    
    return 0;
}