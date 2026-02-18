import matplotlib.pyplot as plt

# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [43600 ,  6600, 11300, 9300, 13900 ]

# Criar gráfico
plt.bar(categorias, lista_estatica, color='#1f77b4')

plt.title('Testes com 100 elementos de listas estáticas aleatórias')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em nanosegundos')

# Mostrar
plt.show()
