#include <stdio.h>
#include <stdlib.h>

int sumTwo (int a, int b)
{
    int result1;
    result1 = a + b;
    return result1;
    // �׳� return a+b;�� �����ϴ�. 
}

int square (int n)
{
    int result2;
    result2 = n*n;
    return result2;
    // �׳� return n*n;�� �����ϴ�. 
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
