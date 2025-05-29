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
float densp2 = pop2/area2 ;
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



//desafio 3 

float superpodera , superpoderb;
superpodera = (pop1 + area1 + npt1 + pipc1)+(1/densp1);
superpoderb = (pop2 + area2 + npt2 + pipc2) + (1/densp2);

printf(" o Super poder da carta a é:%f\n", superpodera);
printf(" o Super poder da carta B é:%f\n", superpoderb);

//comparação dos atributos

printf("****Comparação das Cartas*****\n");
printf("SE RESULTADO '1' 'CARTA 1' GANHA | SE RESULTADO '0' 'CARTA 2' GANHA \n");

int resul_pop = pop1>pop2 ;

        printf("\nAtributo população: \n");
        printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n" , resul_pop);

int resul_area = area1>area2 ;

        printf("\n Atributo Área: \n");
         printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n" , resul_area);

int resul_pib = pib1>pib2;

        printf("\n Atributo PIB: \n");
         printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n" , resul_pib);

int resul_npt = npt1>npt2 ;

        printf("\n Atributo Pontos Turisticos:\n");
        printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n" , resul_npt);

int result_dens= densp1>densp2 ;

        printf("\n Atributo Densidade Populacional:\n");
        printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n" , result_dens);

int result_pippc = pipc1>pipc2 ;

        printf("\n Atributo PIB p/ capita: \n" );
        printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n" , result_pippc);

int resul_super_p = superpodera < superpoderb ;

        printf("\n Atributo Superpoder: \n");
         printf(" Vencedor (1=carta 1, 0=carta2) ~~> %d\n", resul_super_p);












return 0;




















}