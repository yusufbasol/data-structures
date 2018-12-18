#include <iostream>
#include <string>

using namespace std;

int bubbleSort(int dizi[]){
	int temp;
	for(int i=0; i<6/*dizi.length*/; i++){
		int sirali=1;
			for(int j=5/*dizi.length-1*/; j>i; j--){
			  if(dizi[j-1]>dizi[j]){
				sirali=0;
				temp=dizi[j-1];
				dizi[j-1]=dizi[j];
				dizi[j]=temp;
				}
			}
			if(sirali)
				break;
			}
		}
int main(){
	int dizi[]={6,4,5,3,1,2};
	bubbleSort(dizi);
		for(int i=0; i<6/*dizi.length*/; i++)
			cout<<dizi[i]<<endl;	
			
}
