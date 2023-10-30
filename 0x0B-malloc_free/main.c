#include <stdlib.h>
#include <stdio.h>
#include "main.h"



void print_tab(char **tab)
{
 int i;
 for (i = 0; tab[i] != NULL; ++i)
 {
 printf("%s\n", tab[i]);
 }
}

int main()
{
 char **tab;
 tab = strtow("  manzanas ALX School #cisfun barbecue");
 if (tab == NULL)
 {
 printf("Failed\n");
 return (1);
 }
 print_tab(tab);
 return (0);
}
