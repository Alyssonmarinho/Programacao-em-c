#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void remover_quebra_de_linha(char texto[]);
void montar_email(char nome[], char email[]);
void passar_para_minusculas(char texto[]);
 
int main(void) {
    char nome[64];
    char email[100];
 
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        return 1;
    }
    remover_quebra_de_linha(nome);
 
    montar_email(nome, email);
    passar_para_minusculas(email);
 
    printf("email: %s\n", email);
    return 0;
}
 
void remover_quebra_de_linha(char texto[]) {
    size_t n = strlen(texto);
 
    if (n > 0 && texto[n - 1] == '\n') {
        texto[n - 1] = '\0';
    }
}
 
void montar_email(char nome[], char email[]) {
    char *primeiro = strtok(nome, " ");
    char *ultimo = primeiro;
    char *pedaco;
 
    if (primeiro == NULL) {
        strcpy(email, "@ufrn.edu.br");
        return;
    }
 
    while ((pedaco = strtok(NULL, " ")) != NULL) {
        ultimo = pedaco;
    }
 
    strcpy(email, primeiro);
    if (ultimo != primeiro) {
        strcat(email, ".");
        strcat(email, ultimo);
    }
    strcat(email, "@ufrn.edu.br");
}
 
void passar_para_minusculas(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = (char)tolower((unsigned char)texto[i]);
    }
}