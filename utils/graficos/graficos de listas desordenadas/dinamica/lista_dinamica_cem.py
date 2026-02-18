import matplotlib.pyplot as plt

# Dados
"""Bubble sort
22.600 ns
0.0226 ms
Insertion sort
300 ns
0.0003 ms
Merge sort
3.100 ns
0.0031 ms
Quick sort
22.900 ns
0.0229 ms
Selection sort
10.100 ns
0.0101 ms"""

categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [0.0226, 0.0003, 0.0031, 0.0229, 0.0101]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

# Adicionar títulos e labels
plt.title('Testes com 100 elementos de listas dinâmicas completamente desordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()