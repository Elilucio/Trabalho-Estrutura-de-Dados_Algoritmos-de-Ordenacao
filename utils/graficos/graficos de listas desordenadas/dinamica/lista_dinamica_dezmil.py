import matplotlib.pyplot as plt

# Dados
"""Bubble sort
282.780.200 ns
282.7802 ms
Insertion sort
44.100 ns
0.0441 ms
Merge sort
849.100 ns
0.8491 ms
Quick sort
438.261.200 ns
438.2612 ms
Selection sort
201.769.000 ns
201.7690 ms"""
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [282.78, 0.04, 0.84, 438.26, 201.76]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

# Adicionar títulos e labels
plt.title('Testes com 10.000 elementos de listas dinâmicas completamente desordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()