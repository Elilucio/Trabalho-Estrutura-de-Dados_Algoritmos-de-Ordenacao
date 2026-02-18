import matplotlib.pyplot as plt
import numpy as np


categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica = valores_ms = [0.0003, 0.0005, 0.0054, 0.0254, 0.0187]
lista_dinamica =  [0.0004, 0.0155, 0.0028, 0.0704, 0.0152]

x = np.arange(len(categorias)) 
width = 0.35  

fig, ax = plt.subplots(figsize=(10, 6))

bar1 = ax.bar(x - width/2, lista_estatica, width, label='Lista estática', color='#1f77b4')
bar2 = ax.bar(x + width/2, lista_dinamica, width, label='Lista dinâmica', color="#0effa7")

ax.set_ylabel('tempo em milisegundos')
ax.set_title('Latência dos algoritmos de ordenação em listas estáticas e dinâmicas ordenadas com 100 elementos')
ax.set_xticks(x)
ax.set_xticklabels(categorias)
ax.legend()

ax.bar_label(bar1, padding=3)
ax.bar_label(bar2, padding=3)

plt.show()
