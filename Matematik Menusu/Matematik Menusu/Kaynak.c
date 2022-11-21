#include<stdio.h>
#include<stdlib.h>

int main() {

	int sec,topla,carp,kare,kup,x,s1,s2,denklem;

	printf("***Matematik Menusu***");

	printf("Bilgi Alani\n----------\n");
	printf("Rakamlarla islemleri seciniz.\n");
	printf("1-)Toplama islemi.\n");
	printf("2-)Carpma islemi.\n");
	printf("3-)Kare alma islemi.\n");
	printf("4-)Kup alma islemi.\n");
	printf("5-)Denklem coz.\n");
	printf("Denklem=5x^2+4x+3\n");

	printf("\n\nislem seciniz:");
	scanf_s("%d", &sec);

	if (sec == 1)
	{   
		printf("---Toplanacak Degerleri Giriniz---\n");
		printf("1.Sayiyi Seciniz: ");
		scanf_s("%d", &s1);
		printf("2.Sayiyi Seciniz: ");
		scanf_s("%d", &s2);
	}
	if(sec==2)
	{
		printf("---Carpilacak Degerleri Giriniz---\n");
		printf("1.Sayiyi Seciniz: ");
		scanf_s("%d", &s1);
		printf("2.Sayiyi Seciniz: ");
		scanf_s("%d", &s2);
	}
	if (sec == 3)
	{
		printf("---Karesi Alinacak Degeri Giriniz---\n");
		printf("X degeri giriniz: ");
		scanf_s("%d", &x);
	}
	if (sec == 4)
	{
		printf("---Kup Alinacak Degeri Giriniz---\n");
		printf("X degeri giriniz: ");
		scanf_s("%d", &x);
	}
	if (sec == 5)
	{
		printf("---Denklemde ki X Degerini Giriniz---\n");
		printf("X degeri giriniz: ");
		scanf_s("%d", &x);
	}
	
	switch (sec)
	{
	case 1: topla = s1 + s2; printf("Toplam=%d", topla); break;
	case 2: carp = s1 * s2; printf("Carp=%d", carp); break;
	case 3: kare = x * x; printf("Karesi=%d", kare); break;
	case 4: kup = x * x * x; printf("Kup=%d", kup); break;
	case 5: denklem = 5 * (x * x) + 4 * x + 3; printf("Denklem=%d", denklem); break;
	default: printf("Size verilen islem menusunde ki islemlerden birini seciniz.");
		
	}

	return 0;
  }