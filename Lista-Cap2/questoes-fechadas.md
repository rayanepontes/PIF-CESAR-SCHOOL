# Questôes Fechadas

## Questão 1
```
#include <stdio.h>
#include <stdlib.h>
int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
system("PAUSE");
return 0;
}
```

a) O valor numérico que será efetivamente exibido
O valor exibido no console será 2. 

b) Isso ocorre porque a variável valor_inteiro foi declarada com o tipo int, que só tem a capacidade de armazenar números inteiros (sem casas decimais). Quando você tenta atribuir um valor de ponto flutuante (2.97) a ela, a linguagem C descarta completamente a parte fracionária, sem fazer qualquer tipo de arredondamento matemático. Esse fenômeno é chamado de conversão implícit de tipo.

c) Para manter a precisão: O programador deve usar tipos compatíveis com números decimais, declarando a variável como float ou double. Para exibi-los corretamente, devem ser utilizados os especificadores de formatação adequados, como %f para float e %lf para double.  Para controlar a conversão explicitamente: Deve-se utilizar a conversão explícita através do operador de molde ou cast. O cast consiste em escrever o nome do tipo desejado entre parênteses antes do valor ou expressão por exemplo, (double).

## Questão 2

a)
- Ausência no Padrão ANSI C: A biblioteca <conio.h> não faz parte da especificação padrão da linguagem C (ANSI/ISO C), constituindo uma biblioteca legada e proprietária.  
- Falta de Portabilidade: As funções contidas na <conio.h> foram projetadas para o ambiente MS-DOS/Windows. O código falhará na compilação em sistemas operacionais como Linux, macOS e servidores POSIX. 
- Comportamento Unbuffered: A biblioteca manipula o console de forma direta, o que viola o modelo padrão de E/S (Entrada/Saída) baseado em streams e buffers das plataformas modernas.

b) Entrada de caractere: getchar(), responsável por ler um único caractere da entrada padrão (stdin).  Saída de caractere: putchar(), responsável por escrever um único caractere na saída padrão (stdout). 

c) 
```
#include <stdio.h>

int main() {
    char caractere;

    printf("digite um caractere: ");
    scanf(" %c", &caractere);

    printf("caractere lido com sucesso: %c\n", caractere);

    return 0;
}
```

