// kkk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Given a positive integer denoting , do the following:
         
        If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
       If 1<=n<=9 , print Greater than 9.
        Input Format
        A single integer denoting n
        Constraints
      Output Format
        If n>9 , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead


#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;

    if (n == 1)
    {
        printf("one\n");
    }
    else if (n == 2)
    {
        printf("two\n");
    }
    else if (n == 3)
    {
        printf("three\n");
    }
    else if (n == 4)
    {
        printf("four\n");
    }
    else if (n == 5)
    {
        printf("five\n");
    }
    else if (n == 6)
    {
        printf("six\n");
    }

    else if (n == 7)
    {
        printf("seven\n");
    }

    else if (n == 8)
    {
        printf("eight\n");
    }
    else if (n == 9)
    {
        printf("nine\n");
    }
    else
    {
        printf("Greater than 9\n");
    }
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
