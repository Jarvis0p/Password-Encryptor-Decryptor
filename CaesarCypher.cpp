#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
char a[100],x[100]="HELLO",y[100]="BYE",w[100];
	int b,c,ch;
	int encode();
	int decode();
int main()
{
	
	printf("\n---- PASSWORD ENCODER / DECODER ---\n\nEnter 1 to encode\nEnter 2 to Decode\nEnter 3 to exit\n\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: encode();
		break;
		case 2: decode();
		break;
		case 3: printf("\n\nThanks for using :)\n");
				return 1;
		break;
		default:printf("\n\nInvalid Input!\n\n");				
	}
	main();
	return 0;	
}
int encode()
{
	printf("Enter your Password: ");
	scanf("%s",&a);
	strcat(a,x);
	strcat(y,a);
	b=strlen(y);
	printf("The Encoded password is: ");
	for(c=0;c<b/2;c++)
	{
		if(c%2==0)
		{
			printf("%c",y[c]+7);
		}
		else
		{
			printf("%c",y[c]-4);
		}
	}
	for(c=b/2;c<b;c++)
	{
		if(c%2==0)
		{
			printf("%c",y[c]+4);
		}
		else
		{
			printf("%c",y[c]-7);
		}
	}
	return 0;
}
int decode()
{
	printf("Enter Encoded password: ");
	scanf("%s",&w);
	b=strlen(w);
	printf("Decoded Password: ");
	for(c=3;c<b/2;c++)
	{
		if(c%2==0)
		{
			printf("%c",w[c]-7);
		}
		else
		{
			printf("%c",w[c]+4);
		}
	}
	for(c=b/2;c<b-5;c++)
	{
		if(c%2==0)
		{
			printf("%c",w[c]-4);
		}
		else
		{
			printf("%c",w[c]+7);
		}
	}
	return 0;
}
