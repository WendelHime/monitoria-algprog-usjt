#include "stdio.h"
#include "string.h"
int main(void) {

    /**
     * DECLARACAO DE VARIAVEIS
     */
    const int vitamina[7] = {120, 85, 85, 70, 56, 50, 34};
    const char alimentos[][20] =
    {
        "suco de laranja",
        "morango fresco",
        "mamao",
        "goiaba vermelha",
        "manga",
        "laranja",
        "brocolis"
    };
    int qtd_linhas;
    int qtd_alimentos;
    char alimento[20];
    char compare[20];

    /**
     * Indices para os loops
     * i sera o contador para a quantidade de linhas
     * iAlimento o contador para o loop de busca no vetor alimentos
     */
    int i;
    int iAlimento;

    /**
     * total sera um total parcial
     * soma sera a soma dos totais de mg de vitamina C consumida
     */
    int total;
    int soma;

    /**
     * LOOP DE ENTRADA DO NUMERO DE LINHAS
     */
    do{
        // Entrada de quantidade de linhas
        scanf("%d",&qtd_linhas);
        // So sera executado caso o numero de linhas seja diferente de 0
        if(qtd_linhas != 0){
            soma=0;
            /**
             * LOOP DE ENTRADA DA QUANTIDADE E NOME DO ALIMENTO
             */
            for(i = 0; i<qtd_linhas; i++){
                total=0;
                scanf("%d %[^\n\]",&qtd_alimentos,&alimento);
                /**
                 * LOOP DE BUSCA E CALCULO DO TOTAL PARCIAL
                 * DE ALIMENTO PELA QUANTIDADE CONSUMIDA
                 */
                for(iAlimento=0; iAlimento<7;iAlimento++){
                  if(strstr(alimentos[iAlimento],alimento)){
                    total  = qtd_alimentos*vitamina[iAlimento];
                  }
                }
                // Soma dos totais parciais
                soma = soma+total;
            }

            // Condicionais do problema
            if(soma < 110){
                printf("Mais %d mg\n", (110-soma));
            }
            else if(soma > 130){
                printf("Menos %d mg\n", (soma-130));
            }
            else{
                printf("%d mg\n", soma);
            }
        }
    }while(qtd_linhas != 0);

    return 0;
}
