#include<iostream>
using namespace std;
void swap_by_value(int,int);
void swap_by_reference(int *a,int *b);
int array_sum(int arr[],int n);
int main()
{
	int a,b,n,arr[20],result;
	cout<<"Enter any two integer values"<<endl;
	cin>>a>>b;
	cout<<"\nValues of integers in main function before swaping\n"<<a<<endl<<b<<endl;
	swap_by_value(a,b);
	cout<<"\nValues of integers in main function after swaping by valueare\n"<<a<<endl<<b<<endl;
	swap_by_reference(&a,&b);
	cout<<"\nValues of integers in main function after swaping by reference are\n"<<a<<endl<<b<<endl;
	cout<<"\n\nHow many elements you want to enter in array"<<endl;
	cin>>n;
	cout<<"\nEnter the elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	result=array_sum(arr,n);
	cout<<"\nSum of elements array is "<<result<<endl;
}
void swap_by_value(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nValues of integers in call by value function after swaping are\n"<<a<<endl<<b<<endl;
}
void swap_by_reference(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"\nValues of integers in call by reference function after swaping are\n"<<*a<<endl<<*b<<endl;
}
int array_sum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
