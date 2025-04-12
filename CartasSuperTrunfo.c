#include <stdio.h>                   
//Estado1 : Amapá A01                   //Estado 2 : Ceara C02
//Cidade: Macapá                        //Cidade: Fortaleza
//População : 733 759                   //População : 8 794 957 
                                        
//Área : 142 470,762 km²                //Área : 148 894,442 km²
//Pib total : 20.100 bilhões            //Pib: 213.601 bilhões
//Pib per capta : 22.902,86             //Pib per capta : 24.296
//Pontos turísticos : 10                //Pontos turisticos : 25
int main() {
    char letra = 'A';                   char letra = 'C';
                                        char Nome[10] = "Ceara":
                                        int pontos = 25
                                        int populacao = 8794957
                                        float pib = 213.601
    char Nome = "Amapa"                 float area = 148894.442
    int pontos = 10;
    int populacao = 733759;
    float pib = 20.100;
    float area = 142470.762;
    
    printf("Digite o estado: \n");
    scanf("%s", &Nome);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o pib: \n");
    scanf("%d", &pib);

    printf("Digite a área: \n");
    scanf("%f", &area);
    return 0;
}

