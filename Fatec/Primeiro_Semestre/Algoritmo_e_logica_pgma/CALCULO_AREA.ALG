Algoritmo "Calculo_Area"

Var
   idade,peso : real
   grupo :
   
Inicio
      escreval("Escolha a figura geometrica que ser� calculada a area: ")
      escreval("[1] para quadrado")
      escreval("[2] Para triangulo")
      escreval("[3] Para retangulo")
      escreval("[4] Para Trapezio")
      leia (figura)
      
      escolha figura
              Caso 1
                   escreval("Qual a medida do lado do Quadrado?")
                   leia(lado)
                   resultado<- lado*lado
                   escreval("A area do quadrado �: ", resultado)
              caso 2
                   escreval("Qual a medida da base do triangulo? ")
                   leia(base)
                   escreval("Qual a medida da altura do triangulo?")
                   leia(altura)
                   resultado<- (base*altura)/2
                   escreval("A area do triangulo � : ", resultado)
              caso 3
                   escreval("Qual a medida da base do retangulo? ")
                   leia(base)
                   escreval("Qual a medida da altura do retangulo? ")
                   leia(altura)
                   resultado<- (base*altura)
                   escreval("A area do retangulo �: ",resultado)
              caso 4
                   escreval("Qual a medida da base maior do trap�zio? ")
                   leia(base)
                   escreval("Qual a medida da base menor do trap�zio? ")
                   leia(base_menor)
                   escreval("Qual a altura do trapezio? ")
                   leia(altura)
                   resultado<-((base+base_menor)*altura)/2
                   escreval("A Area do trapezio �: ",resultado)
                   outrocaso
                   escreval("Por favor, digite um valor valido!")
      fimescolha
Fimalgoritmo