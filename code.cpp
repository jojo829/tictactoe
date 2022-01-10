#include <iostream>
using namespace std;
int board(char entries[])
{
 cout<<"\tPlayer-1 <x>\n\tPlayer-2 <o>\n";
 cout<<"\t\t\t-------|-------|-------\n";
 cout<<"\t\t\t   "<<entries[0]<<"   |   "<<entries[1]<<"   |   "<<entries[2]<<"   \n";
 cout<<"\t\t\t-------|-------|-------\n";
 cout<<"\t\t\t   "<<entries[3]<<"   |   "<<entries[4]<<"   |   "<<entries[5]<<"   \n";
 cout<<"\t\t\t-------|-------|-------\n";
 cout<<"\t\t\t   "<<entries[6]<<"   |   "<<entries[7]<<"   |   "<<entries[8]<<"   \n";
 cout<<"\t\t\t-------|-------|-------\n";
 return 0;
}
int main()
{
 char aprv='y';
 while(aprv=='y')
 {
 	int chk=0;
 char entries[9]={'1','2','3','4','5','6','7','8','9'};
 board(entries);
 char t;
 for(int i=0;;)
 {
  cout<<"Player-1 enter number\n";
  cin>>t;
  for(int j=0;;j++)
  {
   if(entries[j]==t)
    {
	 entries[j]='x';
     system("CLS");
     board(entries);
     i++;
     break;
    }
	else if(j==8)
	{
		cout<<"Try Again\n";
		cin>>t;
		j=0;
		continue;
    }
  }
  if(entries[0]=='x'&&entries[1]=='x'&&entries[2]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[3]=='x'&&entries[4]=='x'&&entries[5]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[6]=='x'&&entries[7]=='x'&&entries[8]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[0]=='x'&&entries[3]=='x'&&entries[6]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[1]=='x'&&entries[4]=='x'&&entries[7]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[2]=='x'&&entries[5]=='x'&&entries[8]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[0]=='x'&&entries[4]=='x'&&entries[8]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
  if(entries[2]=='x'&&entries[4]=='x'&&entries[6]=='x')
  {
   cout<<"x wins";
    chk=1;
   break;
  }
   if(i==9)
     break;
  cout<<"Player-2 enter number\n";
  cin>>t;
  for(int k=0;;k++)
  {
   if(entries[k]==t)
   {
    entries[k]='o';
    system("cls");
    board(entries);
    i++;
    break;
   }
   else if(k==8)
   {
   	cout<<"Try Again\n";
		cin>>t;
		k=0;
		continue;
   }
  }
  if(entries[0]=='o'&&entries[1]=='o'&&entries[2]=='o')
  {
   cout<<"o wins";
   chk=1;
   break;
  }
  if(entries[3]=='o'&&entries[4]=='o'&&entries[5]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
  if(entries[6]=='o'&&entries[7]=='o'&&entries[8]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
  if(entries[0]=='o'&&entries[3]=='o'&&entries[6]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
  if(entries[1]=='o'&&entries[4]=='o'&&entries[7]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
  if(entries[2]=='o'&&entries[5]=='o'&&entries[8]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
  if(entries[0]=='o'&&entries[4]=='o'&&entries[8]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
  if(entries[2]=='o'&&entries[4]=='o'&&entries[6]=='o')
  {
   cout<<"o wins";
    chk=1;
   break;
  }
 }
 if(chk==0)
 {
 	cout<<"Tie";
 }
 cout<<endl;
 cout<<"Press Y to play again\n";
 cin>>aprv;
 system("cls");
}
cout<<"Game ended\n";
 return 0;
}




