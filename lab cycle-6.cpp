#include<iostream>
using namespace std;
class matrix
{
	public:
	int r;
	int c;
	int **a;
	matrix(int row,int col){ // constructor
		r=row;
		c=col;
		a=new int*[r];
		for(int i=0;i<r;i++)
		{
			a[i]=new int[c];
		}
		if(r>c)
		{
			delete a[r-c];
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<"enter element for a["<<i<<"]"<<"["<<j<<"]"<<"="<<endl;
   				cin>>a[i][j];
			}
		}
	}
	void display()
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	int get(int i,int j)
	{
		return a[i][j];
	}
	matrix(matrix &m1)//copy constructor
	{
		r=m1.r;
		c=m1.c;
		a=new int*[r];
		for(int i=0;i<r;i++)
		{
			a[i]=new int[c];
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				a[i][j]=m1.get(i,j);
			}
		}
		
	}
	~matrix()
	{
		cout<<"destructor"<<endl;
	}
};
int main()
{
	matrix m1(2,3);
	//m1.create();
	m1.display();
	matrix m2=m1;
	m2.display();
}
