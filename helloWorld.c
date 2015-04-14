#include <stdio.h>

char name[20];
int age;

int main(void) {
  printf("Please enter your name: ");
  scanf("%s",name);
  printf("Please enter your age");
  scanf("%d",age);
  printf ("%s, you are %d years old.\n",name,age);
  printf("Hello World!\n");
  // return 0; 
}
