#include <stdio.h>
#include <stdlib.h>

int factorial ( int a )
{
    int res = 1;
    int i;
    for (i=1; i<=a; i++)
        res = res*i;
    return res;
}


int combination ( int n, int r )
{
    int div1, div2; // div1 = 분자, div2 = 분모
    
    div1 = factorial(n);//n!
    div2 = factorial (n-r) * factorial(r);
    
    // 분모/분자 나누기 연산
   return (div1 / div2) ;
}

int main(int argc, char *argv[])
{
    int n, r; 
    int result;
    
   // 1. 입력 값 받음
      // 메세지 출력
   printf("input n : "); 
      // n 입력
   scanf("%d", &n);
   
      // 메세지 출력
   printf("input r : "); 
      // r 입력 
   scanf("%d", &r);
   
   // 2. 분모/분자 계산
   result = combination( n,r );
   
   // 3. 최종값 출력
      
      // 결과 출력  
   printf("result is %i\n", result);
    
   
  system("PAUSE");	
  return 0;
}
