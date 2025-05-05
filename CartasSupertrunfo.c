#include <stdio.h>

int main (){

    char Estado, Estado2;
    char Codigo [3], Codigo2 [5];
    char Nome_da_Cidade [15], Nome_da_Cidade2 [15];
    unsigned long int Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int Numero_Pontos_turisticos, Numero_Pontos_turisticos2;
    float Densidade_populacional, Densidade_Populacional2;
    float PIB_per_capita, PIB_per_capita2;
    float Super_Poder, Super_Poder2;
    int resultado;

    //função utilizada para captação de dados digitados pelo usuário "scanf"
    //Sintaxe scanf(“string”,&variavel)
    
    //Função "printf" utilizada para realizar a impresão de textos
    //Também realiza a leitura dos dados armazenados nas variávies
    //e imprime no terminal do usuário
    //Sintaxe printf("expressão de controle",argumentos);

    //Carta 1

    printf("Digite o estado:");
    scanf("%s", &Estado);
    printf("Estado: %c\n", Estado);

    printf("Digite o codigo da carta:");
    scanf("%s", &Codigo);
    printf("Codigo da carta: %s \n", Codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", &Nome_da_Cidade);
    printf("Nome da cidade: %s \n", Nome_da_Cidade);

    printf("Digite o numero Populacional:");
    scanf("%lu", &Populacao);       
    printf("Numero Populacional: %lu\n", Populacao);

    printf ("Digite a Area:");
    scanf ("%f", &Area);
    printf("Area Total: %f \n", Area);

    printf("Digite o PIB:");
    scanf("%f", &PIB);
    printf("PIB Total: %f \n", PIB);

    printf("Digite o Numero de Pontos turisticos:");
    scanf("%d", &Numero_Pontos_turisticos);
    printf("Numero Pontos turisticos: %d \n", Numero_Pontos_turisticos);

    Densidade_populacional = (float) Populacao / Area; 
    printf("Densidade Populacional por km²:%.1f\n", Densidade_populacional);

    PIB_per_capita = (float) PIB / Populacao;
    printf("PIB per capita: %f\n", PIB_per_capita);

    Super_Poder =(float) (1/Densidade_populacional) + Populacao + Area + PIB + Numero_Pontos_turisticos + PIB_per_capita ;
    printf("Super Poder:%f\n", Super_Poder);
    
    
    //Carta 2

    printf("Digite o estado2:");
    scanf("%s", &Estado2);
    printf("Estado2: %c\n", Estado2);

    printf("Digite o codigo da carta2:");
    scanf("%s", &Codigo2);
    printf("Codigo da carta2: %s \n", Codigo2);

    printf("Digite o nome da Cidade2:");
    scanf("%s", &Nome_da_Cidade2);
    printf("Nome da cidade2: %s \n", Nome_da_Cidade2);

    printf("Digite o numero Populacional2:");
    scanf("%lu", &Populacao2);       
    printf("Numero Populacional2: %lu\n", Populacao2);

    printf ("Digite a Area2:");
    scanf ("%f", &Area2);
    printf("Area2 Total: %f \n", Area2);

    printf("Digite o PIB2:");
    scanf("%f", &PIB2);
    printf("PIB2 Total: %f \n", PIB2);

    printf("Digite o Numero de Pontos turisticos2:");
    scanf("%d", &Numero_Pontos_turisticos2);
    printf("Numero Pontos turisticos2: %d \n", Numero_Pontos_turisticos2);
    
    Densidade_Populacional2 = Populacao2 / Area2; 
    printf("Densidade Populacional por km²:%.1f\n", Densidade_Populacional2);
    
    PIB_per_capita2 = (float) PIB2/ Populacao2;
    printf("PIB per capita populacional: %f\n", PIB_per_capita2);


    Super_Poder2 =(float) (1/Densidade_populacional) + Populacao + Area + PIB + Numero_Pontos_turisticos + PIB_per_capita;
    printf("Super Poder:%f\n", Super_Poder2);
    
    
    printf("Populacao1 é maior que Populacao2: %lu \n", Populacao > Populacao2);

    printf("A Area é maior que Area2: %f \n", Area > Area2);

    printf("PIB é maior que PIB2: %f \n", PIB > PIB2);

    Printf("Carta 1 tem mais pontos turisticos que carta 2: %d \n", Numero_Pontos_turisticos > Numero_Pontos_turisticos2);

    printf("A Populacao da carta1 é menor que a carta 2: %f \n", Densidade_populacional < Densidade_Populacional2);

    Printf("PIB per capita 1 é maior que PIB per capita 2: %f \n", PIB_per_capita > PIB_per_capita2);

    printf("Super poder da carta 1 é maior que Super poder da carta 2: %f \n", Super_Poder > Super_Poder2);


    
    return 0;


















}