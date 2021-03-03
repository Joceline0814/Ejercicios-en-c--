#include <stdio.h>
#include <conio.h>
main()
{
      float s1,s2,s3,au1,au2,au3,to1,to2,to3;
      printf("\n AUMENTO");
      printf("\n INGRESAR SALARIO DEL EMPLEADO PRIMERO:");
      scanf("%f",& s1);
      if (s1 < 0){
      printf("\n ERROR");
      }else{
            printf("\n INGRESAR SALARIO  DEL EMPLEADO SEGUNDO:");
            scanf("%f",& s2);
            if (s2 < 0 ){
                   printf("\n ERROR");
                   }else{
                         printf("\n INGRESAR SALARIO DEL EMPLEADO TERCERO:");
                         scanf("%f",& s3);
                         if ( s3 < 0 ){
                              printf("\n ERROR");
                               }else{
                                     au1=s1*0.1;
                                     au2=s2*0.12;
                                     au3=s3*0.15;
                                     to1=s1+au1;
                                     to2=s2+au2;
                                     to3=s3+au3;
                                     
                                     printf("\n EL AUMENTO DEL PRIMERO ES DE: %f", au1);
                                     printf("\n SU SALARIO ES DE: %f", to1);
                                     printf("\n EL AUMENTO DEL PRIMERO ES DE: %f", au2);
                                     printf("\n SU SALARIO ES DE: %f", to2);
                                     printf("\n EL AUMENTO DEL PRIMERO ES DE: %f",au3);
                                     printf("\n SU SALARIO ES DE: %f", to3);
                                      }
                         }
             }
      getch();
      }
