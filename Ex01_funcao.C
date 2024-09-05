#include <stdio.h>

//Funções:
void verdade_falso(int resposta);
int calcular_disjuncao_inclusiva(int a, int b);
int calcular_conjuncao(int a, int b);
int calcular_disjuncao(int a, int b);
int calcular_condicional(int a, int b);
int calcular_bicondicional(int a, int b);
void tabela_conjuncao();
void tabela_disjuncao_inclusiva();
void tabela_disjuncao_exclusiva();
void tabela_condicional();
void tabela_bicondicional();

int main() {
    int p, q;
    int conjuncao, disjuncao_inclusiva, disjuncao_exclusiva, condicional, bicondicional;

    printf("UTILIZE 1 para V e 0 para F.\n");

    printf("\nDigite o valor logico de p: ");
    scanf("%d", &p);

    printf("Digite o valor logico de q: ");
    scanf("%d", &q);

    printf("\npvq = %d", calcular_disjuncao_inclusiva(p,q));
    verdade_falso(calcular_disjuncao_inclusiva(p,q));
    printf("p^q = %d", calcular_conjuncao(p,q));
    verdade_falso(calcular_conjuncao(p,q));
    printf("p_v_q = %d", calcular_disjuncao(p,q));
    verdade_falso(calcular_disjuncao(p,q));
    printf("p->q = %d", calcular_condicional(p,q));
    verdade_falso(calcular_condicional(p,q));
    printf("p<->q = %d", calcular_bicondicional(p,q));
    verdade_falso(calcular_bicondicional(p,q));
    printf("\n\n");
    printf("Em seguida, verifique as tabelas verdades proposicionais:\n");
    
    tabela_disjuncao_inclusiva();
    tabela_conjuncao();
    tabela_disjuncao_exclusiva();
    tabela_condicional();
    tabela_bicondicional();

    return 0;
}
/* _____________________________________________________________________________________________________ */

int calcular_disjuncao_inclusiva(int a, int b){

    int disjuncao_inclusiva;

   return disjuncao_inclusiva = a || b; 
}
/* _____________________________________________________________________________________________________ */

int calcular_conjuncao(int a, int b){

    int conjuncao;

  return conjuncao = a && b;
}
/* _____________________________________________________________________________________________________ */
int calcular_disjuncao(int a, int b){

    int disjuncao_exclusiva;

   return disjuncao_exclusiva = (a || b) && !(a && b);
}
/* _____________________________________________________________________________________________________ */
int calcular_condicional(int a, int b){
    int condicional;

    return condicional = !a || b;
}
/* _____________________________________________________________________________________________________ */
int calcular_bicondicional(int a, int b){

    int bicondicional;

   return bicondicional = ((!a)||b) && ((!b) || a);
}
/* _____________________________________________________________________________________________________ */
void verdade_falso(int resposta){

    if (resposta== 1)
    {
        printf(" - Verdade.\n\n");
    }else{
        printf(" - Falso.\n\n");
    }
    
}
/* _____________________________________________________________________________________________________ */
void tabela_disjuncao_inclusiva() {
    printf("\nTabela Verdade da Disjunção Inclusiva (V):\n");
    printf("A\tB\tA v B\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("%d\t%d\t  %d\n", a, b, a || b);
        }
    }
}
/* _____________________________________________________________________________________________________ */
void tabela_conjuncao() {
    printf("\nTabela Verdade da Conjunção (^):\n");
    printf("A\tB\tA ^ B\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("%d\t%d\t  %d\n", a, b, a && b);
        }
    }
}
/* _____________________________________________________________________________________________________ */
void tabela_disjuncao_exclusiva() {
    printf("\nTabela Verdade da Disjunção Exclusiva (_V_):\n");
    printf("A\tB\tA _v_ B\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("%d\t%d\t   %d\n", a, b, (a || b) && !(a && b));
        }
    }
}
/* _____________________________________________________________________________________________________ */
void tabela_condicional() {
    printf("\nTabela Verdade Condicional (->):\n");
    printf("A\tB\tA -> B\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("%d\t%d\t   %d\n", a, b,!a || b);
        }
    }
}
/* _____________________________________________________________________________________________________ */
void tabela_bicondicional() {
    printf("\nTabela Verdade da Conjunção (<->):\n");
    printf("A\tB\tA <-> B\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("%d\t%d\t   %d\n", a, b, ((!a)||b) && ((!b) || a));
        }
    }
    printf("\nFIM...\n\n");
}
/* _____________________________________________________________________________________________________ */
/*Zé Araguaia - @josepereira6299*/