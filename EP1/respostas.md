# Respostas

- Equipe: david
- Alunos: David Ferrari

## Questão 1
No escopo dinâmico a variável assume o valor presente no seu predescessor imediato ou na própria definição da escopo presente se houver a definição para a mesma, já no escopo estático a variável é definida pela seu antecessor de escopo mais ancestral possível, o output desse código fica na forma:
```
In block
        inline: dynamic inside
        inline: static  inside
        in sub: dynamic inside
        in sub: static  outside

In main
        inline: dynamic outside
        inline: static  outside
        in sub: dynamic outside
        in sub: static  outside
```
Onde podemos ver a clara diferença entre o escopo
estático e dinâmico, no escopo estático quando a 
variável é utilizada na sub-rotina o seu valor é expresso pelo declarado na main, o seu ancestral mais distante, porém quando utilizado dentro do bloco de código contido na main como há uma declaração da variável imediata naquele escopo o valor utilizado é o declarado no escopo imediato.

Já no caso da variável dinâmica o ancestral imediato
é utilizado ou ao próprio escopo de trabalho é utilizado, essa determinação é feita em runtime, o valor da variável declara dinamicamente então acaba variando tanto no escopo da sub-tarefa, onde é selecionada a declaração no ancestral imediato, ou seja o bloco de código contido na main.
Já quando utilizado no próprio bloco ele utiliza igualmente a variável estática o seu valor, pois existe uma declaração imediata neste escopo, e no caso da main novamente é utilizado o valor declarado na main por ser o escopo imediato onde há declaração.

## Questão 2
A diferença entre o descrito no capítulo 5 é que no Perl a implementação do escopo dinâmico não se trata da criação de uma nova variável quando declarada em escopo interno, apesar da palavra reservada ser "local" no Perl não é exatamente isso que ocorre, no código desenvolvido o exemplo seria o valor da variável dinâmica que é primeiramente declarada no escopo global, quando a mesma é redeclarada dentro do bloco de código interno ao escopo global, ao invés de ser criada uma variável dinâmica de mesmo nome é associado um valor temporário a antiga variável declarada no escopo global, e após a execução do bloco de código esse valor temporário é removido e então o valor anterior é recuperado.
