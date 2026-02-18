import matplotlib.pyplot as plt

categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [2.8 , 0.55, 0.13, 0.01, 1.72]

plt.bar(categorias, lista_estatica, color='#1f77b4')

plt.title('Testes com 1.000 elementos de listas estáticas aleatórias')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

plt.show()
