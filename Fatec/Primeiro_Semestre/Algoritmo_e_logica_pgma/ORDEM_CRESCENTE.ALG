Algoritmo "Ordem_crescente"

Var
   a, b, c : real

   

Inicio
   escreva("Digite o primeiro numero: ")
   leia(a)
   
   escreva("Digite o segundo numero: ")
   leia(b)
   
   escreva("Digite o terceiro numero: ")
   leia(c)
   
   se (a<b) entao

      se (b<c) entao

         escreva("A ordem crescente dos n�mero �: ",a,", ",b," e ", c)
      senao
         escreva("A ordem crescente dos n�meros �: ",a,", ",c," e ",b)
      fimse
   fimse
 //  se (b<a) entao
   //   se (a<c) entao
     //    escreva("A ordem crescente dos n�meros �: ", b,", ",a," e ",c)
      //fimse
   //fimse


Fimalgoritmo