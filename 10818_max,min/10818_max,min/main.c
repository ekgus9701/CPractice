#include <stdio.h>

int main() {
   int max,min,num,i;
   int a[10000];
   scanf("%d", &num);
   
   for (i = 0; i < num; i++) {
      scanf("%d", &a[i]);
   }
   
   max=a[0];
   min=a[0];
   for (i = 1; i < num; i++) {
      if (a[i] > max) max = a[i];
      if (a[i] < min) min = a[i];
   }
   printf("%d %d", max, min);
}