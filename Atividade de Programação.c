#include <stdio.h>

int main() {
    char tenhoCompromisso, estouNaCidade, tenhoDinheiro, ePerto, estaChovendo;

    printf("Tenho compromisso no dia? (S para sim, N para nao): ");
    scanf(" %c", &tenhoCompromisso);

    printf("Vou estar na cidade? (S para sim, N para nao): ");
    scanf(" %c", &estouNaCidade);

    printf("Tenho dinheiro? (S para sim, N para nao): ");
    scanf(" %c", &tenhoDinheiro);

    printf("E perto? (S para sim, N para nao): ");
    scanf(" %c", &ePerto);

    printf("Esta chovendo? (S para sim, N para nao): ");
    scanf(" %c", &estaChovendo);

    if (tenhoCompromisso == 'S' && estouNaCidade == 'S' &&
        (tenhoDinheiro == 'S' || ePerto == 'S') && estaChovendo == 'N') {
        printf("EU VOU!\n");
    } else {
        printf("NAO VOU!\n");
    }

    return 0;
}

