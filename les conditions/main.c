#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=0;
    printf("entrez votre age\n");
    scanf("%d",&age);

   if(age>=18 && age<=30)
   {
       printf("bienvenue chez cih banque");
   }
   else
   {
       printf("desole mais vous n avez pas les conditions necessaire");
   }

}


