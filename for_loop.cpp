#include <iostream>
#include <cstdio>
using namespace std;
void num(int n,int d)
{for(int i=n;i<=d;i++)
  {  if(i==1)
      {cout<<"one"<<endl;}
     else if(i==2)
      {cout<<"two"<<endl;}
     else if(i==3)
      {cout<<"three"<<endl;}
     else if(i==4)
      {cout<<"four"<<endl;}
     else if(i==5)
      {cout<<"five"<<endl;}
     else if(i==6)
      {cout<<"six"<<endl;}
     else if(i==7)
      {cout<<"seven"<<endl;}
     else if(i==8)
      {cout<<"eight"<<endl;}
     else if(i==9)
      {cout<<"nine"<<endl;}
      
    } 
    
}
void evodd(int m,int s)
{for(int j=m;j<=s;j++)
   {
     if(j%2==0)
      {
        cout<<"even"<<endl;
       }
      else
       cout<<"odd"<<endl;
    }
}
int main() {
    // Complete the code.
    int a , b,c=0 ;
    cin>>a;
    cin>>b;
    num(a,b);
    for(int k=a;k<=b;k++)
     {
        if(k>=9)
         {
             c++;
         }
     }
    if(c>0)
    {
    evodd(10,b);
    }
    
    
    
    
    return 0;
}
