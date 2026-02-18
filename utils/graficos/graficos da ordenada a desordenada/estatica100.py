import matplotlib.pyplot as plt

x = ["desordenada", "ordenada"]
bubble = [0.038, 0.0003]
insertion = [0.011, 0.0005]
merge = [0.008, 0.0054]
quick = [0.022, 0.0254]
selection = [0.016, 0.0187]

plt.figure(figsize=(10, 6))

plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')


plt.title('Comparação de Algoritmos em listas estáticas de 100 elementos')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos')

plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()