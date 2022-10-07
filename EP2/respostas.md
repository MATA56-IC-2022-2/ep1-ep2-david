# Respostas - EP2

- Equipe: david
- Alunos: David Ferrari

## Questão 2 
Nos resultados obtidos na minha máquina local os tempos resultaram em média 0.000275 para a função de iniciação estática, 0.070659 para a inicialização semi-estática na stack, e 0.097475 para a inicialização no heap.

Esses valores são esperados dado a natureza de cada inicialização e suas propriedades, o método estático é extremamente mais veloz pois o mesmo é feito em tempo de compilação, sendo o tempo gasto basicamente o acesso a func1() e o retorno da mesma, não é efetuada a criação do array novamente.
Já na func2() o array é processado toda vez que a mesma sai de contexto e é reinserida, criando então o efeito visto, apesar disso é válido lembrar que a stack é um espaço de dados organizados de forma a facilitar as operações na mesma, além disso por ser semi-estático parte do trabalho já está feito em tempo de compilação, como a determinação do tamanho necessário a ser utilizado.
Na func3() ocorre o alocamento no Heap, esse tipo de alocamento é feito a tempo de execução, diferente da stack o heap é um meio desorganizado, dessa forma as operações com dados nesse ambiente são sempre mais lentas, além disso o tamanho dos dados é calculado em tempo de execução, logo gerando a diferença de valor vista entre esse método e o método semi-estático e estático.


