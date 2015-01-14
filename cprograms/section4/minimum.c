/* Retrun the smaller of two values. */

#define minimum(A,B) ((A)<(B)?(A):(B))	/* function like macro return smaller val */

double min(double val_1, double val_2)
{
   return(minimum(val_1, val_2));	/* return smaller value */
}