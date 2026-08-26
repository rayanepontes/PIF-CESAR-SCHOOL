/*
#include <stdio.h>
#include <stdlib.h>;  --- esse ponto e virgula não deveria estar aqui
int Main{} --- chaves no lugar onde deveria ser parenteses, "main" escrito com M maiúsculo
( --- parenteses sendo usados como chaves
  printf( Existem %d semanas no ano.,52); --- falta de aspas dup´las na string
  cout << endl; --- cout pertence exclusivamente ao C++
  system("PAUSE");
  return 0;
)
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    printf("Existem %d semanas no ano\n", 52);
    system("PAUSE");
    return 0;
}