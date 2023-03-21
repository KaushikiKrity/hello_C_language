//Stack is a linear data structure which follows a particular order in which the operations are performed. 
//Main operations:-
//Push 
//Pop
//Peek or Top

#include <iostream>
#define MAX 1000


int top;
int a[MAX];


int pop(){
	if (top<0){
		std::cout<<"stack empty"<<std::endl;
	}
	else{
		int x= a[top--];
		return x;
	}
}

int peek(){
	int x= a[top];
	return x;
}

bool push(int x){
	if(top==MAX-1){
		std::cout<<"overflow"<<std::endl;
		return false;
	}
	else{
		a[++top]=x;
		std::cout<<x<<" pushed"<<std::endl;
		return true;
	}
}

int main() 
{
    
    push(10); 
    push(20); 
    push(30); 
    std::cout << peek() << " peek"<<std::endl;
    std::cout << pop() << " popped"<<std::endl; 
    std::cout << pop() << " popped"<<std::endl;
    std::cout << peek() << " peek"<<std::endl;
	
	return 0; 
} 
