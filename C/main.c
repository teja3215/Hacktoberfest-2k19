#include <stdio.h>
//find factorial

int main(void) {

  int i, num; 
  int fact = 1;
 
  //ask user inputs
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num);
 
  //calculate the factorial
  for (i = 1; i <= num; i++)
    fact = fact * i;
 
  //print the answe
  printf("Factorial of %d is %d\n", num, fact);
  printf("happy hacking");
  printf("hacktoberfest 2k19");
 
  return 0;
}