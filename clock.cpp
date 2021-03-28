#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int h=0,m=0,s=0;
    int error=0,a=0;
    while(error==0)
    {
        cout<<" Enter current hour: "<<endl;
        cin>>h;
        cout<<" Enter current minute:"<<endl;
        cin>>m;
        cout<<"Enter current seconds:"<<endl;
        cin>>s;
        if(h<24 && m<60 && s<60) //it will check all values are valid or not 
        {
            error=1;//if error become a 1 then while will terminated
        }
        system("cls"); 
    }
    while(a==0)
    {
      cout<<h<<"\t"<<m<<"\t"<<s;
      _sleep(1000); //delay for 1 sec
      s++;
      system("cls");
      if(s>58)
      {
          s=0;
          m++;
      }
      if(m>59)
      {
          m=0;
          h++;
      }
    }
    return 0;
}