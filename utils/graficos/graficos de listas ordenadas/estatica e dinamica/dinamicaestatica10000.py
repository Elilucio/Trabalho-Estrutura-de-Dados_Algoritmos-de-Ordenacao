import matplotlib.pyplot as plt
import numpy as np

categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [0.02, 0.04, 0.71, 201.09, 102.83]
lista_dinamica = [0.03, 178.87, 0.78, 384.76, 191.89]

x = np.arange(len(categorias))  
width = 0.35 

fig, ax = plt.subplots(figsize=(10, 6))

bar1 = ax.bar(x - width/2, lista_estatica, width, label='Lista estática', color='#1f77b4')
bar2 = ax.bar(x + width/2, lista_dinamica, width, label='Lista dinâmica', color="#0effa7")

ax.set_ylabel('tempo em milissegundos')
ax.set_title('Latência dos algoritmos de ordenação em listas estáticas e dinâmicas com 10.000 elementos ordenados')
ax.set_xticks(x)
ax.set_xticklabels(categorias)
ax.legend()

ax.bar_label(bar1, padding=3)
ax.bar_label(bar2, padding=3)

plt.show()
