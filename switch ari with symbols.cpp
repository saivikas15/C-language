#include<stdio.h>
main()
{
 int a,b,i=0;
 char n;
do{ printf("Enter a,b ");
 scanf("%d%d",&a,&b);
 printf("select + for addition \n");
 printf("select - for sub \n");
 printf("select / for quotient \n");
 printf("select * for  mult \n");
 printf("select % for remainder \n");
 printf("Enter choice ");
 scanf(" %c",&n);
 switch(n)
 {
  case '+':
   printf("%d\n",a+b);
   break;
  case '-':
   printf("%d\n",a-b);
   break;
 case '/':
   printf("%d\n",a/b);
   break;
 case '*':
   printf("%d\n",a*b);
   break;
 case '%':
   printf("%d\n",a%b);
 break;
 default:
  printf("invalid \n");
  }
  i++;
 }while(i<6);
}
