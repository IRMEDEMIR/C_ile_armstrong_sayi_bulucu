#include<stdio.h>
#include<math.h>
int armstrng(int sayi)
{
	int  klonsayi, kalan, n = 0;
    int  sonuc = 0;
	for (klonsayi = sayi; klonsayi != 0; ++n)
	{
       klonsayi /= 10;
    }

    
   for (klonsayi = sayi; klonsayi != 0; klonsayi /= 10) 
   {
    kalan = klonsayi % 10;
    sonuc += pow(kalan, n);
    }
    
   printf("\n%d\n\n",sonuc);
   
   if ((int)sonuc == sayi)
   {
   	return 0;
   }
  
   else
   {
   	return 1;
   }
  
}

int main()
{
	int sayi,i=1;
	while(i=1)
	{
	printf("Bir sayi giriniz:\n\n");
	scanf("%d",&sayi);
	 
	 if(sayi==0)
	 {
	 	return 0;
	 }
	
	if(armstrng(sayi)==0)
	{
		printf("Sayi Armstrongtur.");
	}
	
	else 
	{
		printf("Sayi Armstrong degildir.");
	}
	
	printf("\n\n(Sonlandirmak icin 0 a basiniz.)");
	
    }
	return 1;
}

