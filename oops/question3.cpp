#include <iostream>
using namespace std;

class Vector {
private:
    int x_plane;
    int y_plane;
    int z_plane;

public:
    
    Vector(int x , int y , int z ) {
        x_plane = x;
        y_plane = y;
        z_plane = z;
    }

    
    Vector operator+(Vector v) {
        return Vector(
            x_plane + v.x_plane,
            y_plane + v.y_plane,
            z_plane + v.z_plane
        );
    }
    Vector operator-(Vector v) {
        return Vector(
            x_plane - v.x_plane,
            y_plane - v.y_plane,
            z_plane -v.z_plane
        );
    }
    Vector operator/(Vector v) {
        return Vector(
            x_plane / v.x_plane,
            y_plane / v.y_plane,
            z_plane /v.z_plane
        );
    }
    Vector operator*(Vector v) {
        return Vector(
            x_plane * v.x_plane,
            y_plane * v.y_plane,
            z_plane *v.z_plane
        );
    }


    void display() {
        cout << x_plane << "i + "<< y_plane << "j + "<< z_plane << "k" << "   this is addition"<<endl;
    }
    void displaymin() {
        cout << x_plane << "i  "<< y_plane << "j  "<< z_plane << "k" << "    this is subtraction"<<endl;
    }
    void displaydiv() {
        cout << x_plane << "i  "<< y_plane << "j  "<< z_plane << "k" << "    this is division"<< endl;
    }
    void displaymul() {
        cout << x_plane << "i  "<< y_plane << "j  "<< z_plane << "k" << "    this is multiplication"<< endl;
    }
};

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v1 / v2;
    Vector v6 = v1 * v2;

    v3.display();
    v4.displaymin();
    v5.displaydiv();
    v6.displaymul();

    return 0;
}