#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
    int l;
    int b;
    int h;
    public:
    Box(){
        l=0;
        b=0;
        h=0;
    }
    Box(int len , int breadth , int height){
        l=len;
        b=breadth;
        h=height;
        
    }
    
    Box(Box&x){
        l=x.l;
        b=x.b;
        h=x.h;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    
    long long int CalculateVolume(){
        long long int v =(long long int) l*b*h;
        return v;
    }
    
    bool operator<(Box& x){
        if(l<x.l){
            return true;
        }
        else if(b<x.b and l==x.l){
            return true;
        }
        else if ( h<x.h and b==x.b and l==x.l){
            return true;
        }
        return false;
    }

   



   
    
    
};

ostream & operator << (ostream &out,  Box &c){
  cout<<c.getLength()<<" "<<c.getBreadth()<<" "<<c.getHeight();
}
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


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