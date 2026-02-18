import matplotlib.pyplot as plt

# Dados
categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_d = [0.0004, 0.0155, 0.0028, 0.0704, 0.0152]

# Criar gráfico
plt.bar(categorias, lista_d, color='#0effa7')

# Adicionar títulos e labels
plt.title('Testes com 100 elementos de listas dinâmicas ordenadas')
plt.xlabel('Algoritmos de ordenação')
plt.ylabel('Tempo em milisegundos')

# Mostrar
plt.show()