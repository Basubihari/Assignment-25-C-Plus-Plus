/* 9. Define a class Circle and define an instance member function to find the area of the
circle.*/
#include<iostream>
#include<math.h>
using namespace std;
class Circle
{
    private:
        float ar;
    public:
        float r;
    float getAr()
    {
        return(ar);
    }
    void calculateAr()
    {
        ar=(float(22)/7)*pow(r,2);
    }
};
int main()
{
    Circle Ar1;
    cout<<"Enter Radius of circle :->";
    cin>>Ar1.r;
    Ar1.calculateAr();
    cout<<"Area of Circle = "<<Ar1.getAr();
    return 0;
}
