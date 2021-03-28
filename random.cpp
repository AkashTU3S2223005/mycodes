#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int n;
  srand(time()); //it is used to generate random no. 
  for(int i=0; i<10; i++)
  {
  n=rand()%10; //this is syntax to generate random no.  between first ten no.
  cout<<n<<endl;
  }
  return 0;
}