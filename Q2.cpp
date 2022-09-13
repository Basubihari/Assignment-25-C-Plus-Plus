/* 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
	private:
		int Hr, Mn, Sec;
	public:
		void SetTime(int x=0, int y=0,int z=0)
		{
			Hr=x;
			Mn=y;
			Sec=z;
		}
		int gethr()
		{
			return(Hr);
		}
		int getmn()
		{
			return(Mn);
		}
		int getsec()
		{
			return(Sec);
		}
		void calculateTime();
};
void Time::calculateTime()
{
	while(Sec>=60)
	{
		Mn++;
		Sec-=60;
	}	
	while(Mn>=60)
	{
		Hr++;
		Mn-=60;
	}
}
int main()
{
	Time T1;
	T1.SetTime(70,35,95);
	T1.calculateTime();
	cout<<"Time = "<<T1.gethr()<<" Hr "<<T1.getmn()<<" Mn "<<T1.getsec()<<"Sec";
	return 0;
}