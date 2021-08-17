Algoritmo "Peso_ideal"
// 7. Desenvolva um algoritmo que receba os valores da altura e do
//sexo de uma pessoa,calcule e mostre o peso ideal dessa pessoa,
//utilizando as seguintes regras:
//para homens: (72.7 * altura) – 58;
//para mulheres: (62.1 * altura) – 44.7
Var
   peso,altura:real
   sexo:logico

Inicio
      escreva("Qual o seu Sexo? (Digite 0 para [M] e 1 para [F])")
      leia(sexo)
      escreva("Digite a sua altura: (Em Metros)")
      leia(altura)

      se sexo=0 entao
         peso <-((72.7*altura)-58)
      senão
         peso <-((62.1 * altura)-44.7)
      fimse
      escreva("O seu peso Ideal é: ",peso)
Fimalgoritmo