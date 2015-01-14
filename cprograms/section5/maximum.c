/* Return the greater of two values. */

# define maximum(A,B) ((A)>(B)?(A):(B))   /* function like macro return larger val */

double max(double val_1, double val_2)
{
   return(maximum(val_1, val_2));	   /* return larger number */
}