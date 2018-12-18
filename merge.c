#include <stdio.h>
#include <conio.h>

void oku(void);
void bol(int,int);
void birles(int,int,int);
void yaz(void);
int n;
int A[100];

void main(void){
	oku();
	bol(1,n);
	yaz();
}
void oku(void){
	int i;
	printf("dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		printf("dizi elemanini giriniz: ");
		scanf("%d",&A[i]);
	}
}
void bol(int alt,int ust){
	int orta,alts,usts;
	if(alt<ust){
		alts=alt;
		usts=ust;
		orta=(alts+usts)/2;
		bol(alts,orta);
		birles(alts,orta,usts);
	}
}
void birles(int alts,int orta,int usts){
	int i,ass,usb,g;
	ass=orta;
	usb=orta+1;
	while((alts<=ass) && (usb<=usts)){
		if(A[alts]<A[usb])
			alts++;
		else{
		 	g=A[usb];
			for(i=usb-1; i>=alts; i--)
				A[i+1]=A[i];
			A[alts]=g;
			alts++;
			ass++;
			usb++;
		}
	}
}
void yaz(void){
	int i;
	for(i=1;i<=n;i++)
		printf("%d ",A[i]);
		printf("\n");
}
