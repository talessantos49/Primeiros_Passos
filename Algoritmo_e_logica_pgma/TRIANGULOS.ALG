Algoritmo "Triangulos"

Var
   a,b,c :real
Inicio
      escreva("Digite o primeiro valor: ")
      leia(a)
      
      escreva("Digite o segundo valor: ")
      leia(b)

      escreva("Digite o terceiro Valor: ")
      leia(c)

      se (a < b + c) e (b < a + c) e (c < a + b) entao
         escreva("Esses valores podem formar um triangulo!")
         se (a = b) e (b = c) entao
            escreva("Esse triangulo é Equilátero")
         fimse
         se (a = b) ou (b=c) ou (c=a) entao
            escreva("Esse triangulo é Isósceles")
         senão
            escreva("Esse triangulo é Escaleno")
         fimse
      senão
         escreva("Esses valores não podem formar um triangulo!")
         
      fimse

Fimalgoritmo