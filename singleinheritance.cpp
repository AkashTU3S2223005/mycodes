#include<iostream>
using namespace std;
class data{
    protected:
    int a,b;
    public:
       void getdata()
       {
           cout<< " enter a and b"<<endl;
           cin>> a >> b;
       }
};
class sum: public data
{
   int c;
    public:
      void Sum()
      {
          cout<< "sum="<<a+b;
      }
};
int main()
{
    sum s1;
    s1.getdata();
    s1.Sum();
    return 0;
}