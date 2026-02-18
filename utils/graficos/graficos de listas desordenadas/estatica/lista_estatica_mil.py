import matplotlib.pyplot as plt

"""
Bubble sort
2.044.600 ns
2.0446 ms
Insertion sort
1.721.000 ns
1.7210 ms
Merge sort
112.400 ns
0.1124 ms
Quick sort
1.266.400 ns
1.2664 ms
Selection sort
1.156.800 ns
1.1568 ms"""
# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [2.044, 1.721, 0.112, 1.266, 1.156]

# Criar gráfico
plt.bar(categorias, lista_estatica, color="#763bbb")

# Adicionar títulos e labels
plt.title('Testes com 1.000 elementos de listas estáticas completamente desordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milissegundos')

# Mostrar
plt.show()
