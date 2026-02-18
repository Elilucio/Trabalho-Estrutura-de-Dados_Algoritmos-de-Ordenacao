import matplotlib.pyplot as plt


categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [418.29, 67.71, 1.61, 1.48, 151.75]

plt.bar(categorias, lista_estatica, color='')

plt.title('Testes com 10.000 elementos de listas estáticas aleatórias')
plt.xlabel('Algoritmos mais rápidos')
plt.ylabel('Tempo em milisegundos')

plt.show()
