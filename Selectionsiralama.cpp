#include <iostream>
using namespace std;

int selectionSort(int A[],int n){
	int temp;
	int min;
	
	for(int i=0; i<n-1; i++){
		min=i;
		for(int j=i;j<n;j++){
		  if(A[j]< A[min]){
			min=j;
		    }
		}
		  temp=A[i];
		  A[i]=A[min];
		  A[min]=temp;
	}
	
	return 0;
}
	int main(){
		int A[]={6,4,5,1,3,2};
		selectionSort(A,6);
		for(int i=0; i<6; i++)
			cout<<A[i]<<endl;
	}
	
