Algoritmo "Salario_funcionario"

Var
   salario, salario_novo: real

Inicio

      escreva("Digite o salario do funcionario: ")
      leia(salario)

      se (salario<500) entao
         salario_novo <- salario+(salario*1)
         senao
              se(salario<1000) entao
                 salario_novo <- salario+(salario*0.75)
              senao
                   se(salario>=1000) e (salario<1500) entao
                     salario_novo <- salario+(salario*0.50)
                   senao
                       se (salario>=1500) e (salario<2000) entao
                           salario_novo <- salario+(salario*0.25)
                       senao
                           se (salario>=2000) e (salario<3000) entao
                              salario_novo <- salario+(salario*0.10)
                           senao
                                se(salario>=3000) e(salario<5000) entao
                                  salario_novo <- salario+(salario*0.05)
                                senao
                                  salario_novo <- salario+(salario*0.02)
                                fimse
                           fimse
                       fimse
                   fimse
              fimse
      fimse
      escreva("O seu salario anterior era de", salario," e o novo salario é ",salario_novo)

Fimalgoritmo