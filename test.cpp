#include <iostream>
using namespace std;

class Complex {
private:
int real, imag;
public:
Complex(int r = 0, int i = 0) : real(r), imag(i) {}

// Friend function to overload the insertion operator
friend ostream& operator<<(ostream& out, const Complex& c);
};

// Definition of the overloaded insertion operator
ostream& operator<<(ostream& out, const Complex& c) {
out << c.real << "+i" << c.imag;
return out;
}

int main() {
Complex c1(10, 20);
cout << "The complex object is " << c1 << endl;
return 0;
}