//c program to print the string untill the character is reached
#include <stdio.h> 
#include<string.h>
int
main (void) 
{
  
char S[100], C;
  
int i;
  
 
printf ("Enter string S: ");
  
gets (S);
  
printf ("Enter character C: ");
  
scanf ("%c", &C);
  
 
for (i = 0; S[i] != '\0'; i++)
    
    {
      
if (S[i] == C)
	
break;
      
printf ("%c", S[i]);
}
return 0;
}
extern char *gets(char *__s);


