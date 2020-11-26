#include <stdlib.h>
#include <stdio.h>

int *p;

void loopSistema(float valorRoupaAtacado, float totFrete, int totItens);

int askContinue(int op);

float calculoLucroNoventa(float valorRoupaAtacado, float totFrete, int totItens);

float calculoLucroOitenta(float valorRoupaAtacado, float totFrete, int totItens);

float calculoLucroSetenta(float valorRoupaAtacado, float totFrete, int totItens);

float calculoLucroSessenta(float valorRoupaAtacado, float totFrete, int totItens);

void alteraFrete(float totFrete);

int main(){
    int n;
    int op;

    float valorRoupaAtacado,totFrete;
    int totItens;

    printf("\nDigite os valores pedidos e o sistema retornara um valor total para o item, considerando o frete dividido pelo total de itens comprados mais o percentual de lucro.\n\n\n");

    printf("\nDigite o valor no atacado: ");
    scanf("%f",&valorRoupaAtacado);

    printf("\nDigite o valor total do frete: ");
    scanf("%f",&totFrete);

    printf("\nDigite o numro de itens comprados: ");
    scanf("%d",&totItens);

    printf("\n\n");

    calculoLucroNoventa(valorRoupaAtacado, totFrete, totItens);
    calculoLucroOitenta(valorRoupaAtacado, totFrete, totItens);
    calculoLucroSetenta(valorRoupaAtacado, totFrete, totItens);
    calculoLucroSessenta(valorRoupaAtacado, totFrete, totItens);

    printf("\n.\n.\n.\n.\n");

    do{
        loopSistema(valorRoupaAtacado, totFrete, totItens);
        n=askContinue(op);
    }while(n==1);

    system("pause");
    return 0;
}//fecha main

void loopSistema(float valorRoupaAtacado, float totFrete, int totItens){

    printf("\nDigite o valor no atacado: ");
    scanf("%f",&valorRoupaAtacado);
    
    printf("\n\n");

    calculoLucroNoventa(valorRoupaAtacado, totFrete, totItens);
    calculoLucroOitenta(valorRoupaAtacado, totFrete, totItens);
    calculoLucroSetenta(valorRoupaAtacado, totFrete, totItens);
    calculoLucroSessenta(valorRoupaAtacado, totFrete, totItens);

}//fecha loopSistema

int askContinue(int op){
    int n;

    printf("\n\nDeseja continuar ?\n\n1.Sim.\n2.Nao.\n\n");
    scanf("%d",&op);

    switch(op){
        case 1:
            n=1;
            return n;
        break;
        case 2:
            printf("\nSistema encerrado!\n\n.\n.\n.\n.\n\n");
            n=0;
            return n;
        break;
        default:
            printf("\nNao existe essa opcao!");
            n=1;
            return n;
        break;
    }//fecha switch
}//fecha askContinue

float calculoLucroNoventa(float valorRoupaAtacado, float totFrete, int totItens){

    float num = 0.90;
    float freteDividido = totFrete/totItens;
    float proporcionalLucro = valorRoupaAtacado*num;
    float valorRoupaEProporcional = valorRoupaAtacado+proporcionalLucro+freteDividido;

    printf("\nValor lucro percentual 90 eh: %.2f.\n\n",valorRoupaEProporcional);

    fflush(stdin);

}//calculoLucroNoventa

float calculoLucroOitenta(float valorRoupaAtacado, float totFrete, int totItens){

    float num = 0.80;
    float freteDividido = totFrete/totItens;
    float proporcionalLucro = valorRoupaAtacado*num;
    float valorRoupaEProporcional = valorRoupaAtacado+proporcionalLucro+freteDividido;

    printf("\nValor lucro percentual 80 eh: %.2f.\n\n",valorRoupaEProporcional);

    fflush(stdin);

}//calculoLucroOitenta

float calculoLucroSetenta(float valorRoupaAtacado, float totFrete, int totItens){

    float num = 0.70;
    float freteDividido = totFrete/totItens;
    float proporcionalLucro = valorRoupaAtacado*num;
    float valorRoupaEProporcional = valorRoupaAtacado+proporcionalLucro+freteDividido;

    printf("\nValor lucro percentual 70 eh: %.2f.\n\n",valorRoupaEProporcional);

    fflush(stdin);

}//calculoLucroSetenta

float calculoLucroSessenta(float valorRoupaAtacado, float totFrete, int totItens){

    float num = 0.60;
    float freteDividido = totFrete/totItens;
    float proporcionalLucro = valorRoupaAtacado*num;
    float valorRoupaEProporcional = valorRoupaAtacado+proporcionalLucro+freteDividido;

    printf("\nValor lucro percentual 60 eh: %.2f.\n\n",valorRoupaEProporcional);

    fflush(stdin);

}//calculoLucroSessenta
