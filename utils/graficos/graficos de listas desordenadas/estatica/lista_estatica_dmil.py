import matplotlib.pyplot as plt

# Dados

categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [212.68, 118.04, 0.72, 136.70, 114.60]

# Criar gráfico
plt.bar(categorias, lista_estatica, color='#763bbb')

# Adicionar títulos e labels
plt.title('Testes no pior caso com 10.000 elementos de listas estáticas completamente desordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()
