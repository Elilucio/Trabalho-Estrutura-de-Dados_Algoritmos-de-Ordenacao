import matplotlib.pyplot as plt

"""Bubble sort
0.0383 ms
Insertion sort
178.8733 ms
Merge sort
0.7805 ms
Quick sort
384.7628 ms
Selection sort
191.8901 ms"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [0.0383, 178.8733, 0.7805, 384.7628, 191.8901]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

# Adicionar títulos e labels
plt.title('Testes com 10.000 elementos de listas dinâmicas no ordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()