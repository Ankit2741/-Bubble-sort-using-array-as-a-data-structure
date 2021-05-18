#include<stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 int n;
 printf("Enter number of elements in the array:");
 scanf("%d", &n);

 int A[n] , t , i;
 printf("\nEnter elements in the array: ", n);
 for (i = 0; i < n; i++)
 scanf("%d", &A[i]);

 for (i = 0 ; i < n - 1; i++)
 {
 for (int j = 0 ; j < n - i - 1; j++)
 {
 if (A[j] > A[j+1])
 {
 t = A[j];
 A[j] = A[j+1];
 A[j+1] = t;
 }
 }
 }
 printf("\n\n Sorted list is: \n");
 for (i = 0; i < n; i++)
 printf(" %d", A[i]);
return 0;
}
