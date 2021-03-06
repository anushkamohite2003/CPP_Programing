using namespace std;
#include<iostream>
#include<conio.h>

class Constructor_Demo
{
    public:
        int i,j,k;                                       //Public - Data members and characteristics

        void Fun()                                   //Public- Member Function or Behavior - Declaration
        {
            cout<<"\n Inside PUBLIC fun() function of our class..."<< endl;
            i = k-500;
            j = i*5;
        }

        Constructor_Demo()                             //Default Constructor
        {
            i=0;
            j=1;
            k=1000;

            cout<<"\n Inside Default Constructor of our class...";
            cout<<"\n Values => \t"<< i << "  " << j << "  " << k <<endl;
        }

        Constructor_Demo(int N1,int N2)                             //Parameterized Constructor
        {
            i=N1;
            j=N2;
            k=1000;

            cout<<"\n Inside Parameterized Constructor of our class...";
            cout<<"\n Values => \t"<< i << "  " << j << "  " << k << endl;
        }

        ~Constructor_Demo()                             //Destructor
        {
            cout<<"\n Inside Destructor of our Class....";
            cout<<"\n Values Inside Destructor of Current Object => \t"<< i << "  " << j << "  " << k << endl;
        }
};


//main Function Defination

int main()
{
    Constructor_Demo Obj1;                         //Objects created using Default Constructor

    getch();

    Obj1.Fun();

    cout<<"\n Back to main()....";
    getch();

    Constructor_Demo Obj2(15,21);                  //Objects created using Parameterized Constructor

    getch();
    return 0;
}
