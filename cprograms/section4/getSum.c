/* Returns sum of two values. */

static int getAnswer(int num1, int num2)
{
   return(num1 + num2);			/* return sum of two values internally */
}

int getSum(int num1, int num2)
{
   return(getAnswer(num1, num2));	/* return sum of two values. */
}