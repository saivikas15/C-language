#include<stdio.h>
main()
{
	char ch;
	printf("enter character   ");
	scanf("%c",&ch);
	if (ch=='a'|| ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch=='A'|| ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U')
	printf("%c char is vowel",ch);
	else 
	printf("%c char is consonant",ch);
}
