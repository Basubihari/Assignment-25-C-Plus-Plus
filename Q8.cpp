/* 8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
        float ar;
    public:
        float l,b;
    float getar()
    {
        return ar;
    }
    void Calculatear()
    {
        ar=l*b;
    }
};
int main()
{
    Rectangle Ar1;
    cout<<"Enter length and width of rectangle:->";
    cin>>Ar1.l>>Ar1.b;
    Ar1.Calculatear();
    cout<<"Area of Rectangle = "<<Ar1.getar();
    return 0; 
}
