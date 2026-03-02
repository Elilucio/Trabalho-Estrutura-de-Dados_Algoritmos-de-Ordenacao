# Análise de Desempenho dos Algoritmos de Ordenação Aplicados a Sistemas de Rankings de Quizzes Educacionais.

Esse trabalho analisa o desempenho dos algoritmos de
ordenação: Bubble Sort, Insertion Sort, Merge Sort, Quick Sort
e Selection Sort em listas estáticas e dinâmicas simples contendo
100 (cem), 1.000 (um mil) e 10.000 (dez mil) elementos do tipo
número inteiro que variam aleatoriamente de 0 a 99.999, que
representam as pontuações de participantes de um ranking de um
aplicativo de quizzes educacionais. O experimento foi realizado
100 (cem) vezes para cada teste, nas listas ordenadas, inversas e
aleatórias e o tempo médio foi calculado como o somatório dos
tempos de cada uma das ordenações na escala de milissegundos
dividido pelo número total de ordenações.

# Equipe 

ELILÚCIO TEIXEIRA FÉLIX FILHO, 
GABRIEL SOUZA SANTOS,
ÍCARO CAVALCANTE DE CARVALHO PINHEIRO
JOSÉ DHONATAN FERNANDES DE ALMEIDA, 
LETÍCIA MARIA DOS SANTOS DIAS,
SAMUEL JACKSON MESQUITA LIMA,
SARAH MENDES TELES.

# Executar os testes

Para executar os testes, será necessário alterar o código do arquivo main.c, mudando o valor de iterações, os métodos de preenchimento, os tipos de listas e qual sort ultilizar. Todos os métodos de preenchimento e sorts estão presentes no arquivo, porém comentados para não comprometimento de resultados.

Para executar os testes de forma correta é necessário:
- Deixar apenas um tipo de lista sem estar comentada
- Escolher um método de preenchimento para a lista
- Escolher um sort para aplicar à lista (Sorts para listas dinânimcas e estáticas têm nomes diferentes, Para estáticas há um "E", e para dinâmicas há um "D")

Após isso executar o arquivo main.c caso esteja em uma ide que o permite

Ou

## Terminal PowerShell (padrão windows 10/11)
- No terminal, já na pasta src, executar `gcc main.c -o nome_programa`
- E depois `./nome_programa` ou `./nome_programa.exe`

## CMD
- No terminal, já na pasta src, executar `gcc main.c -o nome_programa`
- E depois `nome_programa`

## GitBash/Linux/MacOS
- No terminal, já na pasta src, executar `gcc main.c -o nome_programa`
- E depois `./programa`

### É notório ressaltar que essas execuções assumem que o compilador de c é o gcc, sendo necessário alterá-lo para outros compiladores
