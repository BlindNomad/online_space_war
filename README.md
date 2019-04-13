# online_space_war
Jogo de nave espacial
> Documentação ainda em Desenvolvimento/Analise

### Recursos
O jogo possui apenas dois tipos de recursos, comida e produção. os recursos podem ser adquiridos somente com os planetas com que o jogador tenha colonizado. a comida funciona como um limitador da quantia de naves que o jogador pode possuir simultaneamente, por ex, se a soma da comida de todos os planetas que possui colonia for de 10, logo, o jogador pode possuir apenas 10 naves simultâneas. quanto a produção, é o valor da soma de produção de todos os planetas colonizados pelo jogador, esse valor é acumulado por turno e pode ser trocado por naves.

### Planetas
Os planetas serão divididos por três classe, da melhor classe para a pior, A, B e C. a classe serve para distinguir o nível máximo de produção dos planetas, a classe A por ser a melhor, possui uma chance menor para ser gerado pois traz mais vantagens ao jogador que a possuir ao contrário da classe C que é mais abundante. Os planetas também são separados por tipo que define qual vantagem o planeta possui facilidade para o desenvolver. Os planetas podem variar a produção e produção de comida entre os valores pré-definido pela classe do planeta, exemplo: um planeta da Classe A, tipo Gaia, pode ter a produção gerada em 5 enquanto a produção em 4.

| TIPO | CLASSE | VANTAGENS (Min/Max) | % p/ Gerar |
| :--: | :----: | :-----------------: | :--------: |
| Gaia | A | Comida: 4/5 <br> Produção: 4/5 | 03% | 
| Tropical | B | Comida: 3/4 <br> Produção: 2/3 | 21%| 
| Cavernoso | B | Comida: 2/3 <br> Produção: 3/4 | 21% |
| Tundra | C | Comida: 2/3 <br> Produção: 1/2 | 25% |
| Deserto | C | Comida: 1/2 <br> Produção: 2/3 | 25% |
