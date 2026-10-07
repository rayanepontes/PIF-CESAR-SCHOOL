# **Questões Fechadas**

## **Questão 1**

**Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C**

a) Essa afirmação é falsa. A linguagem C é **case-sensitive**, ou seja, diferencia letras maiúsculas de minúsculas. Portanto, `numero` e `Numero` são identificadores diferentes e podem representar variáveis distintas.

b) Essa afirmação é falsa. O ponto de entrada padrão de um programa em C é a função `main`, escrita com todas as letras minúsculas. Como C diferencia maiúsculas de minúsculas, `Main` e `main` são identificadores diferentes.

c) Alternativa correta pois em C, a diferenciação entre letras maiúsculas e minúsculas faz com que cada um desses pares represente identificadores diferentes. Por exemplo, `valor`, `Valor` e `VALOR` podem ser utilizados como nomes de variáveis diferentes dentro do mesmo programa.

d) Essa afirmação é falsa. A diferenciação entre letras maiúsculas e minúsculas é uma característica da própria linguagem C e não depende exclusivamente do sistema operacional utilizado.

## **Questão 2**

O código apresenta   três erros sintáticos/estruturais:
- ponto e vírgula após `#include <stdlib.h>.`
- a função principal declara "main" com "M" maiusculo, ou seja, não é reconhecida como o ponto de entrada padrão do programa.
- uso incorreto de cout << endl
cout e endl pertencem à linguagem C++, não à linguagem C. Como o código está sendo escrito em C e utiliza a biblioteca <stdio.h>, a quebra de linha deve ser feita utilizando a sequência de escape \n.


## **Questão 03**

**Operadores de Atribuição Composta e Avaliação Sequencial**

* `a += b + c;` — **Valor final de a = 11**
A expressão `b + c` é avaliada primeiro ($4 + 5 = 9$). Em seguida, realiza-se `a = 2 + 9`, resultando em **`a = 11`**.
* `b *= c = d - 2;` — **Valores finais de b = 32 e c = 8**
A atribuição é avaliada da direita para a esquerda. Primeiro, `c = 10 - 2`, logo **`c = 8`**. Em seguida, `b *= 8` resulta em `b = 4 * 8`, obtendo **`b = 32`**.
* `d %= a + 3;` — **Valor final de d = 10**
A expressão `a + 3` resulta em $11 + 3 = 14$. O operador resto (`%`) calcula $10 \pmod{14}$, resultando em **`d = 10`**.
* `a += b += c += 5;` — **Valores finais de a = 56, b = 45 e c = 13**
A associação ocorre da direita para a esquerda:
1. `c += 5` $\rightarrow$ `c = 8 + 5` $\rightarrow$ **`c = 13`**
2. `b += 13` $\rightarrow$ `b = 32 + 13` $\rightarrow$ **`b = 45`**
3. `a += 45` $\rightarrow$ `a = 11 + 45` $\rightarrow$ **`a = 56`**



---

## **Questão 04**

**Avaliação de Expressões Lógicas, Relacionais e Precedência**

a) **i < j + 2** $\Rightarrow$ **Resultado: 1** (Verdadeiro)
O operador aritmético `+` possui precedência sobre o relacional `<`. Avalia-se `j + 2` ($3 + 2 = 5$). A expressão torna-se `2 < 5`, o que é verdadeiro.

b) **2 * i - 5 <= j - 4** $\Rightarrow$ **Resultado: 1** (Verdadeiro)
Lado esquerdo: $2 \times 2 - 5 = -1$. Lado direito: $3 - 4 = -1$. A comparação $-1 \le -1$ é verdadeira.

c) **!k && (x + y >= 7.5)** $\Rightarrow$ **Resultado: 1** (Verdadeiro)
`!k` resolve para `!0`, que é $1$. No parêntese, $2.5 + 5.0 = 7.5$, e $7.5 \ge 7.5$ é verdadeiro ($1$). Por fim, $1 \text{ \&\& } 1$ resulta em verdadeiro.

d) **!(i == j) || (y / x == 2.0)** $\Rightarrow$ **Resultado: 1** (Verdadeiro)
`i == j` ($2 == 3$) é falso ($0$), logo `!(0)` torna-se $1$. Como o lado esquerdo da operação lógica `||` é verdadeiro, a expressão inteira resulta em verdadeiro por curto-circuito.

e) **i == 2 && j == 4 || k == 0** $\Rightarrow$ **Resultado: 1** (Verdadeiro)
O operador `&&` tem maior precedência que `||`. Avalia-se primeiro `(i == 2 && j == 4)`, que é `(1 && 0)` $\rightarrow 0$. Em seguida, avalia-se `0 || (k == 0)`, que é `0 || 1`, resultando em verdadeiro.

## **Questão 05**

**Estruturas de Repetição: Comparação entre for, while e do-while**

a) A diferença essencial entre as duas estruturas reside no momento do teste condicional e no número mínimo de execuções:

* **`while`**: É uma estrutura de **pré-teste**. A condição é avaliada *antes* da execução do bloco de código. Se a condição for falsa na primeira avaliação, o bloco não é executado nenhuma vez (mínimo de **0 execuções**).
* **`do-while`**: É uma estrutura de **pós-teste**. O bloco de código é executado *antes* da checagem da condição, garantindo que as instruções sejam executadas ao menos uma vez (mínimo de **1 execução**), independentemente do resultado inicial da condição.

b) O laço **`for`** é a escolha mais elegante e legível em cenários de **iteração determinada (com número fixo ou pré-definido de repetições)**, como no percurso de arrays/matrizes ou em contagens sequenciais. Ele permite agrupar os três elementos fundamentais do laço (inicialização, condição de parada e incremento/decremento) em uma única linha no cabeçalho, mantendo o controle da iteração visível e evitando a dispersão de variáveis pela função.

c) Constitui um **erro de lógica**, e não um erro de compilação. Sintaticamente, a linguagem C interpreta o ponto e vírgula logo após o cabeçalho como uma **instrução nula** (bloco vazio que pertence ao laço).

Se a `condicao` for **verdadeira**, o programa entrará em um **laço infinito (loop infinito)**, executando repetidamente a instrução nula. Como não há código dentro do laço para alterar o estado das variáveis envolvidas na `condicao`, ela permanecerá verdadeira indefinidamente, travando a execução do programa nessa linha.

## **Questão 06**

**Escopo de Bloco e Comandos de Desvio (`break` e `continue`)**

a) O erro de compilação ocorre porque a variável `soma` foi declarada **dentro** do bloco interno do laço `for`. Seu escopo é restrito apenas ao interior das chaves do laço. Ao tentar acessá-la na instrução `printf` (localizada fora do laço), o compilador emite um erro informando que a variável não foi declarada naquele escopo (*undeclared identifier*). Além disso, a cada iteração do laço, a variável estaria sendo reinicializada em 0.

b) O laço executa as iterações de `i = 1` até `i = 7`. O impacto dos comandos de desvio é o seguinte:

* **`continue` (quando `i == 5`)**: Interrompe imediatamente a 5ª iteração antes de chegar ao cálculo da soma, saltando para o incremento do laço (`i++`). Assim, o valor $5^2 = 25$ é ignorado.
* **`break` (quando `i == 8`)**: Aborta e encerra definitivamente a execução de todo o laço `for`. As iterações para $i = 8, 9, 10$ não chegam a ser executadas.
* **Iterações somadas**: Foram somados os quadrados de $i \in \{1, 2, 3, 4, 6, 7\}$.
