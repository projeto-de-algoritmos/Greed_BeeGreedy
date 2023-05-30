Questão do site [CodeForces](https://codeforces.com) do contest Codeforces Round 345 (Div. 2).

O problema consistia em reordenar quadros por sua beleza, de forma que formassem a maior quantidade de duplas onde i é menos belo que i+1.

Para isso, foi utilizada uma solução que analisava os números como grupos formados de números iguais ([15, 15] é um grupo e [23] é outro) e identificava qual desses tinha mais elementos, e assim subtraía esse valor do número de elementos totais. Isso garante que caso não haja nenhum número repetido, o número de duplas é o máximo possível (n-1, pois cada grupo é composto por 1 elemento no máximo); enquanto, caso haja números repetidos, o grupo com a maior quantidade representam os números, que no fim das contas deixaram de contar de fato por não formarem duplas entre si, visto que qualquer outro grupo com menos items poderia ser combinado a um desses do grupo maior.

![submissão aceita](AC.png)




