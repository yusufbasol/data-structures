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
	for(i=1; i<=N; i++){
		for(j=1;j<N; j++){
			if(A[j+1]<A[j]){
				tasinan=A[j];
				A[j]=A[j+1];
				A[j+1]=tasinan;
			}
		
	}
	
}
	for(i=1; i<=N; i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
				
