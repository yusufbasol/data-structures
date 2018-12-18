#include <stdio.h>
int N=10;
int a[10]={50,70,30,40,10,80,30,100,20,90};

void degis(int x[],int i, int j){
	int temp;
	temp=x[i];
	x[i]=x[j];
	x[j]=temp;
}

void shellSort(){
	int orta,i,j,k;
	orta= N/2;
	while(orta>0){
		for(i=orta; i<N; i++){
			j=i-orta;
			while(j>=0){
				k=j+orta;
				if(a[j]<a[k])
					j=-1;
				else{
					degis(a,j,k);
					j=j-orta;
				}
			}
		}
		if(orta==0)
			break;
		
		orta=orta/2;
	 }
}
void main(){
	int i;
	printf("\nDizinin ilk hali:\n");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	
	shellSort();
	
	printf("\nSiralanmis hali;\n");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
}
