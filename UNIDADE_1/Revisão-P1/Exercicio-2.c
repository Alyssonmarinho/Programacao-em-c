/*O pluviômetro instalado atrás do IMD registra a chuva de cada dia em milímetros. A estação
classifica o dia em quatro códigos, 0 para dia sem chuva, 1 para chuva fraca (abaixo de 2,5 mm),
2 para moderada (de 2,5 a 10 mm) e 3 para forte (acima de 10 mm). O esqueleto abaixo compila
e só sabe distinguir os dois primeiros códigos.

(a) Complete classificar_chuva com os quatro códigos. Confira com 0, 1.2, 7.0 e
18.5 milímetros.

(b) Leia os sete dias da semana num for, acumulando o total de chuva e contando quantos dias
tiveram código 3.

(c) A estação nunca reporta valor negativo. Escreva double ler_chuva_do_dia(int dia),
que mostra o número do dia, repete a leitura com do-while até receber um valor maior ou igual a
zero, e devolve o valor lido.

(d) Separe o programa em ler_chuva_do_dia, classificar_chuva, calcular_media e
exibir_resumo, com os protótipos antes do main. O resumo imprime total, media com uma
casa decimal e a quantidade de dias de chuva forte.*/


#include <stdio.h>

int classificar_chuva(double milimetros);
double ler_chuva_do_dia(int dia);
void exibir_resumo(double total, int qtd_dias_leitura, int dias_com_codigo_3);

int main(void){

double chuva;
double chuva_total = 0.0;
int dias_com_codigo_3 = 0;
int codigo_atual;
int qnt_dias_leitura = 7;

for(int i = 0; i < qnt_dias_leitura; i++){

codigo_atual = classificar_chuva(chuva);
if (codigo_atual == 3){
    dias_com_codigo_3++;
}

chuva = ler_chuva_do_dia(i);
chuva_total += chuva;

printf("%.1f mm, codigo %d\n", chuva, codigo_atual);
}

exibir_resumo(chuva_total, qnt_dias_leitura, dias_com_codigo_3);

return 0;
}

int classificar_chuva(double milimetros){

    if (milimetros == 0.0) {
        return 0;
    }
    else if(milimetros > 0.0 && milimetros < 2.5){
        return 1;
    }
    else if(milimetros >= 2.5 && milimetros <= 10.0){
        return 2;
    }
    else if(milimetros > 10.0){
        return 3;
    }

    return -1; // em caso de erro ele retorna o número negativo
}

double ler_chuva_do_dia(int dia){
    double chuva;
    do{
        printf("Chuva do dia %d (mm): ", (dia+1));
        scanf("%lf", &chuva);
    }while(chuva < 0);

    return chuva;
}

double calcula_media(double total, int qtd_dias_leitura){
    return total/qtd_dias_leitura;
}

void exibir_resumo(double total, int qtd_dias_leitura, int dias_com_codigo_3){
    double media;
    media = calcula_media(total, qtd_dias_leitura);
    for(int i = 0; i < 50; i++) printf("-");
    printf("\n");

    printf("Total de chuva foi de %.1f mm\n", total);
    printf("A media de chuva foi de %.1f mm\n", media);
    printf("E houveram %d dias com chuva forte\n", dias_com_codigo_3);

    for(int i = 0; i < 50; i++) printf("-");
    printf("\n");
}



