Algoritmo "Calculadora_Simples"

Var
   numero1, numero2, resultado: real
   operacao :caractere
Inicio

      escreval("Digite o primeiro n�mero inteiro: ")
      leia(numero1)
      
      escreval("Digite o segundo n�mero inteiro: ")
      leia(numero2)
      
      escreval("Escolha a opera��o que ser� realizada: ")
      escreval("[+] para Adi��o")
      escreval("[-] Para subtra��o")
      escreval("[*] Para multiplicacao")
      escreval("[/] Para divis�o")
      leia (operacao)

      escolha operacao
              Caso "+"
                   escreval("Os valores escolhidos s�o: ", numero1, " e ", numero2)
                   escreval("A opera��o escolhida � Adi��o.")
                   resultado <- numero1+numero2
                   escreval("O resultado � :", resultado)
              caso "*"
                   escreval("Os valores escolhidos s�o: ", numero1," e ", numero2)
                   escreval("A opera��o escolhida � Multiplica��o.")
                   resultado <- numero1*numero2
                   escreval("O Resultado � :", resultado)
              caso "-"
                   escreval("Os valores escolhidos s�o: ", numero1, " e ", numero2)
                   escreval("A opera��o escolhida � subtra��o.")
                   se numero1> numero2 entao
                      resultado<- numero1-numero2
                   sen�o
                      resultado<- numero2-numero1
                   fimse
                   escreval("O resultado � :", resultado)
              caso "/"
                   escreval("OS valores escolhidos s�o: ", numero1," e ", numero2)
                   escreval("A opera��o escolhida � divis�o.")
                   se numero1>numero2 entao
                      resultado<- numero1/numero2
                   sen�o
                      resultado<- numero2/numero1
                   fimse
                   escreval("O resultado � :", resultado)
              outrocaso
                   escreval("Por favor, digite um valor valido!")
      
      
      fimescolha
Fimalgoritmo