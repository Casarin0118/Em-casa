#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarCPF(char cpf[]) {
    int i, j, soma = 0;
    int digito_verificador_1, digito_verificador_2;

    // Verificar se o CPF possui 11 dígitos
    if (strlen(cpf) != 11) {
        return 0;
    }

    // Verificar se todos os caracteres são dígitos
    for (i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }

    // Verificar se todos os dígitos são iguais (caso contrário, o CPF é inválido)
    for (i = 1; i < 11; i++) {
        if (cpf[i] != cpf[i - 1]) {
            break;
        }
    }
    if (i == 11) {
        return 0;
    }

    // Calcular o primeiro dígito verificador
    for (i = 0, j = 10; i < 9; i++, j--) {
        soma += (cpf[i] - '0') * j;
    }
    digito_verificador_1 = 11 - (soma % 11);
    if (digito_verificador_1 >= 10) {
        digito_verificador_1 = 0;
    }

    // Verificar se o primeiro dígito verificador está correto
    if (digito_verificador_1 != cpf[9] - '0') {
        return 0;
    }

    // Calcular o segundo dígito verificador
    soma = 0;
    for (i = 0, j = 11; i < 10; i++, j--) {
        soma += (cpf[i] - '0') * j;
    }
    digito_verificador_2 = 11 - (soma % 11);
    if (digito_verificador_2 >= 10) {
        digito_verificador_2 = 0;
    }

    // Verificar se o segundo dígito verificador está correto
    if (digito_verificador_2 != cpf[10] - '0') {
        return 0;
    }

    return 1;
}

int main() {
    char cpf[12];

    printf("Digite um CPF (apenas números): ");
    scanf("%s", cpf);

    if (validarCPF(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido!\n");
    }

    return 0;
}
