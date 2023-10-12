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
    int div1, div2; // div1 = ����, div2 = �и�
    
    div1 = factorial(n);//n!
    div2 = factorial (n-r) * factorial(r);
    
    // �и�/���� ������ ����
   return (div1 / div2) ;
}

int main(int argc, char *argv[])
{
    int n, r; 
    int result;
    
   // 1. �Է� �� ����
      // �޼��� ���
   printf("input n : "); 
      // n �Է�
   scanf("%d", &n);
   
      // �޼��� ���
   printf("input r : "); 
      // r �Է� 
   scanf("%d", &r);
   
   // 2. �и�/���� ���
   result = combination( n,r );
   
   // 3. ������ ���
      
      // ��� ���  
   printf("result is %i\n", result);
    
   
  system("PAUSE");	
  return 0;
}
