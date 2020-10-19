// mathematics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int multiplyNumbers(int num1, int num2)
{
	return num1 * num2;
}
int sumNumbers(int num1, int num2)
{
	return num1 + num2;
}
int divideNumbers(int num1, int num2)
{
	return num1 / num2;
}
int substractNumbers(int num1, int num2)
{
	return num1 - num2;
}
int main()
{
	int a, b, c;
	printf("Enter any two numbers \n a & b");
	//scanf_s("%d%d",&a,&b);
	std::cin >> a;
	std::cin >> b;
	c = sumNumbers(a, b);
	printf(" sum of two numbers= ");

	std::cout << c;
	int mult = multiplyNumbers(a, b);
     printf("\n multiplication of numbers= ");
	std::cout << mult;
	int div = divideNumbers(a, b);
	printf("\n Division  of numbers= ");
	std::cout << div;
	int subs = substractNumbers(a, b);
	printf("\n substraction of numbers= ");
	std::cout << subs;


	return 0;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
