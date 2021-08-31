Algoritmo "Exercicio02-Operadores_aritmeticos"
//2) 4 - 7 div 2 + pot(2,4) / rad(4)

Var
      a, b, c, d, f: inteiro
      expr1, expr2 :real
      expressao : logico
Inicio
      a <- 4
      b <- 7
      c <- 2

      expr1 <- a - (b div c) + exp(c,a) / raizq(a)
      escreval(" O resultado é : ",expr1)

Fimalgoritmo