import matplotlib.pyplot as plt

x = ["desordenada", "aleatória", "ordenada"]
bubble = [2.75, 1.78, 0.0024]
insertion = [0.0023, 0.76, 0.7276]
merge = [0.0356, 0.11, 0.0313]
quick = [1.63, 0.1, 3.4688]
selection = [0.6186, 1.22, 1.5603]


plt.figure(figsize=(10, 6))
plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')

plt.yscale('log') 


plt.title('Comparação de Algoritmos em listas dinâmicas de 1.000 elementos')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos em log')
plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()