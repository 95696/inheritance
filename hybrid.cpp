#include<iostream>
using namespace std;
class college
{
protected:
    float cfee;
public:
    void inputcf()
    {
        cout<<"enter college fee";
        cin>>cfee;
    }
};
class training:public college
{
protected:
    float tfee;
public:
    void inputtf()
    {
        cout<<"enter the training fee";
        cin>>tfee;
    }
};
class pocket
{

protected:
    float pm;
public:
    void inputpm()
    {

        cout<<"enter the pocket money";
        cin>>pm;
    }
};
class total:public training,public pocket
{
protected:
    float tot;
public:
    void dototal()
    {
        inputcf();
        inputtf();
        inputpm();
        tot=cfee+tfee+pm;
        cout<<"\n total:"<<tot;
    }
};/*
class per:public result
{
protected:
    float pe;
public:
    void doper()
    {
        inputr();
        pe=r*100/200;
        cout<<"per\n:"<<pe;
    }
};
class grade
{
    float g;
public:
    void inputg()
    {
        doper();
        g=(pe>90?'a':pe>80?'b':'c');
        cout<<"grade\n"<<g;
    }
};
class division:public per,public grade
{
protected:
    float div;
public:
    void dodiv()
    {
        inputr();
        doper();
        inputg();
        if(pe==90)
            cout<<"first division";
        else
            cout<<"second division";
    }
};*/
int main()
{
total t;
    t.dototal();
}
