/* 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */
#include<iostream>
using namespace std;
class Complex
{
	private:
		int r,i;
	public:
		void setr(int x)
		{
			r=x;
		}
		void seti(int x)
		{
			i=x;
		}
		int getr()
		{
			return(r);
		}
		int geti()
		{
			return(i);
		}

};
int main()
{
	Complex C1;
	C1.setr(8);
	C1.seti(9);
	cout<<"real = "<<C1.getr()<<"\nImaginary = "<<C1.geti();

}