#include<stdio.h>
#include<conio.h>
int main ()
{
    int l, r;
 
    /* Sort the elements */
    quickSort(A, 0, arr_size-1);
 
    /* Now look for the two candidates in the sorted 
       array*/
    l = 0;
    r = arr_size-1; 
    while (l < r)
    {
         if(A[l] + A[r] == sum)
              return 1; 
         else if(A[l] + A[r] < sum)
              l++;
         else // A[i] + A[j] > sum
              r--;
    }    
   getch();
}
 
