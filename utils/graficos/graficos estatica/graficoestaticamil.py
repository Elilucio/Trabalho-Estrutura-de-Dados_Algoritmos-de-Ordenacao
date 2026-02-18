import matplotlib.pyplot as plt

x = ["desordenada", "aleatória", "ordenada"]
bubble = [2.044, 2.8, 0.0018]
insertion = [1.721, 0.55, 0.0048]
merge = [0.112, 0.13, 0.085]
quick = [1.266, 0.01, 2.330]
selection = [1.156, 1.72, 1.283]


plt.figure(figsize=(10, 6))

plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')

plt.yscale('log') 

plt.title('Comparação de Algoritmos em listas estáticas de 1.000 elementos completamente desordenados, aleatórios e ordenados')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos em log')
plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()