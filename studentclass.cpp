#include<iostream>
using namespace std;
#define max 20
typedef class student {
    int roll_no;
    char name[max];
public:
     void getdata();
     void putdata();
     
}s;
inline void student::getdata()
      {
          cout<<" enter your roll no and name :"<<endl;
          cin>>roll_no>>name;
      }
inline void student:: putdata()
      {
          cout<<" your data:"<<endl;
          cout<<"roll_no"<<roll_no<<endl<<"name"<<name;
      }
int main()
{
    s s1;
    s1.getdata();
    s1.putdata();
    return 0;
}