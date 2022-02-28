#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
			complex(int *a,int *b)
			{
				real=*a;
				img=*b;
			}
			complex()
			{
				
			}
			complex(const complex &c1)  // copy constructor
			{
				real=c1.real;
				img=c1.img;
				cout<<"copy constructor"<<endl;
			}
			complex& operator=(const complex &c2)   //Assignment operator
			{
				real=c2.real;
				img=c2.img;
				cout<<"assignment operator"<<endl;
				return *this;
				
			}
	        void display()
			{
				cout<<"Entered complex number is "<<real<<" + i("<<img<<")\n";
			}
			void add(complex c1,complex c2)
			{
				cout<<"\nAddition = "<<c1.real+c2.real<<" + i("<<c1.img+c2.img<<")"<<endl;
			}
			void sub(complex c1,complex c2)
			{
				cout<<"Subtraction = "<<c1.real-c2.real<<" + i("<<c1.img-c2.img<<")"<<endl;
			}			
			void mul(complex c1,complex c2)
			{
				cout<<"Multiplication = "<<(c1.real*c2.real)-(c1.img*c2.img)<<" + i("<<(c1.real*c2.img)+(c1.img*c2.real)<<")"<<endl;
			}
	        void fun_call(complex c1,complex c2)
			{
				add(c1,c2);
				sub(c1,c2);
				mul(c1,c2);
			}
			~complex()
			{
				
			}
};
int main()
{
	int x,y,z,w;
 	cout<<"Enter real part and imaginary part of 1st complex number"<<endl;
  	cin>>x>>y;
   	cout<<"Enter real part and imaginary part of 2nd complex number"<<endl;
   	cin>>z>>w;
   	complex c1(&x,&y),c2(&z,&w),c4;
   	complex c3=c1; // copy constructor
   	c4=c2;// Assignment operator
    return 0;
}