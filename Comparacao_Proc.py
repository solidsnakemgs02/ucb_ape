import time

sum = 0
#N = 1000000000  # 1 bilhão
N = 1000000000

start = time.time()

for i in range(1, N+1):
    sum += i

end = time.time()

print(f"Soma = {sum}")
print(f"Tempo gasto: {end - start:.3f} segundos")