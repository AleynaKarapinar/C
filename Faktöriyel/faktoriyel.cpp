//Kullanýcýdan sayý alýp faktöriyelini hesaplatýyorum
//Faktöriyel matematikte herhangi bir sayma sayýnýn 1'den baþlayarak o sayýya kadar birbiriyle çarpýlmasýyla elde edilen fonksiyondur.
#include<stdio.h>

main(){
       int i, x1,x2=1;
       printf("Faktöriyelini almak istediðiniz sayýyý giriniz : ");
       scanf("%d",&x1);
      
       for(i=1;i<=x1;i++)//1'den baþlayýp kullanýcýn girdiði sayýya kadar birbiriyle çarpar
       {
          x2 = i * x2;                    
       }      
      
       printf("\n%d!  = %d",x1,x2); // Faktöriyerlin sonucunu gösterir
      

}
