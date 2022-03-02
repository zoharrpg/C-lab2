/*
 * pointer.c - Source file with your solutions to the Lab.
 *             This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>. The included file, "common.c" contains a function declaration
 * that should prevent a compiler warning. In general, it's not good practice
 * to ignore compiler warnings, but in this case it's OK.
 */

#ifndef COMMON_H
#include "common.h"
#endif

/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

#if 0
You will provide your solution to this homework by
editing the collection of functions in this source file.

INTEGER CODING RULES:

  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code
  must conform to the following style:

  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
     not allowed to use big constants such as 0xffffffff.
     However, you are allowed to combine constants to values greater
     than 255 or less than 0. e.g. 250 + 250 = 500, so long as
     the operator you are using to combine the constants is listed as
     "legal" at the top of the method you are writing.
  2. Function arguments and local variables (no global variables).
  3. Any operators listed as "allowed" at the top of the method you are writing.
  4. casting.

  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc. (unless
     otherwise stated).
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions (unless otherwise stated).
  5. Use any operators not "allowed" at the top of the method you are writing.

  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has *undefined* behavior when shifting by a negative amount or an amount
     greater than or equal to the number of bits in the value being shifted.
     e.g. For x >> n, shifts by n < 0 or n >= *size of x* are undefined
     e.g. if x is a 32-bit int, shifts by >= 32 bits are undefined
     Undefined means you do not know what result you will get from the operation.
#endif

/*
 * STEP 2: Modify the following functions according the coding rules.
 */

/*
 * Return the size of an integer in bytes.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, eFDIStc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, <<, >>, ==, !=, ^, /, %
 *   Unary integer operators: ~, -
 */
int intSize() {
  int intArray[10];
  int * intPtr1;
  int * intPtr2;
  long result;

  /*get initial pointer address*/
  intPtr1=intArray;

  /*get next value pointer*/
  intPtr2=intArray+1;

  /*Get difference and return size*/
  result=(long)intPtr2-(long)intPtr1;

  






  // Write code to compute size of an integer.

  return result;
}

/*
 * Return the size of a double in bytes.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, etc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, <<, >>, ==, !=, ^, /, %
 *   Unary integer operators: ~, -
 */
int doubleSize() {
  double doubArray[10];
  double * doubPtr1;
  double * doubPtr2;
  long result;
  // Write code to compute size of a double.


/*get initial pointer address*/
  doubPtr1=doubArray;

    /*get next value pointer*/
  doubPtr2=doubArray+1;

  /*Get difference and return size*/
  result=(long)doubPtr2-(long)doubPtr1;
  

  return result;
}

/*
 * Return the size of a pointer in bytes.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, etc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, <<, >>, ==, !=, ^, /, %
 *   Unary integer operators: ~, -
 */
int pointerSize() {
  int * ptrArray[10];
  int ** ptrPtr1;
  int ** ptrPtr2;
  int result;
  

  /*get initial pointer address*/
  ptrPtr1=ptrArray;
  
   /*get next value pointer*/
  ptrPtr2=(ptrArray+1);

  result=(long)ptrPtr2-(long)ptrPtr1;
/*Get difference and return size*/

  // Write code to compute size of a pointer.

  return result;
}

/*
 * Given pointers to two distinct variables write a function to swap the values
 * of said variables.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, etc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, <<, >>, ==, !=, ^, /, %
 *   Unary integer operators: ~, -
 */
void swapInts(int * ptr1, int * ptr2) {
  int temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;

  // Your code here
}

/*
 * Modify intArray[5] to be the value 449 using only intArray and pointer arithmetic.
 * 
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *, <<, >>, ==, ^
 *   Unary integer operators: !, ~
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, ~= etc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, !=, /, %
 *   Unary integer operators: -
 */
int changeValue() {
  int intArray[10];
  int * intPtr1 = intArray;

  /* get 449 value*/
  int number=0xFF + 0xC2;
  *(intArray+5)=number;
  
  // Remember not to use constants greater than 255.
  // Remember to use * to dereference. You cannot use '[<index>]' syntax.

  // replace the line below to use pointer arithmetic
  return intArray[5];
}

/*
 * Return 1 if the addresses stored in ptr1 and ptr2 are within the
 * *same* 64-byte aligned  block of memory. Check the spec for examples if you are
 * confused about what this means. Return zero otherwise.
 * Operators / and % and loops are NOT allowed.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *, <<, >>, ==, ^
 *   Unary integer operators: !, ~
 *   Shorthand operators based on the above: ex. <<=, *=, ++, --, etc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, !=, /, %
 *   Unary integer operators: -
 */
int withinSameBlock(int * ptr1, int * ptr2) {

  int result=((long)ptr1>>6)==((long)ptr2>>6);// Check upper whehter upper bit is equal
  // Your code here
  return result;
}

