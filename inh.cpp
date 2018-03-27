#include<iostream>
using namespace std;
class maths
{
public:
    float getsquare(float r)
    {
        return(r*r);
    }
    float getpositive(float v)
    {

        if(v<0)
            v=v*-1;
        return(v);
    }
};
class circle:public maths
{

    float ar,r;
public:
    void area()
    {
        cout<<"enter radius";
        cin>>r;
        r=getpositive(r);
        ar=3.14*getsquare(r);
        cout<<"\n area="<<ar;
    }
};
int main()
{
    circle c;
    c.area();
}
