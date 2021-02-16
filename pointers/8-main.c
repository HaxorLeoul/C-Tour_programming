#include<stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
    printf("Value of 'cc': %p\n", cc);
   printf("Address of 'cc': %p\n", &cc);
   *cc = 'o';

   printf("Value of 'ccc': %p\n", ccc);
   printf("Address of 'ccc': %p\n", &ccc);
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
    printf("Value of 'c' before the call: %d\n", c);
   printf("Address of 'c': %p\n", &c);
   printf("Value of 'p': %p\n", p);
   printf("Address of 'p': %p\n", &p);
   printf("Value of 'c' after the call: %c\n", c);
   
   modif_my_char_var(p, c);

      printf("Value of 'p' after the call: %p\n", &p);
         printf("Value of 'c' after the call: %c\n", c);


   return (0);
}