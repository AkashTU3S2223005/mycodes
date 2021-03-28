#include<iostream>
#include<ctime>
#include<random>
#include<string>
using namespace std;
char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
string name;
int ch;
int n;
char d,c;
void show_board();
char check_winner();
void computers_turn();
void get_x_playerturn();
int count(char symbol);
int main()
{ 
    cout<<"Enter your name:"<<endl;
    cin>>name;
    while(true)
    {

        system("cls");
        show_board();
        if(count('x')==count('o'))
        {
            cout<<name<<" X_turns"<<endl;
            get_x_playerturn();
        }
        else
        {
            computers_turn();
        }
        n=check_winner();
        if(n=='x')
        {
            system("cls");
            show_board();
            cout<<name<<" won the game ";
            break;
        }
        else if( n=='o')
        {
            system("cls");
            show_board();
            cout<<"you lost the game, computer won the game";
            break;
        }
        else if(n==c)
        {
            system("cls");
            show_board();
        }
        else if(n==d)
        {
            cout<<" game draw..";
            break;
        }
    }

    return 0;
}
int count(char symbol)
{
    int total=0;
    for(int i=0; i<9; i++)
    {
        if(board[i]==symbol)
        total+=1;
    }
    return total;
}
 void get_x_playerturn()
{
while(true)
{
    cout<<" select position among (1-9)"<<endl;
    int choice;
    cin>>choice;
    choice--;
    if(choice<0 || choice>8)
    {
        cout<<" select proper position among (1-9) "<<endl;
    }
    else if(board[choice]!=' ')
    {
        cout<<"please select empty position"<<endl;
    }
    else
    {
        board[choice]='x';
        break;
    }
    }
}
void computers_turn()
{
    do{
        srand(time(0));
        ch=rand()%10;
    }while(board[ch]!=' ');
    board[ch]='o';
}


char check_winner()
{
    //for horizontal values
  if( board[0]==board[1] && board[1]==board[2]&&board[0]==board[2])
      return board[0];
  if( board[3]==board[4] && board[4]==board[5]&&board[3]==board[5])
      return board[3];
  if( board[6]==board[7] && board[7]==board[8]&&board[6]==board[8])
      return board[6];
      //for vertical values
   if( board[0]==board[3] && board[3]==board[6]&&board[0]==board[6])
      return board[0];
   if( board[1]==board[4] && board[4]==board[7]&&board[1]==board[7])
      return board[1];
   if( board[2]==board[5] && board[5]==board[8]&&board[2]==board[8])
      return board[2];
    //for diagonal
     if( board[0]==board[4] && board[4]==board[8]&&board[0]==board[8])
      return board[0];
       if( board[2]==board[4] && board[4]==board[6]&&board[2]==board[6])
      return board[2];
      if(count('x')+count('o')<9)
     return c;
     else

        return d;
}


void show_board()
{
    cout<< "\t\t     |     |     \n";
    cout<< "\t\t  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<" \n";
    cout<< "\t\t_____|_____|_____\n";
    cout<< "\t\t     |     |     \n";
    cout<< "\t\t  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<" \n";
    cout<< "\t\t_____|_____|_____\n";
    cout<< "\t\t     |     |     \n";
    cout<< "\t\t  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<" \n";
    cout<< "\t\t     |     |     \n";
}