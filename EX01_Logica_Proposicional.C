
#include <stdio.h>

int main() {
    int p, q;
    int conjuncao, disjuncao_inclusiva, disjuncao_exclusiva, condicional, bicondicional;

    
    printf("UTILIZE 1 para V e 0 para F.\n");

    printf("\nDigite o valor logico de p: ");
    scanf("%d", &p);

    printf("Digite o valor logico de q: ");
    scanf("%d", &q);

    disjuncao_inclusiva = p || q;
    conjuncao = p && q;
    disjuncao_exclusiva = (p || q) && !(p && q);
    condicional = !p || q;
    bicondicional = ((!p) || q) && ((!q) || p);

    printf("\npvq = %d\n", disjuncao_inclusiva);
    printf("p^q = %d\n", conjuncao);
    printf("p_v_q = %d\n", disjuncao_exclusiva);
    printf("p->q = %d\n", condicional);
    printf("p<->q = %d\n\n", bicondicional);

    return 0;
}
/*Zé Araguaia - @josepereira6299*/
