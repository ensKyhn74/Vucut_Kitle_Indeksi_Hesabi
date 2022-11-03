#include <stdio.h>
// klavyeden girilen boy ve kilo degerine göre Vücut Kitle İndeksi hesaplanır

int main() 

{
 
 float kilo,boy;
 
 float VucutKitleIndeksi;
 
 printf("kilo degerinizi kg cinsinden girin: ");
 scanf("%f",&kilo);
  
 printf("boy uzunlugunuzu metre cinsinden girin: ");
 scanf("%f",&boy);
  
 VucutKitleIndeksi = kilo / (boy * boy) ;
 
  if(VucutKitleIndeksi < 18.50)
  {
   printf("zayif\n");
    
   printf("Vucut Kitle Indeksiniz: %.2f",VucutKitleIndeksi);
  }    
   
   
  else if(VucutKitleIndeksi >= 18.50 && VucutKitleIndeksi <= 24.90)
  {  
   printf("saglikli\n");
    
   printf("Vucut Kitle Indeksiniz: %.2f",VucutKitleIndeksi);
  }
    
    
  else if(VucutKitleIndeksi >= 25.00 && VucutKitleIndeksi <= 29.99)
  {
   printf("fazla kilolu\n");
     
   printf("Vucut Kitle Indeksiniz: %.2f",VucutKitleIndeksi);
  }
     
     
  else if(VucutKitleIndeksi >= 30.00 && VucutKitleIndeksi <= 34.90)
  {
   printf("1.dereceden obozite\n");
     
   printf("Vucut Kitle Indeksiniz: %.2f",VucutKitleIndeksi);
  }
      
      
  else if(VucutKitleIndeksi >= 35.00 && VucutKitleIndeksi <= 39.90) 
  {  
   printf("2.dereceden obozite\n");
       
   printf("Vucut Kitle Indeksiniz: %.2f",VucutKitleIndeksi); 
  }
      
  return 0;

}