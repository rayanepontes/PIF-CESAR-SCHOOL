# Questôes Fechadas


## Questão 5
### Não, o programa não está correto e vai dar erro ao executar.
```
main() ← Declaração incorreta da função main
 
{ ↓ As funções abaixo precisam das bibliotecas stdio.h e stdlib.h para funcionar
printf("Linguagem C");  
system("pause"); ← A função system não faz parte do padrão ANSI C

}
```
Além dos itens incorretos citados acima, falta o **return 0;** que apesar de não ser um erro no padrão C, é um elemento recomendado.

## Questão 6
```
main() ← declaração incorreta da função main
{
int a=1; b=2; c=3: ← as declarações das variaveis b e c estão erradas, visto que depois do ;
o int não continua valendo para b e c.
Além disso, a variável c se estivesse com seu tipo declardo corretamente, ainda sim não funcionaria pois deveria ter ;
invés do uso do :.

printf("0s números são: %d%d%d\n, a, b, c, d); ← as aspas não foram fechadas, também não foi importada a biblioteca stdio.h

system("pause"); ← falta a biblioteca stdlib.h
}
```
### Erros de Lógica
* o código tenta imprimir a variável **d**, porém ela não existe.
* caso existisse uma quarta variável, deveria ter um quarto especificador.

## Questão 7
```
a)printf("\n\tBom dia! Shirley."); ← Primeiro dá uma quebra de linha, depois uma tabulação, e então imprime a frase.
```
```
b) printf("Você já tomou café? \n"); ← Depois da pergunta ocorre uma quebra de linha.
```
```
c) printf("\n\nA solução não existe!\nNão insista."); ← Duas quebras de linha antes da frase.
```
```
d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?"); ← Cada \t gera uma tabulação.
```
```
e) printf("%s\n%s\n%s\n", "um", "dois", "três"); ← Cada %s imprime uma string e cada \n quebra a linha. O último \n também faz uma quebra de linha depois de "três".
```

## Questão 8
```
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}
```
 Ao executar, o programa utiliza printf() para imprimir a mensagem *"Primeiro programa"*. A sequência **\n** provoca uma quebra de linha, **\t** insere uma tabulação e **\"** permite imprimir aspas duplas dentro da string. Assim, a mensagem será exibida em uma nova linha, precedida por uma tabulação: Em seguida, **system("PAUSE")** solicita que o windows aguarde uma tecla antes de encerrar o programa, exibindo normalmente `Pressione qualquer tecla para continuar. . .`. O return 0 indica o encerramento normal do programa.

 ## Questão 9
 ```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c", "\"");
    system("PAUSE");
    return 0;
}
```
O programa imprime a mensagem "Primeiro programa" utilizando sequências de escape como argumentos do modificador %c. No primeiro printf, '\n' representa uma quebra de linha, '\t' representa uma tabulação e '\"' representa o caractere de aspas duplas. Dessa forma, a saída será uma quebra de linha, seguida de uma tabulação e do texto "Primeiro programa. Entretanto, há um erro no segundo printf, pois "%c" espera receber um único caractere, mas foi passada a string "\"". O correto seria utilizar '\"', pois essa é uma constante do tipo caractere. Portanto, o programa, como está escrito, apresenta incompatibilidade de tipos e não possui uma saída exata garantida pelo padrão C. Se o segundo printf fosse corrigido para printf("%c", '\"');, a saída seria uma quebra de linha, uma tabulação e, em seguida, "Primeiro programa". Depois disso, system("PAUSE") exibiria a mensagem de pausa do windows.

## Questão 10
`A alternativa correta é a b).`

A linguagem C é case sensitive, ou seja, diferencia letras maiúsculas de letras minúsculas. Portanto, os identificadores peso, Peso e PESO são considerados diferentes pelo compilador e representam variáveis distintas, caso sejam declarados separadamente. Por exemplo, int peso;, int Peso; e int PESO; criam três identificadores diferentes.

