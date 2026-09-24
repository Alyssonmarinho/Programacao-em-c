/*A triagem do hemoc⁠entro aceita candidat⁠os de 16 a 69 a⁠nos, com p⁠elo men⁠os 50 kg e com no mínimo 60 dia⁠s d⁠esde a última do⁠ação.
Quem nunca do⁠ou in⁠forma -1 no l⁠ugar dos dia⁠s, e ess⁠e caso é semp⁠re a⁠ceito. O esqueleto ab⁠aixo compila e confere idad⁠e e peso,
mas ainda igno⁠ra o i⁠ntervalo. Complete o progr⁠ama da fila de triage⁠m, um item de cada vez.



(a) Acrescente o interva⁠lo mínimo à regr⁠a, mud⁠ando a assina⁠tura para int esta_apto(int idade, double peso, int dias_desde_a_ultima).
Lembre de atualiz⁠ar o protótipo e a chamada. Con⁠fira: 25 a⁠nos, 68 kg e 100 d⁠ias; 25, 68 e 30; 25, 68 e -1; 15, 68 e -1.

(b) A fila a⁠caba q⁠uando o tri⁠ador digita i⁠dade 0. Use um while para ler candidato após candidato, cont⁠ando q⁠uantos for⁠am aptos e
quanto⁠s foram recusados.

(c) Escr⁠eva int ler_idade(void) e double ler_peso(void), as du⁠as com do-while, aceitando idade de 0 a 120 anos e pe⁠so de 0 a 300 kg,
e use-as no l⁠aço.*/

#include <stdio.h>

int esta_apto(int idade, double peso, int dias_desde_a_ultima);
int ler_idade(void);
double ler_peso(void);

int main(void) {
    int aptos = 0;
    int recusados = 0;

    while (1) {
        int idade = ler_idade();
        
        if (idade == 0) {
            break;
        }

        double peso = ler_peso();

        int dias;
        printf("Dias desde a ultima doacao (-1 se nunca doou): ");
        scanf("%d", &dias);

        int apto = esta_apto(idade, peso, dias);
        printf("apto: %d\n\n", apto);

        if (apto) {
            aptos++;
        } else {
            recusados++;
        }
    }

    printf("Total de candidatos aptos: %d\n", aptos);
    printf("Total de candidatos recusados: %d\n", recusados);

    return 0;
}

int esta_apto(int idade, double peso, int dias_desde_a_ultima) {
    if (idade < 16 || idade > 69) {
        return 0;
    }
    if (peso < 50.0) {
        return 0;
    }
   
    if (dias_desde_a_ultima != -1 && dias_desde_a_ultima < 60) {
        return 0;
    }
    return 1;
}

int ler_idade(void) {
    int idade;
    do {
        printf("Idade (0 a 120, sendo 0 para sair): ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 120);
    return idade;
}

double ler_peso(void) {
    double peso;
    do {
        printf("Peso (0 a 300 kg): ");
        scanf("%lf", &peso);
    } while (peso < 0.0 || peso > 300.0);
    return peso;
}