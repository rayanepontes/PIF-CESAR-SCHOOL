# Questôes Fechadas

## Questão 01

### a)

O comando `if (x = 0)` realiza uma atribuição, ou seja, atribui o valor `0` à variável `x`, em vez de comparar seu valor. Como o resultado da atribuição é `0`, a condição será considerada falsa e o bloco do `if` não será executado.

### b)

Na linguagem C, valores numéricos inteiros ou reais podem ser utilizados diretamente em condições. O valor `0` é interpretado como falso, enquanto qualquer valor diferente de `0` é interpretado como verdadeiro. Isso segue as regras do padrão ANSI C.

### c)

A instrução `if (x = -5)` executará o bloco de código associado, pois realiza uma atribuição do valor `-5` à variável `x`. Como o resultado da atribuição é diferente de zero, a condição será considerada verdadeira.

Exemplo:

```
if (x = -5)
{
    printf("Verdadeiro");
}
```

Nesse caso, o bloco será executado e a variável `x` passará a armazenar o valor `-5`.

## Questão 02

### a)

A mensagem "Opção B" será impressa no console. Isso acontece porque `x > 10` é verdadeiro, permitindo a execução do segundo `if`. Porém, `y > 10` é falso, fazendo com que o comando `else` seja executado.

### b)

Na linguagem C, a cláusula `else` é associada ao comando `if` mais próximo que ainda não possui um `else` correspondente. Essa regra é conhecida como dangling else e segue o padrão ANSI C.

### c)

```
int x = 15, y = 5;

if (x > 10)
{
    if (y > 10)
    {
        printf("Opção A\n");
    }
}
else
{
    printf("Opção B\n");
}
```

## Questão 03

### a)

O operador ternário avalia a condição `media >= 7.0`. Se a condição for verdadeira, armazena `'A'` na variável `situacao`. Caso contrário, armazena `'R'`.

Como `media = 6.8`, a condição será falsa e o valor armazenado será `'R'`, indicando reprovação.

### b)

```
media = (nota1 + nota2) / 2.0;

if (media >= 7.0)
{
    situacao = 'A';
}
else
{
    situacao = 'R';
}
```

### c)

Não. O operador ternário não substitui adequadamente qualquer estrutura `if-else`, pois é mais indicado para decisões simples que resultam em uma expressão. Já o `if-else` permite executar blocos com múltiplos comandos, realizar operações diferentes e controlar estruturas mais complexas.

## Questão 04

### a)

A saída será:

```
Prata
Ouro
```

Isso acontece porque o valor de `codigo` é `2`, fazendo com que a execução comece no `case 2`. Como não existe um `break` após esse caso, o programa continua executando o próximo bloco, imprimindo também "Ouro".

### b)

A instrução `break` encerra a execução do bloco `switch`, impedindo que os próximos casos sejam executados. Quando ela é omitida, ocorre o fenômeno chamado fall-through, no qual a execução continua para os próximos `case`, independentemente de suas condições.

### c)

O comando `switch` aceita expressões de tipos inteiros, como `int`, `char` e `enum`. Não é permitido utilizar variáveis dos tipos `float` ou `double`, pois o padrão ANSI C exige que a expressão do `switch` tenha tipo inteiro.

## Questão 05

### a)

A saída será:

```
a = 0, b = 5, c = 8
```

O incremento `++b` não será executado, pois a primeira condição `a != 0` é falsa. Como o operador `&&` exige que ambas as condições sejam verdadeiras, a segunda expressão é ignorada. Assim, o comando `else` é executado e `c` passa de `10` para `8`.

### b)

A avaliação de curto-circuito funciona da seguinte maneira:

- Operador E (`&&`): se a primeira condição for falsa, a segunda não será avaliada, pois o resultado já será falso.
- Operador OU (`||`): se a primeira condição for verdadeira, a segunda não será avaliada, pois o resultado já será verdadeiro.

### c)

Se a condição fosse alterada para `if (a == 0 || ++b > 5)`, os valores finais seriam:

- `b = 5`, pois a segunda condição não seria avaliada.
- `c = 20`, pois a primeira condição seria verdadeira e o bloco do `if` seria executado, somando `10` ao valor inicial de `c`.

## Questão 06

### a)

A saída será:

```
Idoso
Adulto
Jovem
```

Isso acontece porque os três comandos `if` são independentes. Como a idade é `65`, todas as condições são verdadeiras e seus respectivos comandos são executados. O `else` pertence apenas ao último `if`, não sendo executado porque `idade >= 12` é verdadeiro.

### b)

A diferença é que os comandos `if` independentes são avaliados individualmente, permitindo que várias condições sejam verdadeiras e executadas ao mesmo tempo.

Já a cadeia `else-if` verifica as condições em sequência e executa apenas o primeiro bloco cuja condição seja verdadeira, ignorando os demais.

### c)

```
#include <stdio.h>

int main()
{
    int idade = 25;

    if (idade >= 60)
    {
        printf("Idoso\n");
    }
    else if (idade >= 18)
    {
        printf("Adulto\n");
    }
    else if (idade >= 12)
    {
        printf("Jovem\n");
    }
    else
    {
        printf("Criança\n");
    }

    return 0;
}
```
