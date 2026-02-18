import matplotlib.pyplot as plt

"""Bubble sort
0.0208 ms
Insertion sort
0.0477 ms
Merge sort
0.7184 ms
Quick sort
201.0993 ms
Selection sort
102.8379 ms"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [0.0208, 0.0477, 0.7184, 201.0993, 102.8379]

# Criar gráfico
plt.bar(categorias, lista_estatica, color='#763bbb')

# Adicionar títulos e labels
plt.title('Testes com 10.000 elementos de listas estáticas ordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()
