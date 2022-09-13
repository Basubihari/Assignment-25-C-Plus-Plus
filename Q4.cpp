/* 4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class*/
#include<iostream>
using namespace std;
class LargestNumber
{
	private:
		int Num1,Num2,Num3,largest;
	public:
		void SetNumbers(int x,int y,int z)
		{
			Num1=x;
			Num2=y;
			Num3=z;
		}
		int getlargest()
		{
			return(largest);
		}	
		void calculatelargest();
};
void LargestNumber::calculatelargest()
{
	largest=Num1;
	if(largest<Num2)
	largest=Num2;
	if(largest<Num3)
	largest=Num3;
}
int main()
{
	LargestNumber L1;
	int Num1,Num2,Num3;
	cout<<"Enter three Numbers:->";
	cin>>Num1>>Num2>>Num3;
	L1.SetNumbers(Num1,Num2,Num3);
	L1.calculatelargest();
	cout<<Num1<<" , "<<Num2<<" and "<<Num3 <<"in largest Number = "<<L1.getlargest();
	return 0;

}