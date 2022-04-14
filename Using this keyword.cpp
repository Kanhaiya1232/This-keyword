//Instance variable with this keyword
#include<iostream>
using namespace std;
class Simple
{
    int a,b;     //instance variable
    public:
    void get(int a,int b)   //local variable
    {
        this->a=a;
        this->b=b;
    }
    void put()
    {
        cout<<a<<b;
    }
};
int main()
{
    Simple obj;
    obj.get(10,20);
    obj.put();
    return 0;
}