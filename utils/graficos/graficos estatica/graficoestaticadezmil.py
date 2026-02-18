import matplotlib.pyplot as plt

x = ["desordenada", "aleatória", "ordenada"]
bubble = [212.68, 418.29, 0.0208]
insertion = [118.04, 67.71, 0.0477]
merge = [0.72, 1.61, 0.718]
quick = [136.7, 1.48, 201.09]
selection = [114.6, 151.75, 102.83]

plt.figure(figsize=(10, 6))

plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')

plt.yscale('log') 

plt.title('Comparação de Algoritmos em listas estáticas de 10.000 elementos completamente desordenados, aleatórios e ordenados')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos em log')

plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()