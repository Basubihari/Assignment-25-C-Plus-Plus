/* 5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{
	private:
		int Num,Rev=0;
	public:
		void SetNum(int x)
		{
			Num=x;
		}
		int getNum()
		{
			return Num;
		}
		int getreverse()
		{
			return Rev;
		}
		void calculatereverse();
};
void ReverseNumber::calculatereverse()
{
	int x=Num;
	while(x!=0)
	{
		Rev=(Rev*10)+(x%10);
		x/=10;
	}
}
int main()
{
	ReverseNumber R1;
	R1.SetNum(87346);
	R1.calculatereverse();
	cout<<"Reverse Number of "<<R1.getNum()<<" = "<<R1.getreverse();
	return 0;
}