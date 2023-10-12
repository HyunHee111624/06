#include <stdio.h>
#include <stdlib.h>

int sumTwo (int a, int b)
{
    int result1;
    result1 = a + b;
    return result1;
    // 그냥 return a+b;도 가능하다. 
}

int square (int n)
{
    int result2;
    result2 = n*n;
    return result2;
    // 그냥 return n*n;도 가능하다. 
}

int get_max (int x, int y)
{
    if ( x > y )
       return x;
    else 
       return y;
}


int main(int argc, char *argv[])
{
    int q, w;
    q = 3;
    w = 10;
     
    printf("sumTwo result : %i\n", sumTwo(q, w));
    
    printf("square result : %i\n", square (q));
    
    printf("get_max result : %i\n", get_max(q,w));
    
  system("PAUSE");	
  return 0;
}
