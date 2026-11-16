# **Questões Fechadas**

## **Questão 01**

### **a)**

O protótipo da função é `float celsius(float);`, localizado antes da função `main()`. Ele informa ao compilador que existe uma função chamada `celsius`, que recebe um parâmetro do tipo `float` e retorna um valor também do tipo `float`.

A chamada da função ocorre na instrução `c = celsius(f);`, dentro da função `main()`. Nesse momento, a função é executada, recebendo o valor armazenado na variável `f` como argumento.

A definição da função ocorre em `float celsius(float fahr)`, após a função `main()`. Nela, está presente o código responsável por realizar a conversão de Fahrenheit para Celsius e retornar o resultado por meio do comando `return`.

### **b)**

O protótipo permite que o compilador conheça antecipadamente a assinatura da função, verificando se a quantidade e os tipos dos argumentos utilizados na chamada estão corretos, além de reconhecer o tipo do valor retornado.

Se o protótipo fosse omitido e a função estivesse definida depois da `main()`, o compilador não teria essa informação antecipadamente. Em C moderno, isso gera um diagnóstico de compilação, pois não é permitido utilizar uma função sem sua declaração prévia. Dessa forma, a verificação correta dos parâmetros não poderia ser realizada com base na assinatura da função.

### **c)**

A função `celsius()` possui tipo de retorno `float`, pois devolve um valor real por meio do comando `return`.

O tipo de uma função é determinado pelo valor que ela retorna, e não pelos parâmetros que recebe. Os parâmetros representam os dados de entrada utilizados durante a execução, enquanto o tipo de retorno define o tipo do resultado produzido pela função.

## **Questão 02**

### **a)**

Uma função em C pode devolver apenas um valor por meio do comando `return`.

Na função `calcular()`, o programador pretendia retornar dois resultados diferentes: a soma dos três valores e a média deles. Entretanto, a expressão `return soma, media;` utiliza o operador vírgula, que avalia as expressões da esquerda para a direita e considera apenas o resultado da última expressão.

Portanto, a função retorna somente o valor de `media`, enquanto o valor de `soma` é descartado.

### **b)**

O comando `return;` dentro da função `void imprime_mensagem()` encerra imediatamente a execução da função, sem retornar nenhum valor.

Nesse caso, quando `erro` é menor que zero, a mensagem "Erro invalido" é exibida e a função é encerrada, impedindo a execução da instrução seguinte.

O comando `return;` não é obrigatório no final de uma função `void`, pois, quando ela chega ao fim de seu bloco de código, sua execução é encerrada automaticamente. Ele pode ser utilizado quando é necessário finalizar a função antecipadamente.

### **c)**

A função `calcular()` pode ser reescrita para retornar apenas a média dos três valores:

```
int calcular_media(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return media;
}
```

Para retornar apenas a soma, podemos criar uma segunda função:

```
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}
```

Em C, precisamos utilizar duas funções porque o comando `return` permite devolver apenas um valor por chamada. Assim, cada função fica responsável por produzir e retornar um resultado específico.

## **Questão 03**

### **a)**

O protótipo `void exibe_mensagem(char* msg);` representa uma função que recebe um parâmetro do tipo ponteiro para caractere (`char*`) e não retorna nenhum valor, pois possui tipo de retorno `void`.

O protótipo `int obter_codigo(void);` representa uma função que não recebe parâmetros, indicado pelo `void` entre parênteses, e retorna um valor do tipo `int`.

O protótipo `void limpar_tela(void);` representa uma função que não recebe parâmetros e também não retorna nenhum valor, sendo utilizada apenas para executar uma ação.

### **b)**

A diferença prática está no resultado produzido pela função. Uma função com retorno devolve um valor que pode ser armazenado em uma variável, utilizado em cálculos ou em condições. Já uma função `void` executa uma tarefa sem devolver um resultado.

Uma função com retorno seria adequada para calcular a soma de dois números, pois precisamos obter um resultado para utilizar posteriormente.

Exemplo:

```
int somar(int a, int b) {
    return a + b;
}
```

Uma função `void` seria adequada para limpar a tela do programa, pois sua finalidade é executar uma ação, sem precisar devolver um valor.

Exemplo:

```
void limpar_tela(void) {
    printf("\033[2J\033[H");
}
```

### **c)**

Não. A instrução `x = limpar_tela();` é inválida, pois a função `limpar_tela()` possui tipo de retorno `void`, ou seja, não devolve nenhum valor que possa ser atribuído à variável `x`.

Uma atribuição exige que o lado direito da expressão produza um valor compatível com o tipo da variável. Portanto, a função deve ser chamada separadamente:

```
limpar_tela();
```

## **Questão 04**

### **a)**

O caso base da função é `n == 0`, que retorna o valor `1`. Ele representa a condição de parada da recursão, pois impede que novas chamadas sejam realizadas quando esse valor é alcançado.

O passo recursivo é `n * fatorial(n - 1)`, responsável por realizar novas chamadas da própria função, diminuindo o valor de `n` a cada execução.

Se o caso base fosse removido, a função continuaria chamando a si mesma sem uma condição de parada, provocando o crescimento contínuo da pilha de execução e podendo causar um estouro de pilha (*stack overflow*).

### **b)**

