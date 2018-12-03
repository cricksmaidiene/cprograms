#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define MAX 100
int isPalindrome(char []);
void main()
{
	int i=0;
	char word[MAX],wordi[MAX];
	printf(" Enter The String : ");
	scanf("%s", word);
	for(i=0;i<strlen(word);i++)
	wordi[i]=tolower(word[i]);
	wordi[i+1]='\0';
	if(isPalindrome(wordi)==1)
	printf(" %s Is a palindrome\n", word);
	else
	printf(" %s Is not a palindrome\n",word);
}
int isPalindrome(char str[])
{
	int i,j;
	int l=strlen(str);
	for(i=0,j=l-1;i<=(l/2),j>=(l/2);i++,j--)
	{
		if(str[i]!=str[j])
		return 0;
		else 
		continue;
	}
	return 1;
}

