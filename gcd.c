#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y);
 
int main(int argc, char *argv[])
{
 
 int a = 0,b = 0;
 10 
 11 if  (argc != 3){
 12         printf("%s\n",argv[0]);
 13         return 0;
 14 }
 15         a = atoi(argv[1]);
 16         b = atoi(argv[2]);
 17         printf("%d\n",atoi(argv[2]));
 18         printf("GCD = %d\n",gcd(a, b));
 19         return 0;
 20 }
 21 
 22 int gcd(int x, int y)
 23 {
 24         if (y == 0){
 25                 return x;
 26                 printf("%d %d", x, y);
 27         } else {
 28                 return gcd(y, x % y);
 29                 printf("%d %d", x, y);
 30         }
 31 }
~                       
