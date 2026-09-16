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
## Questão 4

```c
int a = 1, b = 2, c = 3, d = 4;
```

### a) `a += b + c;`

Primeiro calculamos `b + c`:

```text
2 + 3 = 5
```

Depois somamos esse valor em `a`:

```text
a = 1 + 5
a = 6
```

**Valor final de `a`: 6.**

### b) `b *= c = d + 2;`

Primeiro é feito `d + 2`:

```text
4 + 2 = 6
```

Então `c` recebe 6:

```text
c = 6
```

Depois `b` é multiplicado por `c`:

```text
b = 2 * 6
b = 12
```

**Valores finais: `b = 12` e `c = 6`.**

### c) `d %= a + a + a;`

Como `a` vale 6:

```text
6 + 6 + 6 = 18
```

Agora fazemos o resto da divisão:

```text
d = 4 % 18
d = 4
```

Como 4 é menor que 18, o resto continua sendo 4.

**Valor final de `d`: 4.**

### d) `d -= c -= b -= a;`

As atribuições são feitas da direita para a esquerda.

Primeiro:

```text
b -= a
b = 12 - 6
b = 6
```

Depois:

```text
c -= b
c = 6 - 6
c = 0
```

Por último:

```text
d -= c
d = 4 - 0
d = 4
```

**Valores finais: `b = 6`, `c = 0` e `d = 4`.**

### e) `a += b += c += 7;`

Novamente, começamos pela direita:

```text
c += 7
c = 0 + 7
c = 7
```

Depois:

```text
b += c
b = 6 + 7
b = 13
```

E finalmente:

```text
a += b
a = 6 + 13
a = 19
```

**Valores finais: `a = 19`, `b = 13` e `c = 7`.**

No final da questão 4:

```text
a = 19
b = 13
c = 7
d = 4
```

---

## Questão 5

Variáveis:

```c
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;
```

### a) `i < j + 3`

```text
j + 3 = 2 + 3 = 5
1 < 5
```

Verdadeiro.

**Resultado: 1**

### b) `2 * i - 7 <= j - 8`

```text
2 * 1 - 7 = -5
2 - 8 = -6
```

Então:

```text
-5 <= -6
```

Falso.

**Resultado: 0**

### c) `-x + y >= 2.0 * y`

```text
-3.3 + 4.4 = 1.1
2.0 * 4.4 = 8.8
```

Então:

```text
1.1 >= 8.8
```

Falso.

**Resultado: 0**

### d) `x == y`

```text
3.3 == 4.4
```

Os valores são diferentes.

**Resultado: 0**

### e) `!(n - j)`

Primeiro:

```text
n - j = 2 - 2 = 0
```

Como `!` transforma 0 em 1:

```text
!0 = 1
```

**Resultado: 1**

### f) `!n - j`

O `!` tem prioridade, então primeiro fazemos:

```text
!n = !2 = 0
```

Depois:

```text
0 - 2 = -2
```

Como `-2` é diferente de zero, ele é considerado verdadeiro em C.

**Resultado: 1**

### g) `i && j && k`

Os três valores são diferentes de zero:

```text
1 && 2 && 3
```

Todos são considerados verdadeiros.

**Resultado: 1**

### h) `i || j - 3 && k`

Primeiro fazemos `j - 3`:

```text
2 - 3 = -1
```

Depois:

```text
-1 && 3
```

Os dois são diferentes de zero, então o resultado é verdadeiro.

Depois:

```text
1 || 1
```

Também é verdadeiro.

**Resultado: 1**

### i) `i < j && 2 >= k`

Primeiro:

```text
1 < 2 = 1
2 >= 3 = 0
```

Então:

```text
1 && 0 = 0
```

**Resultado: 0**

### j) `i == 2 || j == 4 || k == 5`

Verificando cada condição:

```text
1 == 2 → 0
2 == 4 → 0
3 == 5 → 0
```

Então:

```text
0 || 0 || 0 = 0
```

**Resultado: 0**

## Questão 6

**a)** A diferença entre `++n` e `m++` está na ordem em que o incremento acontece. No caso de `++n`, o valor é incrementado primeiro e depois utilizado. Então, como `n` começa com 5, `++n` faz `n` passar para 6 e, em seguida, `x` recebe esse valor. Portanto, o Trecho A irá imprimir `n = 6` e `x = 6`.

Já no caso de `m++`, o valor atual é utilizado primeiro e só depois a variável é incrementada. Como `m` começa com 5, `y` recebe 5 e depois `m` passa para 6. Assim, o Trecho B irá imprimir `m = 6` e `y = 5`.

**b)** A instrução `printf("%d\t%d\t%d\n", n, n+1, n++);` pode gerar resultados inconsistentes porque o `n++` modifica o valor de `n` enquanto `n` também está sendo utilizado nos outros argumentos do `printf()`. Em C, não existe uma ordem definida para a avaliação dos argumentos de uma função. Por isso, o compilador pode avaliar essas partes em uma ordem diferente da esperada pelo programador, resultando em **comportamento indefinido**. Para evitar esse problema, o ideal é separar o incremento da impressão, por exemplo, primeiro fazer o `printf()` e depois executar `n++`.


