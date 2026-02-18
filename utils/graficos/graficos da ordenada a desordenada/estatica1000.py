import matplotlib.pyplot as plt

x = ["desordenada", "ordenada"]
bubble = [2.044, 0.0018]
insertion = [1.721,0.0048]
merge = [0.112, 0.085]
quick = [1.266, 2.330]
selection = [1.156, 1.283]

plt.figure(figsize=(10, 6))

plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')


plt.title('Comparação de Algoritmos em listas estáticas de 1.000 elementos')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos')
plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()