## Questão 11
| Constante  | Classificação (Tipo de Constante)                  | Tipo Base em C |
| ---------- | -------------------------------------------------- | -------------- |
| `\r`       | Sequência de escape                                | `char`         |
| `2130`     | Constante inteira decimal                          | `int`          |
| `-123`     | Constante inteira decimal negativa                 | `int`          |
| `33.28`    | Constante de ponto flutuante                       | `double`       |
| `0XFA`     | Constante inteira hexadecimal                      | `int`          |
| `0101`     | Constante inteira octal                            | `int`          |
| `2.0e30`   | Constante de ponto flutuante em notação científica | `double`       |
| `\xDC`     | Sequência de escape hexadecimal                    | `char`         |
| `'\"'`     | Constante de caractere                             | `char`         |
| `'\\'`     | Constante de caractere                             | `char`         |
| `'F'`      | Constante de caractere                             | `char`         |
| `0`        | Constante inteira decimal                          | `int`          |
| `'\0'`     | Constante de caractere / sequência de escape       | `char`         |
| `"F"`      | Constante string                                   | `char[]`       |
| `-4567.89` | Constante de ponto flutuante negativa              | `double`       |

## Questão 12
| Instrução                 | Status (C/I)  | Justificativa Teórica                                                                                                                                       |
| ------------------------- | ------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **a) `int a;`**           | **Correto**   | Declara a variável `a` como do tipo inteiro (`int`).                                                                                                        |
| **b) `float b;`**         | **Correto**   | Declara a variável `b` como do tipo ponto flutuante (`float`).                                                                                              |
| **c) `double float c;`**  | **Incorreto** | `double` e `float` são especificadores de tipo diferentes e não podem ser utilizados juntos dessa forma. Deve-se utilizar apenas `double c;` ou `float c;`. |
| **d) `unsigned char d;`** | **Correto**   | Declara `d` como um caractere sem sinal (`unsigned char`), permitindo representar apenas valores não negativos.                                             |
| **e) `unsigned e;`**      | **Correto**   | Quando usado sozinho, `unsigned` é interpretado como `unsigned int`. Portanto, equivale a `unsigned int e;`.                                                |
| **f) `long float f;`**    | **Incorreto** | `long` não pode ser utilizado com `float` em C. Para maior precisão, deve-se utilizar `long double f;`.                                                     |
| **g) `long g;`**          | **Correto**   | Quando usado sozinho, `long` equivale a `long int`. Portanto, equivale a `long int g;`.                                                                     |
| **h) `long double h;`**   | **Correto**   | Declara `h` como `long double`, um tipo de ponto flutuante que geralmente oferece maior precisão que `double`.                                              |

## Questão 13
`A alternativa correta é a c).`

Os arquivos de inclusão e normalmente identificados pela extensão .h, são arquivos de texto que contêm informações utilizadas pelo compilador, como protótipos de funções, definições de constantes, tipos de dados etc. Eles são incluídos no programa por meio da diretiva `#include`.

## Questão 14
`A alternativa correta é a a).`

O objetivo principal de incluir um arquivo de cabeçalho, como `<stdio.h>`, é informar ao compilador sobre as declarações das funções, tipos, constantes e macros que serão utilizadas no programa. Isso permite que o compilador reconheça corretamente funções como printf() e scanf() durante a compilação.

## Questão 15
`A alternativa correta é a c).`

A diretiva `#include` é uma diretiva do pré-processador C, ou seja, ela é processada antes da etapa de compilação. Sua função é incluir o conteúdo de um arquivo, geralmente um arquivo de cabeçalho (.h), no código-fonte.

## Questão 16
`A alternativa correta é a c).`

As diretivas de pré-processador em C, identificadas pelo caractere `#`, são interpretadas pelo pré-processador, que atua antes da compilação propriamente dita. Ele realiza tarefas como incluir arquivos de cabeçalho com #include, definir macros com #define e processar condições de compilação com `#if`, `#ifdef`, entre outras.

## Questão 17
`As alternativas **a), b) e c)** estão **sintaticamente corretas**.`

* **a)** `printf ( "Primeiro programa" );` → Correto
* **b)** `printf( "Primeiro programa" );` → Correto
* **c)** `printf("Primeiro programa");` → Correto
* **d)** `printf "Primeiro programa" ;` → **Incorreto**, pois faltam os parênteses () da chamada da função.

Essas variações demonstram que a linguagem C possui **flexibilidade em relação aos espaços em branco**. O compilador geralmente ignora espaços e quebras de linha que não sejam necessários para separar elementos da linguagem. Por isso, os espaços entre o nome da função, os parênteses e a string nas alternativas **a), b) e c)** não alteram o funcionamento do programa.
A alternativa **d)**, porém, é inválida porque uma função precisa ser chamada utilizando parênteses, mesmo quando possui apenas um argumento.
