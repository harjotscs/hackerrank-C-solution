#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* m, int n, char g) {
  int i,s=0;
  if(g=='g')
  {
    for(i=0;i<n;i++)
    {
      if(i%2!=0)
      {
        s=s+m[i];
      }

    }
  }
  if(g=='b')
  {
  	for(i=0;i<n;i++)
    {
      if(i%2==0)
      {
        s=s+m[i];
      }

    }
  }
  return s;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
