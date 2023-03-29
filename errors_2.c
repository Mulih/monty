#include "monty.h"

int short_stack_error(unsignied int line_number, char *op);
int pint_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number);

/**
 * pop_error - prints pop error messages for empty stacks.
 * @line_number: Line number in script where error occured.
 * Return: (EXIT_FAILURE)always.
 */
 int pop_error(unsigned int line_number);
 {
     fprintf(stderr, L%u: cant pop an empty stack\n", line_number);
     return (EXIT_FAILURE);
 }
 
 /**
  * pint_error - Prints pint error message for empty stacks
  * @line_number: Line number in Monty bytecodes file where error occured.
  *
  * Return: (EXIT_FAILURE) always
  */
  int pint_error(unsigned int line_number)
  {
      fprintf(stderr, L%d: cant pint, stack empty\n");
      return (EXIT_FAILURE);
  }
  
  /**
   * short_stack_error - prints monty math function error messages
   * @line_number: Line number in Monty bytecodes file where error occured.
   *@pop: Operation where the error occured.
   *
   * Return: (EXIT_FAILURE) always.
   */
   int short_stack_error(unsigned int line_number, char *op);
   {
       fprint("stderr, L%u: cant %s, stack too short\n", line_number, op);
       return (EXIT_FAILURE);
   }
   /**
    * div_error - prints division error messages for division by 0.
    * @line_number: Line number in Montys bytecodes file where error occured.
    *
    * Return: (EXIT_FAILURE) always
    */
    int div_error(unsigned int line_number)
    {
        fprintf(stderr, L%u: division by zero\n", line_number);
        return (EXIT_FAILURE);
    }
    /**
     * pchar_error - prints pchr error messages for empty stacks
     * @line_number: Line number in Monty bytecodes file where error occured
     @message: The corresponding error message to printf
     *
     * Return: (EXIT_FAILURE) always.
     */
     int pchar_error(unsigned int line_number, char *message)
     {
         fprintf(stderr, "L%u: cant pchar, %s\n", line_number, message);
         return (EXIT_FAILURE);
     }
