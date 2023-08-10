#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a first char: %lu byte(S)\n",(unsigned long)sizeof(a));
printf("size of a second char: %lu byte(S)\n",(unsigned long)sizeof(b));
printf("size of a third char: %lu byte(S)\n",(unsigned long)sizeof(c));
printf("size of a forth char: %lu byte(S)\n",(unsigned long)sizeof(d));
printf("size of a fifth char: %lu byte(S)\n",(unsigned long)sizeof(f));
return (0);
}
