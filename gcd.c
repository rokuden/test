#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y);
 
int main(int argc, char *argv[])
{
 
 int a = 0,b = 0;
  
 if  (argc != 3){
         printf("%s\n",argv[0]);
         return 0;
 }
         a = atoi(argv[1]);
         b = atoi(argv[2]);
         printf("%d\n",atoi(argv[2]));
         printf("GCD = %d\n",gcd(a, b));
         return 0;
 }
 
 int gcd(int x, int y)
 {
         if (y == 0){
                 return x;
                 printf("%d %d", x, y);
         } else {
                 return gcd(y, x % y);
                 printf("%d %d", x, y);
         }
 }
