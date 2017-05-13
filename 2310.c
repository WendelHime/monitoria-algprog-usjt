#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeroJogadores = 0;
    scanf("%d", &numeroJogadores);
    double porcentagemSaque = 0;
    double porcentagemBloqueio = 0;
    double porcentagemAtaque = 0;

    int totalSaques = 0, totalBloqueios = 0, totalAtaques = 0,
        quantidateTotalSaques = 0, quantidadeTotalBloqueios = 0, 
        quantidadeTotalAtaques = 0;

    do {
        char nome[20];
        int quantidadeSaques, quantidadeBloqueios, quantidadeAtaques,
            sucessosSaques, sucessosBloqueios, sucessosAtaques;
        scanf("%s", &nome);
        scanf("%d %d %d", &quantidadeSaques, &quantidadeBloqueios, &quantidadeAtaques);
        scanf("%d %d %d", &sucessosSaques, &sucessosBloqueios, &sucessosAtaques);
        totalSaques += quantidadeSaques;
        totalBloqueios += quantidadeBloqueios;
        totalAtaques += quantidadeAtaques;
        quantidateTotalSaques += sucessosSaques;
        quantidadeTotalBloqueios += sucessosBloqueios;
        quantidadeTotalAtaques += sucessosAtaques;
        numeroJogadores--;
    }while(numeroJogadores > 0);

    porcentagemSaque += (quantidateTotalSaques * 100.0) / totalSaques;
    porcentagemBloqueio += (quantidadeTotalBloqueios * 100.0) / totalBloqueios;     
    porcentagemAtaque += (quantidadeTotalAtaques * 100.0) / totalAtaques;
    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", porcentagemSaque, porcentagemBloqueio, porcentagemAtaque);
    return 0;
}
