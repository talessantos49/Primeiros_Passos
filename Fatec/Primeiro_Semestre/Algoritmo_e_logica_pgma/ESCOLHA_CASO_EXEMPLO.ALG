Algoritmo "Escolha_CASO_EXEMPLO"

Var
   nome,tempos:caracter

Inicio

      escreva("Qual � o seu nome? ")
      leia(nome)
      
      escreval("Ol�, ", nome," como est� o clima hoje? Escolha uma das op��es: ")
      escreval("[E] ensolarado")
      escreval("[C] chuvoso")
      escreval("[N] Nublado")
      escreval("[V] Nevoso")
      leia(tempos)
      
      escolha(tempos)
          caso "E"
               escreval("Ensolarado")
               escreval("Vou a Praia!")
          caso "C"
               escreval("Chuvoso")
               escreval(nome, " vai assistir s�rie")
          caso "N"
               escreval("Nublado")
               escreval(nome, " vai dormir. ")
          caso "V"
               escreval("Nevoso")
               escreval(nome, " est� turistando")
          outrocaso
               escreval("N�o Existe")
      fimescolha
Fimalgoritmo