#include<iostream>
using namespace std;
class x
{

protected:
    int roll;
public:
    void input()
    {
        cout<<"enter the roll no.";
        cin>>roll;
    }
};
class y:public x
{
protected:
    int marks;
public:
    void stum()
    {
        input();
        cout<<"enter the marks:"<<marks;

    }
};
int main()
{
    y m;
    m.stum();
}
