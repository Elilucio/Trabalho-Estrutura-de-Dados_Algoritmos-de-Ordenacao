import matplotlib.pyplot as plt
import numpy as np

# 1. Dados
categorias = ['Merge Sort', 'Quick Sort']
lista_estatica = [1.61, 1.48]
lista_dinamica = [3.74, 4.63]

x = np.arange(len(categorias)) 
width = 0.35  

fig, ax = plt.subplots(figsize=(10, 6))

bar1 = ax.bar(x - width/2, lista_estatica, width, label='Lista estática', color='#1f77b4')
bar2 = ax.bar(x + width/2, lista_dinamica, width, label='Lista dinâmica', color="#0effa7")

ax.set_ylabel('tempo em milisegundos')
ax.set_title('Latência dos algoritmos de ordenação em listas estáticas e dinâmicas aleatórias com 10.000 elementos')
ax.set_xticks(x)
ax.set_xticklabels(categorias)
ax.legend()

ax.bar_label(bar1, padding=3)
ax.bar_label(bar2, padding=3)

plt.show()
