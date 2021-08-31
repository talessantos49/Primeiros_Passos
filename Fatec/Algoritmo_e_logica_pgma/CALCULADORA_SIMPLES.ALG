Algoritmo "Calculadora_Simples"

Var
   numero1, numero2, resultado: real
   operacao :caractere
Inicio

      escreval("Digite o primeiro número inteiro: ")
      leia(numero1)
      
      escreval("Digite o segundo número inteiro: ")
      leia(numero2)
      
      escreval("Escolha a operação que será realizada: ")
      escreval("[+] para Adição")
      escreval("[-] Para subtração")
      escreval("[*] Para multiplicacao")
      escreval("[/] Para divisão")
      leia (operacao)

      escolha operacao
              Caso "+"
                   escreval("Os valores escolhidos são: ", numero1, " e ", numero2)
                   escreval("A operação escolhida é Adição.")
                   resultado <- numero1+numero2
                   escreval("O resultado é :", resultado)
              caso "*"
                   escreval("Os valores escolhidos são: ", numero1," e ", numero2)
                   escreval("A operação escolhida é Multiplicação.")
                   resultado <- numero1*numero2
                   escreval("O Resultado é :", resultado)
              caso "-"
                   escreval("Os valores escolhidos são: ", numero1, " e ", numero2)
                   escreval("A operação escolhida é subtração.")
                   se numero1> numero2 entao
                      resultado<- numero1-numero2
                   senão
                      resultado<- numero2-numero1
                   fimse
                   escreval("O resultado é :", resultado)
              caso "/"
                   escreval("OS valores escolhidos são: ", numero1," e ", numero2)
                   escreval("A operação escolhida é divisão.")
                   se numero1>numero2 entao
                      resultado<- numero1/numero2
                   senão
                      resultado<- numero2/numero1
                   fimse
                   escreval("O resultado é :", resultado)
              outrocaso
                   escreval("Por favor, digite um valor valido!")
      
      
      fimescolha
Fimalgoritmo