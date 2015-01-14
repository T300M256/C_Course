/* Returns product of two values. */

static int getAnswer(int num1, int num2)
{
   return(num1 * num2);			/* return product of two values internally */
}

int getProduct(int num1, int num2)
{
   return(getAnswer(num1, num2));	/* return product of two values */
}