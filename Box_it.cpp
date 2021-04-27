#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box
{
    
//l,b,h are integers representing the dimensions of the box
  int length,breadth,height;
   public:

// The class should have the following functions : 

// Constructors: 
// Box();
   Box()
  {
    length=0;
    breadth=0;
    height=0;
  }

// Box(int,int,int);
 Box(int L,int B,int H)
{
    length=L;
    breadth=B;
    height=H;
}
// Box(Box);
Box(const Box &p1) {length = p1.length; breadth = p1.breadth;height=p1.height ;}


// int getLength(); // Return box's length
int getLength()
{
    return length;
}
// int getBreadth (); // Return box's breadth
int getBreadth()
{
    return breadth;
}
// int getHeight ();  //Return box's height
int getHeight()
{
    return height;
}
// long long CalculateVolume(); // Return the volume of the box
long long CalculateVolume()
{
    return (long long)length*breadth*height;
}

//Overload operator < as specified
//bool operator<(Box& b)
 bool operator<(Box &B) {
    if (length < B.length) {
      return true;
    } else if (length == B.length) {
      if (breadth < B.breadth) {
        return true;
      } else if (breadth == B.breadth) {
        if (height < B.height) {
          return true;
        }
      }
    }

    return false;
  }};

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
ostream& operator<<(ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
