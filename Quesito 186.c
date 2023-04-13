nome = input("Digite o nome da pessoa: ")
endereco = input("Digite o endereço da pessoa: ")
telefone = input("Digite o telefone da pessoa: ")

# Concatena as três informações em uma única string
info_pessoa = nome + " " + endereco + " " + telefone

# Inicializa as variáveis de contagem
num_letras = 0
num_digitos = 0

# Itera sobre cada caractere da string, verificando se é letra ou dígito
for caractere in info_pessoa:
    if caractere.isalpha():
        num_letras += 1
    elif caractere.isdigit():
        num_digitos += 1

# Exibe os resultados
print("A informação concatenada contém", num_letras, "letras e", num_digitos, "dígitos.")
