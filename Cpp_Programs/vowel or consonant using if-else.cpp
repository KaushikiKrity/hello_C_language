// c program to check vowel or consonant using if else

#include <stdio.h>

void vowel_or_consonant(char ch)
{
if ((ch == ‘a’ || ch == ‘e’ || ch == ‘i’ || ch == ‘o’ || ch == ‘u’) || (ch == ‘A’ || ch == ‘E’ || ch == ‘I’ || ch == ‘O’ || ch == ‘U’))
printf(“Vowel\n”);
else
printf(“Consonant\n”);
}

int main()
{
char ch;
printf(“\nInput a character : “);
scanf(” %c”,&ch);
printf(“\n%c is a “,ch);
vowel_or_consonant(ch);
return 0;
}

