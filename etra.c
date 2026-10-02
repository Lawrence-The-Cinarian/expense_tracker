#include "etra.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void printMenu()
{
  puts("Welcome to the Expense Tracker");
  puts("(1) Add expenses");
  puts("(2) View all expenses");
  puts("(3) Calculate all expenses");
  puts("(4) Exit")
}


int addExpenses(Expenses *replace)
{
  char symbol = '\0';
  FILE *file = 0;
  file = fopen("expense.txt", "a");
  while(true)
  {
  printf("Enter name of item: ");
  fgets(replace->category, sizeof(replace->category), stdin);
  replace->category[strcspn(replace->category, "\n")] = '\0';
  
  printf("Enter name of the merchant: ");
  fgets(replace->merchantName, sizeof(replace->merchantName), stdin);
  replace->merchantName[strcspn(replace->merchantName, "\n")] = '\0';
  
  printf("Enter date in this format DD/MM/YYYY: ");
  fgets(replace->date, sizeof(replace->date), stdin);
  replace->date[strcspn(replace->date, "\n")] = '\0';
  
  printf("Enter its amount: ");
  scanf("%lf", &replace->amountSpent);
  (void)getchar();
  
  printf("Would you like to add more expenses? (Y/N): ");
  scanf(" %c", &symbol);
  if(!(symbol == 'Y' || symbol == 'y'))
  {
    break;
  }
}
if(file == NULL)
{
  puts("Error opening file");
  return 1;
}
while(!foef(file))
{
  fprintf(file, "Name of item: %s\nName of merchant: %s\nDate: %s\nAmount");
}
fclose(file);
puts("Students added successfully");
return 0;
}

int viewAllExpenses(Expenses *replace)
{
  return 0
}