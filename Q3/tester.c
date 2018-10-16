# include <stdio.h>
# include "q3.h"

int main(int argc, char *argv[])
{
float x, y, z;

setTriple(1, 2, 3, &x, &y, &z);

addTriple(4, 5, 6, &x, &y, &z);

addTriple(x, y, z, &x, &y, &z);


printf("%f,%f,%f\n",x,y,z);

return 0;
}
