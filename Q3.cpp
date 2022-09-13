/* 3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class Factorial
{
	private:
		int Num,fact=1;
	public:
		void SetNum(int x)
		{
			Num=x;
		}
		int getNum()
		{
			return(Num);
		}
		int getfact()
		{
			return(fact);
		}

		void calculatefact();
};
void Factorial::calculatefact()
{
	int x=Num;
		while(x>1)
		{
			fact=fact*x;
			x--;
		}
}
int main()
{
	Factorial F1;
	F1.SetNum(6);
	F1.calculatefact();
	cout<<"Factorial of "<<F1.getNum()<<" = "<<F1.getfact();
}