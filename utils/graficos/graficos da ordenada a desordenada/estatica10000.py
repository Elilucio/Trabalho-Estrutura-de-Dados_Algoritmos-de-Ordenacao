import matplotlib.pyplot as plt

x = ["desordenada", "ordenada"]
bubble = [212.68, 0.0208]
insertion = [118.04, 0.0477]
merge = [0.72, 0.718]
quick = [136.7, 201.09]
selection = [114.6, 102.83]


plt.figure(figsize=(10, 6))

plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')


plt.title('Comparação de Algoritmos em listas estáticas de 10.000 elementos')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos')
plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()