        /*                  Operator overloading
        passing two arguement for biary operator using friend function
        */

#include<iostream>
using namespace std;

class add_complex
{
public:
int real,complex;
add_complex();
add_complex(int real,int complex);
friend add_complex operator +(add_complex &,add_complex &);

};
add_complex::add_complex()
{
this->real=0;
this->complex=0;
}
add_complex::add_complex(int real,int complex)
{
this->real=real;
this->complex=complex;
}
add_complex operator +(add_complex &o1,add_complex &o2)
{ add_complex o3;
   o3.real=o1.real+o2.real;
   o3.complex=o1.complex+o2.complex;
   return o3;

}
int main()
{

add_complex o1(1,3);
add_complex o2(3,4);
add_complex o3;
o3=o1+o2;
cout<<o3.real<<"+i"<<o3.complex;

return 0;
}