Na chamada `fatorial(4)`, ocorre primeiro a fase de empilhamento, na qual cada chamada aguarda o resultado da chamada seguinte.

**Fase de empilhamento:**

```
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1
```

Quando o caso base é alcançado, começa a fase de desempilhamento, na qual os resultados são calculados e devolvidos às chamadas anteriores.

**Fase de desempilhamento:**

```
fatorial(0) = 1

fatorial(1) = 1 * 1 = 1

fatorial(2) = 2 * 1 = 2

fatorial(3) = 3 * 2 = 6

fatorial(4) = 4 * 6 = 24
```

Portanto, o resultado final de `fatorial(4)` é `24`.

### **c)**

Na recursão, cada chamada da função cria um novo registro de ativação na pilha de execução (*call stack*), armazenando informações como os parâmetros, as variáveis locais e o ponto em que a execução deverá continuar após o retorno da chamada.

Enquanto uma chamada aguarda o resultado da próxima, seu registro permanece na pilha. Quando o caso base é alcançado, as chamadas começam a retornar seus resultados, fazendo com que os registros sejam removidos da pilha na ordem inversa em que foram criados.

Uma recursão sem caso base pode provocar o crescimento indefinido da pilha, consumindo a memória disponível até causar um estouro de pilha e interromper o programa.

## **Questão 05**

### **a)**

A saída do primeiro `printf` será `25`, enquanto a saída do segundo será `8`.

Isso acontece porque a macro `SQR(x)` utiliza parênteses para proteger tanto o argumento quanto a expressão completa:

```
#define SQR(x) ((x)*(x))
```

Ao substituir `SQR(2+3)`, o pré-processador produz:

```
((2+3)*(2+3))
```

O resultado é `25`.

Já a macro `DOBRO(x)` não utiliza parênteses para proteger o argumento:

```
#define DOBRO(x) x*2
```

Ao substituir `DOBRO(2+3)`, a expressão resultante será:

```
2+3*2
```

Como a multiplicação possui precedência sobre a adição, o resultado será `8`.

Portanto, o uso de parênteses nas macros é importante para evitar alterações inesperadas na ordem de avaliação das expressões.

### **b)**

A diretiva `#define` não termina com ponto e vírgula porque é uma instrução do pré-processador, responsável por realizar substituições textuais antes da compilação do código.

Se fosse utilizado um ponto e vírgula, ele também faria parte da substituição, podendo gerar erros ou comportamentos inesperados no código resultante.

Por convenção, utilizamos identificadores em letras maiúsculas para facilitar a identificação de constantes e macros, diferenciando-os visualmente de variáveis e funções comuns. Entretanto, essa utilização é uma convenção de programação, não uma exigência da linguagem C.

### **c)**

A definição `#define PRN (n) printf("%d", n)` está incorreta porque não possui parênteses imediatamente após o nome da macro. Dessa forma, o pré-processador interpreta `PRN` como uma macro sem argumentos, tratando `(n) printf("%d", n)` como seu conteúdo de substituição.

A forma correta é:

```
#define PRN(n) printf("%d", (n))
```

Nesse caso, `PRN` é definida como uma macro com argumento, permitindo substituir `n` pelo valor informado durante sua utilização.

Uma diferença entre uma macro com argumentos e uma função comum é que a macro realiza substituição textual durante o pré-processamento, enquanto uma função possui execução própria em tempo de execução, com parâmetros e tipos verificados pelo compilador.

## **Questão 06**

### **a)**

A diretiva `#include <stdio.h>` utiliza os sinais de menor e maior para indicar a inclusão de um cabeçalho pertencente às bibliotecas padrão ou aos diretórios de inclusão configurados pelo compilador.

Já a diretiva `#include "areas.h"` utiliza aspas duplas para indicar a inclusão de um arquivo de cabeçalho do próprio projeto. Nesse caso, o compilador normalmente procura primeiro no diretório do arquivo que contém a diretiva e, depois, nos demais diretórios de inclusão configurados.

Portanto, utilizamos `< >` principalmente para bibliotecas disponibilizadas pelo sistema ou ambiente de desenvolvimento, enquanto `" "` é normalmente utilizado para arquivos criados pelo próprio programador.

### **b)**

A diretiva `#undef SOMA` cancela a definição anterior da macro `SOMA`, fazendo com que ela deixe de existir para as próximas substituições realizadas pelo pré-processador.

A forma `#undef SOMA(x,y)` está incorreta porque a diretiva `#undef` recebe apenas o nome do identificador que será removido, sem seus argumentos.

Assim, a forma correta é:

```
#undef SOMA
```

### **c)**

Se a macro `DEBUG` não tiver sido definida anteriormente, a mensagem exibida será:

```
Modo normal
```

Isso acontece porque a diretiva `#ifdef DEBUG` verifica se o identificador `DEBUG` foi definido. Como ele não existe, o pré-processador ignora o primeiro bloco e seleciona o conteúdo associado ao `#else`.

Essa decisão acontece durante o pré-processamento, antes da compilação e da execução do programa.

As diretivas de compilação condicional não aparecem no executável final porque são instruções utilizadas pelo pré-processador para selecionar e organizar o código que será efetivamente compilado. Assim, apenas as instruções selecionadas são consideradas nas etapas seguintes.