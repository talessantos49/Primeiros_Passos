Algoritmo "Exemplo2.1 Decisao 01 - Equacao 2º grau"
          //ax2 + bx + c
          
Var
   a, b, c, delta, x1, x2:real

Inicio
   escreva("A = ")
   leia(a)
   
   escreva("B = ")
   leia(b)
   
   escreva("C = ")
   leia(c)
   
   delta <- exp(b,2) - 4*a*c
   escreval("Delta = ",delta)

   se (delta>=0) entao
      x1 <- (-1*b+raizq(delta))/(2*a)
      x2 <- (-1*b-raizq(delta))/(2*a)
      escreva("x1 = ", x1, " e x2 = ", x2)
   senao
      escreval("Não existem raízes reais")
   fimse

Fimalgoritmo