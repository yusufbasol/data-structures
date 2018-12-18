#include <stdio.h>
#include <conio.h>
int i,j,tasinan,N;
int A[100];

void main(void){
	printf("dizi eleman sayisini giriniz: ");
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		printf("A[%d]: ",i);
		scanf("%d",&A[i]);
		printf("\n");
	}
	for(i=2; i<=N; i++){
		tasinan=A[i];
		j=i;
		while(j>1 && tasinan<A[j-1]){
			A[j]=A[j-1];
			j--;
		}
	     	A[j]=tasinan;
	}
	for(i=1; i<=N; i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}

