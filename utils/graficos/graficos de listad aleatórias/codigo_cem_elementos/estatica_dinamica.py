import matplotlib.pyplot as plt
import numpy as np

categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = [43600 ,  6600, 11300, 9300, 13900 ]
lista_dinamica = [ 32700, 9800,  8600,  14300, 19700]

x = np.arange(len(categorias))  
width = 0.35  


fig, ax = plt.subplots(figsize=(10, 6))

bar1 = ax.bar(x - width/2, lista_estatica, width, label='Lista estática', color='#1f77b4')
bar2 = ax.bar(x + width/2, lista_dinamica, width, label='Lista dinâmica', color="#0effa7")

ax.set_ylabel('tempo em nanosegundos')
ax.set_title('Latência dos algoritmos de ordenação em listas estáticas e dinâmicas aleatórias com 100 elementos')
ax.set_xticks(x)
ax.set_xticklabels(categorias)
ax.legend()

ax.bar_label(bar1, padding=3)
ax.bar_label(bar2, padding=3)

plt.show()
