#include<stdio.h>

int main()
{
  int state=0,i=0;
  char str[10],ch;
  printf("Enter the string: ");
  scanf("%s",str);

  ch=str[i];
  
  while(str[i]!='\0')
  {
   //Move function
   switch(state)
   {
    case 0: if(ch=='a')
                state=1;
            else
                state=2;
            break;
    case 1: if(ch=='b')
                state=1;
            else
                state=2;
   }
   ch=str[++i];
  
   }
   if(state==1)
     printf("Valid\n");
   else
     printf("Invalid\n");

  return 0;
}
