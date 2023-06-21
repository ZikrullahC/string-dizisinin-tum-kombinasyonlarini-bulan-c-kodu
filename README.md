# Permutasyon Kombinasyon Bulucu

Bu program, verilen bir karakter dizisinin tüm permütasyonlarını bulan bir C programıdır. Permütasyon, bir kümenin elemanlarının farklı sıralamalarını ifade eder.

## Nasıl Kullanılır

1. Programı derlemek için bir C derleyicisi (örneğin, gcc) kullanın:

   ```shell
   gcc -o permutasyon permutasyon.c
Oluşturulan çalıştırılabilir dosyayı çalıştırarak programı başlatın:

./permutasyon
Program, varsayılan olarak dizi adlı bir karakter dizisi üzerinde çalışır. Kodun başında tanımlanan dizi dizisini değiştirerek farklı karakterlerle deneyebilirsiniz.

Program çalıştırıldığında, tüm permütasyonlar ekrana yazdırılır.

Örnek
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void permutasyon(char A[], int ilk, int son);
void takas(char *x, char *y);

int main(){
	
	char dizi[3] = {'a', 'b', 'c'};
	int uzunluk = strlen(dizi);
	permutasyon(dizi, 0, uzunluk - 1);
	
	return 0;
}

// ... (kodun geri kalanı)

Yukarıdaki örnekte, "abc" karakter dizisi üzerinde permütasyonlar bulunur. Program çalıştırıldığında, aşağıdaki çıktı üretilir:

abc
acb
bac
bca
cab
cba

Gereksinimler
C derleyicisi (örn. gcc)

