import matplotlib.pyplot as plt

# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [1.78, 0.76, 0.11, 0.1, 1.22]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

plt.title('Testes com 1.000 elementos de listas dinâmicas aleatórias')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()