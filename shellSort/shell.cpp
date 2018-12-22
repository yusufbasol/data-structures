#include <iostream>
#include <stdio.h>
using namespace std;
void shell_sort (int *p, int size)
{
   int   i, j, k, temp;   // k: atlama miktari
   for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
                /*bubble sort kullandik*/
         for (i = k - 1; ++i < size; ) {
         temp = p[i];
         for (j = i; p[j - k] > temp; ) {
            p[j] = p[j - k];
            if ((j -= k) < k)
               break;
         }
         p[j] = temp;
      } /* */
   }
}

int main(){
	int A=11;
	int a[]={11,10,9,8,7,6,5,4,3,2,1};
	shell_sort(a,A);
	for(int i=0; i<A; i++)
		printf("%d ",a[i]);
}   
