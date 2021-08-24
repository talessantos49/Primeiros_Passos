Algoritmo "Escolha_CASO_EXEMPLO"

Var
   nome,tempos:caracter

Inicio

      escreva("Qual é o seu nome? ")
      leia(nome)
      
      escreval("Olá, ", nome," como está o clima hoje? Escolha uma das opções: ")
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
               escreval(nome, " vai assistir série")
          caso "N"
               escreval("Nublado")
               escreval(nome, " vai dormir. ")
          caso "V"
               escreval("Nevoso")
               escreval(nome, " está turistando")
          outrocaso
               escreval("Não Existe")
      fimescolha
Fimalgoritmo