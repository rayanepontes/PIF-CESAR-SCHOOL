# Questões Fechadas

## Questão 1

### a) Diferença essencial entre `while` e `do-while`

| Estrutura | Momento da Avaliação | Nº Mínimo de Execuções |
| --- | --- | --- |
| **`while`** | **Pré-testada**: A condição é avaliada **antes** de qualquer execução do bloco. | **0 (Zero)** — Se a condição for falsa na primeira verificação, o bloco não é executado nenhuma vez. |
| **`do-while`** | **Pós-testada**: A condição é avaliada **após** a execução do bloco. | **1 (Uma)** — O bloco é garantidamente executado ao menos uma vez antes da primeira checagem. |

### b) Indicações de Uso e Elegância de Código

* **`for`**: É a escolha mais elegante quando o **número de iterações é previamente conhecido** ou determinado por um intervalo fixo (ex.: percorrer vetores, matrizes ou repetições de $0$ a $N$). Concentra inicialização, condição e incremento no próprio cabeçalho.
* **`while`**: É ideal quando o **número de iterações é indeterminado** e depende de um evento ou condição que precisa ser testada **antes** de entrar no laço (ex.: leitura de arquivos até atingir `EOF` ou aguardar um sinal lógico).
* **`do-while`**: É a escolha ideal quando o **bloco de código precisa ser executado ao menos uma vez** antes que qualquer validação seja feita (ex.: exibição de menus de navegação ou rotinas de validação de dados de entrada do usuário).

### c) Análise de Código: `while (condicao);`

Trata-se de um **erro de lógica** (e não um erro de compilação).

```c
while (condicao); ← O ponto e vírgula encerra o laço e representa uma instrução nula (null statement)

```

* **Comportamento do Compilador:** Na linguagem C, o ponto e vírgula `;` isolado é interpretado como uma instrução vazia. O código é **sintaticamente válido**, portanto o compilador não gera erro de compilação.
* **Execução se `condicao` for verdadeira:** Se a variável ou expressão `condicao` for avaliada como verdadeira (valor diferente de zero), a instrução nula será executada indefinidamente. Como o corpo do laço está vazio, nenhuma ação é tomada dentro da iteração para alterar o valor de `condicao`, fazendo com que o programa entre em **laço infinito** (*loop* infinito) e trave a execução nessa linha.

# Questões Fechadas

## Questão 2

### a) Causa do erro de declaração na instrução `printf` final

O compilador emitirá um erro de compilação do tipo *"identificador não declarado"* (`'soma' undeclared`) porque a variável `soma` foi declarada **dentro** do bloco do laço `for`.

Em C, variáveis declaradas no interior de um bloco delimitado por chaves `{ }` possuem **escopo de bloco**. Isso significa que a variável `soma` deixa de existir assim que a execução do laço `for` termina. Como o `printf` está fora desse bloco, ele tenta acessar uma variável que não existe mais na memória naquele ponto do programa.

---

### b) Incorreção conceitual se o `printf` fosse movido para dentro do laço

Se a instrução `printf` fosse movida para dentro do bloco do `for`, o valor impresso estaria incorreto porque a declaração `int soma = 0;` ocorreria a cada ciclo do laço:

1. **Recriação e Reinicialização:** A cada iteração, a variável `soma` é recriada na memória e reinicializada com `0`.
2. **Perda de Acúmulo:** O valor acumulado na iteração anterior é totalmente perdido no início do ciclo seguinte.
3. **Resultado Incorreto:** Em vez de acumular a soma dos quadrados ($1 + 4 + 9 + \dots$), o programa apenas calcularia $0 + i^2$ em cada passo, imprimindo isoladamente o quadrado do elemento atual (`1`, `4`, `9`, `16`, ...).

---
## **Questão 03**

### **a) Sequência exata de valores do Trecho A**

A sequência impressa será:

```c
36    18    9    4    2    1
```

Isso acontece porque o valor inicial de `a` é `36` e, a cada repetição, `a` é dividido por `2` usando divisão inteira. Assim, os valores seguem `36 → 18 → 9 → 4 → 2 → 1 → 0`. Quando `a` chega a `0`, a condição `a > 0` se torna falsa e o laço é encerrado.

### **b) Comportamento do Trecho B**

