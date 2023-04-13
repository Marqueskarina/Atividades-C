string_1 = input("Digite a primeira string (até 100 caracteres): ")
string_2 = input("Digite a segunda string: ")

# Verifica se a primeira string tem até 100 caracteres
if len(string_1) > 100:
    print("A primeira string deve ter no máximo 100 caracteres.")
else:
    # Inicializa a variável de contagem
    ocorrencias = 0

    # Itera sobre cada caractere da primeira string, buscando a segunda string
    for i in range(len(string_1) - len(string_2) + 1):
        if string_1[i:i+len(string_2)] == string_2:
            ocorrencias += 1

    # Exibe o resultado
    print("A segunda string ocorre", ocorrencias, "vezes na primeira string.")
