/* 10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc. */
#include<iostream>
#include<math.h>
using namespace std;
class Area
{
    private:
        float sqar,rectar,circar;
    public:
        int side,l,b,r;
    float getsqar()
    {
        return(sqar);
    }
    float getrectar()
    {
        return(rectar);
    }
    float getcircar()
    {
        return(circar);
    }
    void calculatesqar()
    {
        sqar=pow(side,2);
    }
    void calculaterectar()
    {
        rectar=l*b;
    }
    void calculatecircar()
    {
        circar=(float(22)/7*pow(r,2));
    }
};
int main()
{
    Area Ar1;
    cout<<"Enter area of circle:->";
    cin>>Ar1.r;
    Ar1.calculatecircar();
    cout<<"Area of circle = "<<Ar1.getcircar(); 
    return(0);
}
