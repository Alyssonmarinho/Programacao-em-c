#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void remover_quebra_de_linha(char texto[]);
int eh_palindromo(const char frase[]);
void limpar_frase(const char frase[], char limpa[]);
void inverter(const char origem[], char destino[]);
 
int main(void) {
    char frase[201];
 
    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        return 1;
    }
    remover_quebra_de_linha(frase);
 
    if (eh_palindromo(frase)) {
        printf("palindromo\n");
    } else {
        printf("nao e palindromo\n");
    }
    return 0;
}
 
void remover_quebra_de_linha(char texto[]) {
    size_t n = strlen(texto);
 
    if (n > 0 && texto[n - 1] == '\n') {
        texto[n - 1] = '\0';
    }
}
 
int eh_palindromo(const char frase[]) {
    char limpa[201];
    char invertida[201];
 
    limpar_frase(frase, limpa);
    inverter(limpa, invertida);
    return strcmp(limpa, invertida) == 0;
}
 
void limpar_frase(const char frase[], char limpa[]) {
    int j = 0;
 
    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha((unsigned char)frase[i])) {
            limpa[j] = (char)tolower((unsigned char)frase[i]);
            j++;
        }
    }
    limpa[j] = '\0';
}
 
void inverter(const char origem[], char destino[]) {
    size_t n = strlen(origem);
 
    for (size_t i = 0; i < n; i++) {
        destino[i] = origem[n - 1 - i];
    }
    destino[n] = '\0';
}