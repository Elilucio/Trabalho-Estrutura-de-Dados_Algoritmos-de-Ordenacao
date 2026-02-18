import matplotlib.pyplot as plt

"""
Bubble sort
38.000 ns
0.0380 ms
Insertion sort
11.600 ns
0.0116 ms
Merge sort
8.100 ns
0.0081 ms
Quick sort
22.400 ns
0.0224 ms
Selection sort
16.900 ns
0.0169 ms
"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [0.038, 0.011, 0.008, 0.022, 0.016]

# Criar gráfico
plt.bar(categorias, lista_estatica, color="#763bbb")

# Adicionar títulos e labels
plt.title('Testes com 100 elementos de listas estáticas completamente desordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em nanossegundos')

# Mostrar
plt.show()
