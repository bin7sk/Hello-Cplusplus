#include<iostream>
#include<math.h>

class Complex{
	double re, im;
public:
	Complex(double a_re, double a_im)
	{
		re = a_re;
		im = a_im;
	}
	double get_re(){return re;}
	double get_im(){return im;}
	double Modulo() { return sqrt(re*re + im*im);}
	Complex operator+(Complex op2){
		Complex res(re + op2.re, im + op2.im);
		return res;
	}
	Complex operator++(int){
		return Complex(re++, im++);
	}
	Complex(int a){
		re = a;
		im = 0;
	}
};
void print_complex(Complex a){
	using namespace std;	
	cout<<a.get_re()<<endl;
	cout<<a.get_im()<<endl;
}
int main(void){
	using namespace std;
	Complex a(1,2);
	Complex b(2,4);
	Complex c = a + b;
	cout<<"c:\n";
	cout<<c.get_re()<<endl;
	cout<<c.get_im()<<endl;
	c++;
	cout<<"c++:\n";
	print_complex(c);
	print_complex(8);
	return 0;
}
