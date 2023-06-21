#include <stdio.h>
#include <string.h>

int sayac=0;
void permutasyon(char A[], int ilk, int son);
void takas(char *x, char *y);

int main(){
	
	char dizi[3] = {'a', 'b', 'c'};
	int uzunluk = strlen(dizi);
	permutasyon(dizi, 0, uzunluk - 1);
	
	printf("\n\nToplam kombinasyon sayisi:%d",sayac);
	return 0;
}

void permutasyon(char A[], int ilk, int son)
{
	int i;
	if(ilk == son){
		for(i = 0; i <= son; i++)
			printf("%c", A[i]);
		printf("\n");
		sayac++;
	}
	
	else {
		for(i = ilk; i <= son; i++){
			takas(&A[ilk], &A[i]);
			permutasyon(A, ilk + 1, son);
			takas(&A[ilk], &A[i]);
		}
	}
}

void takas(char *x, char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}

