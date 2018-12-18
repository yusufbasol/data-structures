#include <stdio.h>

	int main(){
		int i,j,temp,min;
		int a=6;
		int dizi[a]={6,4,5,1,3,2};
	
		for(i=0; i<a-1; i++){
			min=i;
		 for(j=i; j<a; j++){
			if(dizi[j]<dizi[min]){
				min=j;
			}
				temp=dizi[i];
				dizi[i]=dizi[min];
				dizi[min]=temp;
				}
		}

		for(i=0; i<6; i++){
			printf("%d\n",dizi[i]);
		}
		
		return 0;
	

}
