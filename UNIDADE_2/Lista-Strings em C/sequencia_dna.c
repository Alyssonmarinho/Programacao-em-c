#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void remover_quebra_de_linha(char texto[]);
void passar_para_maiusculas(char texto[]);
int contar_base(const char dna[], char base);
 
int main(void) {
    char dna[101];
 
    if (fgets(dna, sizeof(dna), stdin) == NULL) {
        return 1;
    }
    remover_quebra_de_linha(dna);
    passar_para_maiusculas(dna);
 
    printf("tamanho: %d\n", strlen(dna));
    printf("A: %d, C: %d, G: %d, T: %d\n",
           contar_base(dna, 'A'), contar_base(dna, 'C'),
           contar_base(dna, 'G'), contar_base(dna, 'T'));
    return 0;
}
 
void remover_quebra_de_linha(char texto[]) {
    size_t n = strlen(texto);
 
    if (n > 0 && texto[n - 1] == '\n') {
        texto[n - 1] = '\0';
    }
}
 
void passar_para_maiusculas(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = (char)toupper((unsigned char)texto[i]);
    }
}
 
int contar_base(const char dna[], char base) {
    int total = 0;
 
    for (int i = 0; dna[i] != '\0'; i++) {
        if (dna[i] == base) {
            total++;
        }
    }
    return total;
}