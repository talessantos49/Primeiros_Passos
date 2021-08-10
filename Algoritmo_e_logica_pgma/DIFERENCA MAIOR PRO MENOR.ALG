Algoritmo "Diferença maior pro menor"

Var
   a, b, c :real


Inicio
   escreva("Digite o valor do Primeiro numero: ")
   leia(a)
   escreva("Digite o valor do Segundo numero: ")
   leia(b)
   
   se a > b entao
      c <- a-b
      escreva("A diferença entre os dois números é: ",c)
   senao
      c <- b-a
      escreva("A diferença entre os dois números é: ",c)
   fimse


Fimalgoritmo