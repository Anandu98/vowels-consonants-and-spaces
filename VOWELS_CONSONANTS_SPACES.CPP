#include <iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	clrscr();
	char str[20];
	int i, vowels, consonants, spaces;
	vowels=consonants=spaces= 0;
	cout<<"Enter a line of string: ";
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowels++;
		}
	else
		{
			consonants++;
		}
	}
	for(i=0; str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			spaces++;
		}
	}

	cout<<"No. of Vowels = "<<vowels<<"\n";
	cout<<"No. of Consonants =  "<<consonants<<"\n";
	cout<<"No. of space = "<<spaces<<"\n";
	getch();
}
