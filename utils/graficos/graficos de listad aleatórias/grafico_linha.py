import matplotlib.pyplot as plt

x = [100, 1000, 10000]
bubble = [0.04, 2.8, 418.29]
insertion = [0.01, 0.55, 67.71]
merge = [0.01, 0.13, 1.61]
quick = [0.01, 0.01, 1.48]
selection = [0.01, 1.72, 151.75]


plt.figure(figsize=(10, 6))

plt.plot(x, bubble, label='Bubble Sort', color='blue', marker='o')
plt.plot(x, insertion, label='Insertion Sort', color='red', marker='o')
plt.plot(x, merge, label='Merge Sort', color='green', marker='s', linewidth=2) 
plt.plot(x, quick, label='Quick Sort', color='magenta', marker='x')
plt.plot(x, selection, label='Selection Sort', color='orange', marker='^')

plt.yscale('log') 

plt.title('Comparação de Algoritmos em listas estáticas')
plt.xlabel('Quantidade de Elementos')
plt.ylabel('Tempo em milissegundos em log')

plt.xticks(x)
plt.grid(True, which="both", ls="-", alpha=0.5)
plt.legend()

plt.show()