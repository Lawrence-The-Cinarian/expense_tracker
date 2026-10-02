#ifndef MAIN_ETRA_H
#define MAIN_ETRA_H

typedef struct
{
  double amountSpent;
  char date[20];
  char merchantName[40];
  char category[20];
} Expenses;

void printMenu();
int addExpenses(Expenses *replace);
int viewAllExpenses(Expenses *replace);

#endif