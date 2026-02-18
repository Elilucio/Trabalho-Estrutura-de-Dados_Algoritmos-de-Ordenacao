import matplotlib.pyplot as plt

# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_dinamica = [ 32700, 9800,  8600,  14300, 19700]
# Criar gráfico
plt.bar(categorias, lista_dinamica, color='#0effa7')


plt.title('Testes com 100 elementos de listas dinâmicas aleatórias')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em nanosegundos')

# Mostrar
plt.show()
