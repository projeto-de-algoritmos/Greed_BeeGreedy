Questão do site [CodeForces](https://codeforces.com) do contest Codeforces Round 683 (Div. 2, by Meet IT).

O problema consistia em colocar em uma mochila, uma quantidade de peso equivalente a pelo menos metade de suam capacidade total. Caso não desse, retornava-se -1.

Para isso, foi utilizado um vetor para armazenar os itens de forma ordenada, verificando do mais pesado pro mais leve quais se encaixavam na mochila, até o total de peso ser pelo menos a metade da capacidade máxima.

![submissão aceita](AC.png)