import matplotlib.pyplot as plt
import numpy as np


categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [2.8 , 0.55, 0.13, 0.01, 1.72]
lista_dinamica = [1.78, 0.76, 0.11, 0.1, 1.22]

x = np.arange(len(categorias))  
width = 0.35  

fig, ax = plt.subplots(figsize=(10, 6))

bar1 = ax.bar(x - width/2, lista_estatica, width, label='Lista estática', color='#1f77b4')
bar2 = ax.bar(x + width/2, lista_dinamica, width, label='Lista dinâmica', color="#0effa7")

ax.set_ylabel('tempo em milisegundos')
ax.set_title('Latência dos algoritmos de ordenação em listas estáticas e dinâmicas aleatórias com 1.000 elementos')
ax.set_xticks(x)
ax.set_xticklabels(categorias)
ax.legend()
ax.bar_label(bar1, padding=3)
ax.bar_label(bar2, padding=3)

plt.show()
