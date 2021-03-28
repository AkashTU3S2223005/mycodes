#include<iostream>
using namespace std;
class data{
    protected:
    int a,b;
    public:
       void getdata()
       {
           cout<< " enter a and b"<<endl;
           cin>>a>>b;
       }
};
class sum: public data
{
    protected:
   int c;
    public:
      void Sum()
      {
          c=a+b;
      }
};
class result :public sum
{
    public:
   void show()
   {
       cout<< " sum of "<<a<<"+"<<b<<c;
   }
};
int main()
{
    result s1;
    s1.getdata();
    s1.Sum();
    s1.show();
    return 0;
}