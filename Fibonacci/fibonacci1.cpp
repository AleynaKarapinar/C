#include <stdio.h>
 
int main(){
 //Fibonacci Algoritmasý 
//Fibonacci sayýlarý 0 ve 1 ile baþlayan ve her sayýnýn kendisinden önce gelen iki sayýnýn toplanmasý ile elde edildiði bir sayý dizisidir.
    
    int i, x1=0, x2=1, x3;
    printf("Fibonacci Dizisi : ");
    
    for( i=1; i<=25; i++){ // 25 defa tekrarlanmasýný istedim

    
    if (i == 1) // ilk elemaný 0, ikinci elemaný 1 kabul edip ekrana yazdýrdým
    printf("%d %d ", x1, x2);
        
    x3 = x1 + x2;
    x1 = x2;
    x2 = x3;  
     printf("%d ", x3); //Ekrana toplanan sayýyý yazdýrdým
    
    }
    

    return 0;
}
