#include <stdio.h>
#include <string.h>
 
void remover_quebra_de_linha(char texto[]);
int matricula_valida(const char matricula[]);
void extrair_ano(const char matricula[], char ano[]);
 
int main(void) {
    char matricula[64];
    char ano[5];
 
    if (fgets(matricula, sizeof(matricula), stdin) == NULL) {
        return 1;
    }
    remover_quebra_de_linha(matricula);
 
    if (matricula_valida(matricula)) {
        extrair_ano(matricula, ano);
        printf("matricula valida, ingresso em %s\n", ano);
    } else {
        printf("matricula invalida: [%s]\n", matricula);
    }
    return 0;
}
 
void remover_quebra_de_linha(char texto[]) {
    size_t n = strlen(texto);
 
    if (n > 0 && texto[n - 1] == '\n') {
        texto[n - 1] = '\0';
    }
}
 
int matricula_valida(const char matricula[]) {
    if (strlen(matricula) != 11) {
        return 0;
    }
    for (int i = 0; matricula[i] != '\0'; i++) {
        if (matricula[i] < '0' || matricula[i] > '9') {
            return 0;
        }
    }
    return 1;
}
 
void extrair_ano(const char matricula[], char ano[]) {
    strncpy(ano, matricula, 4);
    ano[4] = '\0';
}