//Question:Given two numbers swap them using pointers
#include<iostream.h>
void main() {
	int *a,*b,*temp; 
	cout<<“Enter value of a and b:”;
	cin>>*a>>*b;
	temp=a; //*a holds the address of  a and a contains value present at that address
	a=b;
	b=temp;
	cout<<“nAfter swapingna=”<<*a<<“nb=”<<*b;
	getch();
}