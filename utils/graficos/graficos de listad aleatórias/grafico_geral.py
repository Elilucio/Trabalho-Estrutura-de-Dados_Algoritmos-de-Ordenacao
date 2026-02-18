import matplotlib.pyplot as plt
import numpy as np

categorias = ['Bubble Sort', 'Insertion Sort', 'Merge Sort', 'Quick Sort', 'Selection Sort']
lista_estatica_cem = [0.04 , 0.01, 0.01, 0.01, 0.01 ]
lista_estatica_mil= [2.8 , 0.55, 0.13, 0.01, 1.72]
lista_estatica_dmil = [418.29, 67.71, 1.61, 1.48, 151.75]

x = np.arange(len(categorias))
width = 0.35  

fig, ax = plt.subplots(figsize=(10, 6))

bar1 = ax.bar(x - width/2, lista_estatica_cem, width, label='Lista estática de 100 elementos', color='#1f77b4')
bar2 = ax.bar(x + width/2, lista_estatica_mil, width, label='Lista estática de 1000 elementos', color="#0effa7")
bar2 = ax.bar(x + width/2, lista_estatica_dmil, width, label='Lista estática de 10000 elementos', color="#ff0e5a")


ax.set_ylabel('tempo em milisegundos')
ax.set_title('Latência da ordenação de listas estáticas de 100, 1000 e 10.000 elementos')
ax.set_xticks(x)
ax.set_xticklabels(categorias)
ax.legend()
ax.bar_label(bar1, padding=3)
ax.bar_label(bar2, padding=3)

plt.show()
