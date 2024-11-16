/******************
Name:noaam farber   
ID:218882645
Assignment:1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int position,number;
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("Please enter a position:\n");
  scanf("%d" , &position);
  
  int bit;
  bit = (number >> position) & 1;
  printf("the bit in position %d of the number %d is: %d\n", position,number, bit);

  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
    printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");

  scanf("%d", &position);
  int onBit;
  onBit=number | (1 << position);
  printf("Number with bit %d set to 1: %d\n", position, onBit);
  int offBit;
  offBit=number & ~(1 << position);
  printf("Number with bit %d set to 0: %d\n", position, offBit);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
      printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");

  scanf("%d", &position);
  int tog;
  tog=number ^ (1 << position);
  printf("Number with bit %d toggled: %d\n",position,tog);
  

  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
        printf("Please enter a number:\n");

  scanf("%d", &number);
  int isEven;
  isEven= !(number&1);
  printf("%d\n", isEven);


  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int oct1,oct2,sum;
          printf("Please enter the first number (octal):\n");

  scanf("%o",&oct1);
            printf("Please enter the second number (octal):\n");

  scanf("%o",&oct2);
  sum =oct1+oct2;
  printf("The sum in hexadecimal: %X\n", sum);
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;

  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);


  printf("Bye!\n");
  
  return 0;
