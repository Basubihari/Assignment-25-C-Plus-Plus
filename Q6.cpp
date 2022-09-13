/* 6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

#include<iostream>
#include<math.h>
using namespace std;
class Square
{
    private:
    int Num,sqr;
    static int count1;
    public:
    void SetNum(int x)
   {
        Num=x;
   }
   int getNum()
   {
     return Num;
   }
   void calculatesquare()
   {
      sqr=pow(Num,2);  
      count1++;
   }
   int getsquare()
   {
     return sqr;
   }
   int getcount()
   {
     return count1;
   }
   

};
int Square::count1;
int main()
{
    Square S1;
    S1.SetNum(35);
    S1.calculatesquare();
    S1.calculatesquare();
    cout<<"Square of "<<S1.getNum()<<" = "<<S1.getsquare();
    cout<<"\ncalled calculate square function = "<<S1.getcount();
    return(0);
}