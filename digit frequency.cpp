#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   char c[1000];
   int i,j,x,a[10]={0};
   scanf("%s",c);
   for(i=0;i<strlen(c);i++)
   {
     if (c[i] >= '0' && c[i] <= '9') {
        ++a[c[i] - '0'];
    }
   }
     for(j=0;j<10;j++)
     {
      printf("%d ",a[j]);
     }

    return 0;
}

