#include<iostream>
using namespace std;
int main()
{
	int choice,*ptr;
	while(choice)
	{
		ptr=new int;
		cout<<"enter element="<<endl;
		cin>>*ptr;
		cout<<"enter your choice 1-continue (or) 0-exit="<<endl;
		cin>>choice;
		if(choice==1)
		{
			cout<<"continue"<<endl;
		}
		else
		{
			exit(0);	
		}
	}
	delete ptr;
	cout<<"deallocated"<<endl;
}                                     