//Tarea de for
#include <iostream>
using namespace std;
int primo(int x)
{
  int flag=0;
  int a=0;
  for (int i=1; i<=x; i++)
    {
      if (x%i==0)
	  a++;
    }
  if(a==2){
    flag==1;
  }
  return flag;
}
      
int main()
{
  int s=12;
  int p;
  cout<<"entra un número "<<endl;
  cin >> p;
  do{
    do{
    if (p%2==0)
      p++;
    if(primo(p)==0)
      p=p+2;
    } while(primo(p)==1);
    if(p<s)
      {
      s=s-p;
      p=p+2;
      }
    else
      {
	s=s-1;
	if (s!=0)
	  p=p+2;
      }
  }while(s!=0);
  
  
  cout<<"p vale "<<p<<endl;
  cout<<"s "<<s<<endl;
  return 0;
}
    
  
