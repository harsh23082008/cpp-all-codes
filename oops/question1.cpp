#include <iostream>
using namespace std;

class Vector {
public:
    int size;
    int capacity;
    int* arr;

    // Constructor
    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }

    // Add element
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

    // Print vector
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    //Get element at index
    int get(int idx) {
        if (size == 0) {
            cout << "Array is Empty" << endl;
            return -1;
        }
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return -1;
        }
        return arr[idx];
    }

    // Remove last element
    void remove() {
        if (size == 0) {
            cout << "Array is Empty" << endl;
            return;
        }
        size--;
    }
};

int main() {
    Vector v;

    v.add(10);
    v.add(20);
    v.add(30);
    v.add(40);

    v.print();        // 10 20 30 40

    cout << v.get(2) << endl; // 30

    v.remove();
    v.print();        // 10 20 30

    return 0;
}
