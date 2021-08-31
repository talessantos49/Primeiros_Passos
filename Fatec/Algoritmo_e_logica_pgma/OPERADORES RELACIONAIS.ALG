Algoritmo "Operadores relacionais"

Var
   x, y :inteiro
   r: logico
   z: real

Inicio

      escreva("X = ")
      leia(x)
      
      escreva("Y = ")
      leia(y)

      r <- x = y
      escreval("r = ",r)
      
      r <- (x+y) <= 100
      escreval("r = ",r)
      
      escreval(x^y," é igual a ", exp(x,y))

Fimalgoritmo