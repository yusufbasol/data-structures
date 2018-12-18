#include <stdio.h>
int N=10;
int a[10]={50,70,30,40,10,80,30,100,20,90};

void degis(int x[],int i, int j){
	int temp;
	temp=x[i];
	x[i]=x[j];
	x[j]=temp;
}

void quickSort(int a[], int sol,int sag){
	int i,j,v;
	if(sag>sol){
 		v=a[sag];
	 	i=sol-1;
	  	j=sag;
		while(i<j){
			while(a[++i] < v);
			while(a[--j] > v);
				if(i<j)
				degis(a,i,j);
		}	
	    degis(a,i,sag);
	    quickSort(a,sol,i-1);
	    quickSort(a,i+1,sag);
	}
}
void main(){
	int i;
	printf("\nDizinin ilk hali:\n");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	
	quickSort(a,0,N);
	
	printf("\nSiralanmis hali:\n");
	for(i=1; i<=N; i++)
		printf("%d ",a[i]);
}
