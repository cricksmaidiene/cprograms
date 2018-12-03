#include<stdio.h>
void main()
{
	char colour;
	do
	{
		printf("Enter a character, B for Blue, G For Green OR R for Red\n");
		scanf(" %c", &colour);/*NOTE THE WHITESPACE NEAR %C, It is for the enter key pressed by user*/
	}
	
	while(colour!='r'&&colour!='R'&&colour!='B'&&colour!='b'&&colour!='G'&&colour!='g');
	
	switch(colour)
	{
		case 'r':/*This will fall through to 'R'*/
		case 'R': printf("RED\n");
			  break;
		case 'g':
		case 'G':
			printf("GREEN\n");
			break;
		case 'b':
		case 'B':
			printf("BLUE\n");
			break;
	}
}/*End Of Main() Method*/
