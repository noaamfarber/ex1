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
  scanf("%d" , &position);
  scanf("%d",&number);
  int bit;
  bit = (number >> position) & 1;
  printf("the bit in the position is %d: %d\n", position, bit);

  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  scanf("%d", &position);
  scanf("%d", &number);
  int onBit;
  onBit=number | (1 << position);
  printf("the output when on is %d: %d\n", position, onBit);
  int offBit;
  offBit=number & ~(1 << position);
  printf("the output when off is %d: %d\n", position, offBit);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  scanf("%d", &position);
  scanf("%d", &number);
  int tog;
  tog=number ^ (1 << position);
  printf("after toggling bit its %d: %d\n",position,tog);
  

  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  scanf("%d", &number);
  int isEven;
  isEven= !(number&1);
  printf("%d\n", isEven);


  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int oct1,oct2,sum,extract,final;
  scanf("%o,oct1");
  scanf("%o,oct2");
  sum =oct1+oct2;
  extract = (1 << 3) | (1 << 5) | (1 << 7) | (1 << 11);
  final = sum & extract;
  printf("final result: %X\n", final);


  printf("Bye!\n");
  
  return 0;
}
