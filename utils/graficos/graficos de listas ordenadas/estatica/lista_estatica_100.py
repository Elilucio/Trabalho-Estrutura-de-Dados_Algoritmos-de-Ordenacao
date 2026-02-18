import matplotlib.pyplot as plt

"""Bubble sort
300 ns
Insertion sort
500 ns
Merge sort
5.400 ns
Quick sort
25.400 ns
Selection sort
18.700 ns
"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [300, 500, 5400, 25400, 18.700]

# Criar gráfico
plt.bar(categorias, lista_estatica, color="#763bbb")

# Adicionar títulos e labels
plt.title('Testes com 100 elementos de listas estáticas ordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em nanossegundos')

# Mostrar
plt.show()
