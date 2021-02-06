//İki Yönlü Asal Sayı Bulma
//İki yönlü asal sayılar hem basamakları sırasıyla okunduğunda hem de basamakları tersten okunduğunda asal sayı olan sayılara denir.

#include<stdio.h>

int i,sayi,sayac=0,ters=0;

int kontrol(int x){  // Sayının asal olup olmadığı kontrol eden fonksiyon
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
    scanf("%d",&sayi); // Kullanıcıdan bir sayı girmesi istenir
   
   kontrol(sayi); // Fonksiyon çağırılarak asallık kontrolü yapılır
    
    if(sayac==0) // Sayı asalsa tersi alınır
    {
        printf("Girilen Sayi Asaldir \n");
		    printf("Girilen Sayinin Tersi: ");
            while (sayi != 0) {
        ters *= 10;
        ters += sayi % 10;
        sayi /= 10;
    }
    printf("%d\n", ters);
 
			  
			      kontrol(ters); //Tersi alınan sayının asal olup olmadığı kontrol edilir
    
                              if(sayac==0) 
                                          {
                                 printf("Iki Yonlu Asaldir");                    
                                          }
                              else
                                         {
                                 printf("Ikı Yonlu Asal Degildir"); 
                                         }
    }             
    
    else
    {
        printf("Girilen Sayi Asal Degildir"); 
    }
    
   
}
