#include <stdio.h>

int main()
{
  char name[20];

  printf("What is your name? >> ");
    scanf(" %s", name);
  printf("\nHello %s!\nI hope you're enjoying Hacktoberfest 2018!\n", name);

  return 0;
}
