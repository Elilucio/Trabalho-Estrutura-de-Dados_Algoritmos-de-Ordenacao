import matplotlib.pyplot as plt

x = ["desordenada", "aleatória", "ordenada"]
bubble = [282.78, 450.65, 0.0383]
insertion = [0.04, 227.4, 178.87]
merge = [0.84, 3.74, 0.78]
quick = [438.26, 4.63, 384.76]
selection = [201.76, 274.39, 191.89]

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