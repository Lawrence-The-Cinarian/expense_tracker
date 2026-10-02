#include "etra.h"
#include <stdio.h>

int main(void)
{
  Expenses calculated[500] = {0};
  int option = 0;
  do
  {
    printMenu();
    printf("Enter your name: ");
    scanf("%d", &option);
    (void)getchar();
    
    switch(option)
    {
      case 1:
      addExpenses(calculated);
      break;
      
      case 2:
      int viewAllExpenses(calculated);
      break;
      
      case 3:
      break;
      
      case 4:
      return 0;
      
      default:
      puts("invalid option");
    }
    
    
  }
  while(calculated < 500);
  return 0;
}