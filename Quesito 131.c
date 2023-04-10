# Entrada da matriz
matriz = []
for i in range(3):
  linha = []
  for j in range(3):
    num = int(input(f'Digite o número da posição [{i}][{j}]: '))
    linha.append(num)
  matriz.append(linha)

# Geração do array pela soma das colunas da matriz
array = []
for j in range(3):
  soma_coluna = 0
  for i in range(3):
    soma_coluna += matriz[i][j]
  array.append(soma_coluna)

# Exibição do array gerado
print(array)
