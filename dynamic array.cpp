#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *p,n,i,s=0;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
      scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
      s=s+p[i];
    }
printf("%d",s);

}


