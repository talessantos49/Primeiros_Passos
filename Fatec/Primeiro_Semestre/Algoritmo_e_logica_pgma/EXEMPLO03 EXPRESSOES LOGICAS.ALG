Algoritmo "Exemplo03 Expressoes Logicas"

Var
   n1, n2, media, frequencia : real
   aprovado, nao_aprovado :logico
   
Inicio
      escreva("N1 = ")
      leia(n1)
      
      escreva("N2 = ")
      leia(n2)
      
      media <- (n1+n2)/2
      escreval("M�dia = ", media)
      
      escreval("Frequencia (1 a 20): ")
      leia(frequencia)
      
      aprovado <- ((media>=6.0) e (frequencia>=15))
      escreval("O aluno est� aprovado? ",aprovado)
      
      nao_aprovado <- n�o aprovado
      escreval(" O contrario do de cima � : ",nao_aprovado)
Fimalgoritmo