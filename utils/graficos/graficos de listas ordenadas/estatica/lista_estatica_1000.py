import matplotlib.pyplot as plt

"""Bubble sort
1.800
Insertion sort
4.800 
Merge sort
85.000 
Quick sort
2.330.400
Selection sort
1.283.700
"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [1800, 4800, 85000, 2330400, 1283700]

# Criar gráfico
plt.bar(categorias, lista_estatica, color='#763bbb')

# Adicionar títulos e labels
plt.title('Testes com 1000 elementos de listas estáticas ordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em nanossegundos')

# Mostrar
plt.show()
