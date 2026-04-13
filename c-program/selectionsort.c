//to sort the program using the selectionsort in bruteforce technique

#include<stdio.h>
int main(){
   int n, i, j, min, temp;
   printf("Enter number of elements: ");
   scanf("%d", &n);

   int A[n];

   printf("Enter %d elements: ", n);
   for(i=0; i<n; i++){
      scanf("%d", &A[i]);
   }


   for(i=0; i<n-1; i++){
      min = i;
      for(j=i+1; j<n; j++){
         if(A[j] < A[min]){
            min = j;
         }
      }
      temp = A[min];
      A[min] = A[i];
      A[i] = temp;
   }

   printf("Sorted array: ");
   for(i=0; i<n; i++){
      printf("%d ", A[i]);
   }
   printf("\n");

   return 0;
}
