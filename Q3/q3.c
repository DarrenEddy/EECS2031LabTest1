# include <stdio.h> 
# include "q3.h"
void setTriple(float a, float b, float c, float *x, float*y, float *z)
{
*x = a;
*y = b;
*z = c;
}

void addTriple(float a, float b, float c, float *x, float*y, float *z)
{
*x = *x + a;
*y = *y + b;
*z = *z + c;
}
