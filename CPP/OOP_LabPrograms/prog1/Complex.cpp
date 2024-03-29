#include<iostream>
using namespace std;
class Complex{
    private:
        double real,imag;

    public:
        Complex(){}
        Complex( double _real, double _imag){
            this->real=_real;
            this->imag=_imag;
        }

        void setReal( double _real){
            this->real = _real;
        }

        void setImag(double _imag){
            this->imag = _imag;
        }

        void display(){
            cout<<this->real << " + i" << this->imag << endl;
        }

};


int main(){
    Complex c1(3,4);
    Complex c2(5,-7);
    
    //displaying the values of   complex numbers    
    cout << "Value of first complex number : ";
    c1.display();
    cout << "\nValue of second complex number : ";
    c2.display();
}