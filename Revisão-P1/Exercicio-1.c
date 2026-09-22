/*A cantina do IMD criou um cartão de fidelidade: cada R$ 1,00 gasto vale 1 ponto inteiro, e o
desconto da conta depende dos pontos já acumulados, abaixo de 200 nenhum desconto, de
200 a 499 são 5%, de 500 a 999 são 10%, e de 1000 em diante são 15%. O esqueleto abaixo
compila e já cobra a faixa de 5%. Complete o programa do caixa, um item de cada vez

(a) Complete desconto_por_pontos com as quatro faixas, usando if e else if. Confira a
saída com 150, 200, 700 e 1200 pontos.

(b) O caixa fecha o dia com várias compras. Leia quantas compras houve e, num for, leia o valor
de cada uma somando o total gasto no dia.

(c) Nenhuma compra pode ter valor negativo. Escreva double
ler_valor_da_compra(void), que repete a pergunta com do-while até receber um valor
maior ou igual a zero, e use essa função dentro do laço do item (b).

(d) Reorganize o arquivo em quatro funções de responsabilidade única:
ler_valor_da_compra, calcular_pontos, desconto_por_pontos e exibir_extrato.
Protótipos em cima, main no meio, definições embaixo, e o main deve se ler como uma frase.

(e) Em até cinco linhas, explique por que exibir_extrato não calcula nada e por que
desconto_por_pontos não imprime nada.*/


#include <stdio.h>

double desconto_por_pontos(int pontos);
double valor_conta_com_desconto(double conta, double desconto);
double ler_valor_da_compra(void);
int calcular_pontos(double valor_de_compra);
void exibir_extrato(int contagem_vendas, double soma_vendas, int pontos_acumulados);

int main(void){
    
    int pontos = 0;
    double conta = 0.0;
    double desconto = 0.0;
    double valor_conta_operacao;
    int contagem_vendas = 0;
    int pontos_acumulados = 0;
    double soma_vendas = 0.0;

    do{

        printf("Pontos acumulados: ");
        scanf("%d", &pontos);

        if(pontos < 0){
            break;
        }

        conta = ler_valor_da_compra();
        desconto = desconto_por_pontos(pontos);
        valor_conta_operacao = valor_conta_com_desconto(conta, desconto);

        printf("desconto de %.0f%%, a pagar R$ %.2f\n",
            desconto * 100.0, valor_conta_operacao);
        
        contagem_vendas++;
        soma_vendas += valor_conta_operacao;
        pontos_acumulados = pontos_acumulados + calcular_pontos(
            valor_conta_operacao
        );

    } while(pontos >= 0);

    exibir_extrato(contagem_vendas, soma_vendas, pontos_acumulados);

    return 0;
}

double valor_conta_com_desconto(double conta, double desconto){
    return conta*(1.0 - desconto);
}

double desconto_por_pontos(int pontos)
{
if (pontos >= 200 && pontos < 500) {
    return 0.05;
}
else if(pontos >=500 && pontos < 1000){
    return 0.10;
}
else if(pontos >= 1000){
    return 0.15;
}
return 0.0;
}

double ler_valor_da_compra(void){
    double valor_da_compra;
    do{
        printf("Insira o valor da compra\n");
        scanf("%lf", &valor_da_compra);
    } while(valor_da_compra < 0);
    return valor_da_compra;
}

int calcular_pontos(double valor_de_compra){
    return (int) valor_de_compra;
}

void exibir_extrato(int contagem_vendas, double soma_vendas, int pontos_acumulados){
    for(int i = 0; i < 50; i++) printf("-");
    printf("\n");
    printf("Foram realizadas %d vendas\n", contagem_vendas);
    printf("Total vendido %.2f\n", soma_vendas);
    printf("Pontos Acumulados %.d\n", pontos_acumulados);
    for(int i = 0; i < 50; i++) printf("-");
    printf("\n");
}