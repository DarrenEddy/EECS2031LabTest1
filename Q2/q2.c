# include <stdio.h> 
# include "q2.h"
int countDigits(int x, int d)
{
int total = 0;
while (x > 0)
{
    int dig = x%10;
    x /= 10;
    if (dig == d){total++;}
}
return total;
}

char testCountDigits(int x, int d, int result, char msg)
{
int test = countDigits(x, d);

int length = snprintf(NULL, 0, "%d", x )+14;
char output[length];

if (test == result){snprintf(output,length, "Test Passed %s", msg);}
else{snprintf(output,length, "Test Failed %s", msg);}
return output;
}