/*
 * Return 1 if ptr points to an element within the specified intArray, 0 otherwise.
 * Pointing anywhere in the array is fair game, ptr does not have to
 * point to the beginning of an element. Check the spec for examples if you are 
 * confused about what this method is determining.
 * size is the size of intArray in number of ints. Can assume size != 0.
 * Operators / and % and loops are NOT allowed.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *, <<, >>, ==, ^
 *   Unary integer operators: !, ~
 *   Shorthand operators based on the above: ex. <<=, *=, ++, --, etc.
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, !=, /, %
 *   Unary integer operators: -
 */
int withinArray(int * intArray, int size, int * ptr) {

  /*check the bits that upper than size, if it is the should be within Arrary*/

  int result=(((long)ptr)>>size)==(((long)intArray)+size-1)>>size;

  



  // Your code here

  return result;
}

/*
 * In C characters are are terminated by the null character ('\0')
 * given a pointer to the start of the string return the length of this string.
 * (The null character is not counted as part of the string length.)
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *, ==, !=, <, >
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. <<=, *=, ++, --, etc.
 *   Control constructs: for, while
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <<, >>, ^, /, %
 *   Unary integer operators: ~, -
 */
int stringLength(char * s) {

int length=0;
while((* s)!='\0')
{
  s+=1;
  length+=1; /*count the length*/

}
  // Your code here
  return length;
}

/*
 * Returns the length of the initial portion of str1 which consists only of characters that are part of str2.
 * The search does not include the terminating null-characters of either strings, but ends there.
 * 
 * Example, stringSpan("abcdefgh", "abXXcdeZZh"); // returns 5
 *  
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *, ==, !=, <, >
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. <<=, *=, ++, --, etc.
 *   Control constructs: for, while
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <<, >>, ^, /, %
 *   Unary integer operators: ~, -
 */
int stringSpan(char * str1, char * str2) {
  // Your code here

  int length=0;
  char* point=str2;//starter point
  int breakpoint;
 


  while(*str1!='\0')
  {

    breakpoint=0; /*a break point*/

    point=str2; /*get address of initial str2*/

    while(*point!='\0')
    {
      if(*point==*str1)
      {
        length++;
        breakpoint=1;
        break;

      }
      point++;

    }

    /*If current is not part of str2,just break*/

    if(!breakpoint)
    {
      break;
    }




    str1++;
  }
  return length;
}

/*
 * Change the value pointed to by ptr byte-by-byte so that when returned as an integer
 * the value is 449449.
 *
 * Hint: Remember that an int is 4 bytes.
 *
 * Hint: Remember how little endian works for data storage, how is it different between an multiple bytes(int) and a single byte?
 *
 * Hint: It will be easiest to start convert 449449 into binary form and starting seeing how the endian works from there.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, etc.
 *   Unary integer operators: !
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <, >, <<, >>, ==, !=, ^, /, %
 *   Unary integer operators: ~, -
 */
int endianExperiment(int * ptr) {
  char *bytePtr;

  bytePtr=(char*)ptr;

 *bytePtr = 0xA9; // 0x000000A9
  bytePtr++;
  *bytePtr = 0xDB; // 0x0000DBA9
  bytePtr++;
  *bytePtr = 0x06; // 449449
  
  return *ptr;
}

/*
 * Selection sort is a sorting algorithim that works by partitioning the array into
 * a sorted section and unsorted section. Then it repeatedly selects the minimum element
 * from the unsorted section and moves it to the end of the sorted section.
 *
 * So the pseudo-code might look something like this:
 * arr - an array
 * n - the length of arr
 *
 * for i = 0 to n - 1
 *   minIndex = i
 *   for  j = i + 1 to n
 *       if arr[minIndex] > arr[j]
 *           minIndex = j
 *       end if
 *   end for
 *   Swap(arr[i], arr[minIndex])
 * end for
 *
 * Implement selection sort below, it might be helpful to use the swapInts function you
 * defined earlier.
 *
 * ALLOWED:
 *   Pointer operators: *, &
 *   Binary integer operators: -, +, *, ==, !=, <, >
 *   Unary integer operators: !
 *   Shorthand operators based on the above: ex. +=, *=, ++, --, etc.
 *   Control constructs: for, while, if
 *   Function calls: swapInt()
 *
 * DISALLOWED:
 *   Pointer operators: [] (Array Indexing Operator)
 *   Binary integer operators: &, &&, |, ||, <<, >>, ^, /
 *   Unary integer operators: ~, -
 */
void selectionSort(int arr[], int arrLength) {

  /*sort algorithms*/
  int i, j, min_index;

  int* left=arr;

for(i=0;i<arrLength-1;i++)
{
  min_index=i;
  for(j=i+1;j<arrLength;j++)
  {
     if (*(left + min_index) > *(left + j)) {
        min_index = j;
      }

  }
  swapInts(left+i,left+min_index);

}
  // Your code here
}
