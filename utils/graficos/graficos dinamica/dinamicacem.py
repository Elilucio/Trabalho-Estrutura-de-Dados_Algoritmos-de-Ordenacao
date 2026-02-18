import matplotlib.pyplot as plt

x = ["desordenada", "aleatória", "ordenada"]
bubble = [0.0226, 0.0327, 0.0004]
insertion = [0.0003, 0.0098, 0.0155]
merge = [0.0031, 0.0086, 0.0028]
quick = [0.0229, 0.0143, 0.0704]
selection = [0.0101, 0.0197, 0.0152]

plt.figure(figsize=(10, 6))

# Plotando as linhas
plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')

plt.yscale('log') 

plt.title('Comparação de Algoritmos em listas dinâmicas de 100 elementos')
plt.xlabel('Lista')
plt.ylabel('Tempo em milissegundos em log')
plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5) 
plt.legend()

plt.show()