//Ýki Yönlü Asal Sayý Bulma
//Ýki yönlü asal sayýlar hem basamaklarý sýrasýyla okunduðunda hem de basamaklarý tersten okunduðunda asal sayý olan sayýlara denir.

#include<stdio.h>

int i,sayi,sayac=0;

int kontrol(int x){  // Sayýnýn asal olup olmadýðý kontrol eden fonksiyon
 for(i=2;i<x;i++)
    {
       if(x%i==0)
       {
           sayac++;
       }    
    }    
}
main()
{
    printf("Sayiyi Giriniz : ");
    scanf("%d",&sayi); // Kullanýcýdan bir sayý girmesi istenir
   
   kontrol(sayi); // Fonksiyon çaðýrýlarak asallýk kontrolü yapýlýr
    
    if(sayac==0) // Sayý asalsa tersi alýnýr
    {
        printf("Girilen Sayi Asaldir \n");
		    printf("Girilen Sayinin Tersi: ");
            while( sayi>10 ) {
            printf("%d",sayi % 10);
            sayi /= 10;}
             printf("%d\n",sayi); 
			  
			      kontrol(sayi); //Tersi alýnan sayýnýn asal olup olmadýðý kontrol edilir
    
                              if(sayac==0) 
                                          {
                                 printf("Iki Yonlu Asaldir");                    
                                          }
                              else
                                         {
                                 printf("Iký Yonlu Asal Degildir"); 
                                         }
    }             
    
    else
    {
        printf("Girilen Sayi Asal Degildir"); 
    }
    
   
}
