import matplotlib.pyplot as plt

# Dados
"""100 listas • 1.000 elementos

Bubble sort
2.758.100 ns
2.7581 ms
Insertion sort
2.300 ns
0.0023 ms
Merge sort
35.600 ns
0.0356 ms
Quick sort
1.630.100 ns
1.6301 ms
Selection sort
618.600 ns
0.6186 ms"""
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [2.75, 0.0023, 0.0356, 1.63, 0.6186]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

# Adicionar títulos e labels
plt.title('Testes com 1000 elementos de listas dinâmicas completamente desordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()