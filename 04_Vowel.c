#include<stdio.h>
void main()
{
	printf(" Enter a character ");
	char c;
	scanf("%c", &c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	printf(" The Character Is a Vowel ");
	else
	printf(" The Character is Not A Vowel");
}