O Trecho B não possui expressão de inicialização nem de incremento. A leitura do caractere acontece diretamente na condição do `for`, por meio de `getch()`. A função lê um caractere e o resultado é armazenado em `ch`. Enquanto o caractere lido for diferente de `'X'`, o laço continua executando. A expressão `ch + 1` adiciona `1` ao valor numérico correspondente ao caractere armazenado em `ch`, fazendo com que seja impresso o caractere seguinte. Por exemplo, se `ch` contiver `'A'`, `ch + 1` corresponderá a `'B'`.

Os parênteses em `(ch = getch())` são **estritamente necessários** porque a atribuição `=` possui menor precedência que o operador de comparação `!=`. Com os parênteses, primeiro o caractere retornado por `getch()` é atribuído a `ch` e, depois, esse valor é comparado com `'X'`. Sem os parênteses, a expressão seria interpretada como `ch = (getch() != 'X')`, fazendo com que o resultado da comparação, `0` ou `1`, fosse armazenado em `ch`, alterando completamente o comportamento do programa.

### **c) Interrupção do Trecho C**

O Trecho C possui todas as expressões do `for` omitidas, portanto sua condição é sempre considerada verdadeira e o laço executa indefinidamente. Para interrompê-lo de forma programática, pode-se utilizar a instrução `break` quando uma determinada condição for atingida.

```c
for (;;) {
    printf("Laço Infinito\n");

    if (condicao)
        break;
}
```

Quando `condicao` for verdadeira, o `break` encerra imediatamente o laço e o programa continua sua execução na primeira instrução após o `for`.


## **Questão 04**

### **a) Ação do `break`**

Quando o comando `break` é executado dentro de um laço `for` ou `while`, a execução do laço é **interrompida imediatamente**, independentemente de a condição do laço ainda ser verdadeira. O programa sai do laço e continua sua execução a partir da **primeira instrução localizada depois do laço**.

### **b) Ação do `continue`**

Quando o comando `continue` é executado dentro de um laço `for`, ele **interrompe apenas a execução da iteração atual** e faz o programa passar para a próxima iteração do laço. Diferentemente do `break`, o `continue` **não encerra o laço**.

No caso do `for`, a expressão executada imediatamente após o `continue` é a **terceira expressão do cabeçalho**, ou seja, o **incremento**. Depois disso, a condição do laço é novamente avaliada. Portanto, a sequência é: `continue` → **incremento** → **teste da condição** → próxima iteração, caso a condição seja verdadeira.

### **c) `break` em laços aninhados**

Quando um `break` é executado dentro de um laço interno, ele **interrompe somente o laço interno** no qual está localizado. O laço externo continua sua execução normalmente, seguindo para a próxima iteração.

Por exemplo:

```c
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        if (j == 2)
            break;
    }
}
```

Nesse caso, o `break` encerra apenas o `for` de `j`. O `for` de `i` continua executando suas próximas iterações.

## **Questão 06**

### **a) Valor final de `x`**

O valor final de `x` será **6**.

```text
Valor final de x = 6
```

### **b) Sequência de incrementos e comparações**

O operador `x++` é **pós-fixado**, portanto o valor atual de `x` é utilizado primeiro na comparação e, somente depois, `x` é incrementado em `1`. Como o corpo do `while` está vazio, a única ação realizada pelo laço é executar repetidamente o teste `x++ < 5`.

A execução ocorre da seguinte forma: inicialmente `x = 0`, então compara `0 < 5` (verdadeiro) e depois incrementa `x` para `1`; em seguida compara `1 < 5` (verdadeiro) e incrementa para `2`; depois compara `2 < 5` (verdadeiro) e incrementa para `3`; compara `3 < 5` (verdadeiro) e incrementa para `4`; compara `4 < 5` (verdadeiro) e incrementa para `5`; por fim, compara `5 < 5` (falso) e, mesmo com a condição sendo falsa, o `x++` já realizou o incremento, fazendo `x` passar para `6`. O laço então é encerrado e o `printf` imprime o valor `6`.

### **c) Código reescrito sem corpo vazio**

Uma forma explícita de manter exatamente o mesmo resultado é separar a comparação do incremento:

```c
int x = 0;

while (x < 5) {
    x++;
}

printf("Valor final de x = %d\n", x);
```

Nesse caso, `x` também termina com o valor **6**.



