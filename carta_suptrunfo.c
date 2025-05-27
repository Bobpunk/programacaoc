//desafio criar 2 cartas de super trunfo

#include <stdio.h>

int main (){
    
        //primeira carta

char est1 ; 
char codcar1[3] ;
char cid1[20] ;
int pop1 ; 
int npt1;
float area1 ; 
float pib1 ;
  
  

        //segunda carta

char est2 ; 
char codcar2[3] ;
char cid2[20] ;
int pop2 ; 
int npt2;
float area2 ; 
float pib2 ;



  //leitura da primeira carta
  
printf("Digite a letra do 1º estado: ");
scanf(" %c" ,&est1) ;

printf("Digite o codigo 1º estado: ");
scanf("%s" ,codcar1) ;


printf("Digite a cidade do 1º estado: ");
scanf("%s" ,cid1 ) ;

printf("Digite a população do 1º estado: ");
scanf ("%d", &pop1) ;


printf("Digite a Área do 1º estado: ");
scanf ("%f", &area1) ;

printf("Digite o PIB o 1º estado: ") ;
scanf(" %f", &pib1) ;

printf("Digite o número de pontos turisticos da 1º cidade   ");
scanf("%d", &npt1 ) ;

//leitura 2 carta

printf("Digite a letra do 2º estado: ");
scanf(" %c" ,&est2) ;

printf("Digite o codigo 2º estado: ");
scanf("%s" ,codcar2) ;


printf("Digite a cidade do 2º estado: ");
scanf("%s" ,cid2 ) ;

printf("Digite a população do 2º estado: ");
scanf ("%d", &pop2) ;


printf("Digite a Área do 2º estado: ");
scanf ("%f", &area2) ;

printf("Digite o PIB o 2º estado: ") ;
scanf(" %f", &pib2) ;

printf("Digite o número de pontos turisticos da 2º cidade   ");
scanf("%d", &npt2 ) ;


//saida carta 1
float densp1 = pop1/area1 ;
float pipc1 = pib1/pop1;


printf("Carta 1:\n\n");
printf("Estado: %c \n", est1);
printf("Codigo: %c%s\n" , est1, codcar1 );
printf("Cidade: %s\n", cid1) ;
printf("População: %d\n", pop1);
printf("Área: %f\n" , area1);
printf("PIB: %f\n", pib1);
printf("Pontos Turisticos: %d\n", npt1);
printf("A Densidade Populacional é: %f\n" , densp1) ;
printf(" O PIB p/ Capita é: %f\n", pipc1 ) ;



//saida carta 2
float densp2 = pop1/area2 ;
float pipc2 = pib2/pop2;
printf("Carta 2:\n\n");
printf("Estado: %c \n", est2);
printf("Codigo: %c%s\n" , est2, codcar2 );
printf("Cidade: %s\n", cid2) ;
printf("População: %d\n", pop2);
printf("Área: %f\n" , area2);
printf("PIB: %f\n", pib2);
printf("Pontos Turisticos: %d\n", npt2);
printf("A Densidade Populacional é: %f\n" , densp2) ;
printf(" O PIB p/ Capita é: %f\n", pipc2 ) ;


return 0;




















}