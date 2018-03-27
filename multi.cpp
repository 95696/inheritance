#include<iostream>
using namespace std;
class filemenu
{

protected:
    int number;
public:
    void news()
    {
        cout<<"enter the number";
        cin>>number;
    }
};
class editmenu:public filemenu
{
protected:
    int data;
public:
    void copy()
    {
        cout<<"enter the data";
        cin>>data;
    }
};
class excel:public filemenu
{


public:
    void formulas()
    {
news();

    }
};
int main()
{
    excel e;
    e.formulas();
}
