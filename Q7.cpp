/* 7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes. */
#include<iostream>
using namespace std;
class greatest
{
    private:
        int Gnum;
    public:
        int Num1,Num2,Num3;
        
        int GetGNum()
        {
            return(Gnum);
        }
        void CalculateGnum()
        {
            Gnum=Num1;
            if(Gnum<Num2)
            Gnum=Num2;
            if(Gnum<Num3)
            Gnum=Num3;
        }
};
int main()
{
    greatest G1;
    cout<<"Enter three Numbers:->";
    cin>>G1.Num1>>G1.Num2>>G1.Num3;
    G1.CalculateGnum();
    cout<<G1.Num1<<","<<G1.Num2<<" and "<<G1.Num3<<" in Greatest Number= "<<G1.GetGNum();
    return(0);
}