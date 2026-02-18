import matplotlib.pyplot as plt

"""Bubble sort 2.400 ns
Insertion sort 727.600 ns
Merge sort 31.300 ns
Quick sort 3.468.800 ns
Selection sort 1.560.300 ns"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [2400, 727600, 31300, 3468800, 1560300]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

# Adicionar títulos e labels
plt.title('Testes com 1.000 elementos de listas dinâmicas no ordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em nanossegundos')

# Mostrar
plt.show()