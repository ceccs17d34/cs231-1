/*
Shabeerdas c
S3 D-46
Insertion sort
*/
#include <stdio.h>
 
int main()
{
  int n,a[100],i,j,x;
 
  printf("Enter number of elements:\n");
  scanf("%d", &n);
 
  printf("Enter integers:\n");
 
  for (i= 0; i< n; i++)
    scanf("%d",&a[i]);
 
  for (i=1;i<=n-1;i++) {
    j=i;
 
    while(j>0 && a[j-1]>a[j]) {
      x=a[j];
      a[j]=a[j-1];
      a[j-1] =x;
 
      j--;
    }
  }
 
  printf("Sorted list:\n");
 
  for (i=0;i<=n-1;i++) {
    printf("%d\n", a[i]);
  }
 
  return 0;
}
