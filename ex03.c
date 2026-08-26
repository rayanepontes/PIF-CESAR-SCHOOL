/* Este programa demonstra a documentação em C utilizando
 * comentários de múltiplas linhas para o cabeçalho principal
 * e comentários de linha única para detalhar as instruções.
 *
 * Programa de Cálculo de Média
 ***************************************************************/
/* CalculoMedia.c */

#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */

int main() // função principal do programa
{ // início da função

    // declaração de variáveis para as notas e a média final
    float nota1 = 8.5;
    float nota2 = 7.5;
    float media;

    /* realiza a soma das duas notas e divide por 2
       para obter a média aritmética do aluno */
    media = (nota1 + nota2) / 2.0;

    // exibe o resultado final formatado na tela
    printf("A média do aluno é: %.2f\n", media); 

    system("PAUSE"); /* pausa a tela no Windows */
    return 0;        /* retorna 0 indicando sucesso */
} // fim da função