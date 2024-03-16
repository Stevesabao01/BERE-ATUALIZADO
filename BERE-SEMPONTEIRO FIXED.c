#include <stdio.h>

void exibirMenuPrincipal();
void exibirMenuPagamento();
void exibirTotais(float, float, float);
void adicionarItem(float*, int, float);
float calcularDesconto(float);

float totalLimpeza = 0.0;
float totalAlimentos = 0.0;
float totalPadaria = 0.0;

int main() {
    int opcao, submenu;

    while (1) {
        exibirMenuPrincipal();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exibirSubmenuLimpeza();
                break;
            case 2:
                exibirSubmenuAlimentos();
                break;
            case 3:
                exibirSubmenuPadaria();
                break;
            case 4:
                exibirTotais(totalLimpeza, totalAlimentos, totalPadaria);
                exibirMenuPagamento();
                break;
            case 5:
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }
}

void exibirMenuPrincipal() {
    printf("\n==== SEJA BEM-VINDA BERE ^_^ ====\n");
    printf("\n-------------------------------------\n");
    printf("1. Material de Limpeza\n");
    printf("2. Venda de Alimentos\n");
    printf("3. Padaria\n");
    printf("4. Pagamento\n");
    printf("5. Sair\n");
}

void exibirTotais(float totalLimpeza, float totalAlimentos, float totalPadaria) {
    printf("\n\nTotais:\n");
    printf("Total de Material de Limpeza: R$%.2f\n", totalLimpeza);
    printf("Total de Venda de Alimentos: R$%.2f\n", totalAlimentos);
    printf("Total de Padaria: R$%.2f\n", totalPadaria);
    printf("Total da Compra: R$%.2f\n", totalLimpeza + totalAlimentos + totalPadaria);
}

void adicionarItem(float* total, int categoria, float valor) {
    switch (categoria) {
        case 1:
            *total += valor;
            break;
        case 2:
            *total += valor;
            break;
        case 3:
            *total += valor;
            break;
    }
}

float calcularDesconto(float total) {
    if (total <= 50.0) {
        return total * 0.95; // 5% de desconto
    } else if (total > 50.0 && total < 100.0) {
        return total * 0.90; // 10% de desconto
    } else {
        return total * 0.82; // 18% de desconto
    }
}

void exibirSubmenuLimpeza() {
    int submenuLimpeza, qtd;
    float valor;

    while (1) {
        printf("\n\n==== Material de Limpeza ^-^ ====\n\n");
        printf("1. Detergente un  -  R$1,99\n");
        printf("2. Sabao em po - 1kg R$8,99\n");
        printf("3. Esponja un   -   R$1,50\n");
        printf("4. Amaciante - 1Lt  R$15,00\n");
        printf("5. Voltar ao menu principal\n");
        adicionarItem(&totalLimpeza, 1, totalLimpeza);
        printf("Carrinho: R$%.2f     ", totalLimpeza);printf("Escolha uma opcao: ");
scanf("%d", &submenuLimpeza);

        switch (submenuLimpeza) {
            case 1:
                printf("Informe a quantidade de Detergente: ");
                scanf("%d", &qtd);
                valor = qtd * 1.99;
                adicionarItem(&totalLimpeza, 1, valor);
                break;
            case 2:
                printf("Informe a quantidade de Sabao em po: ");
                scanf("%d", &qtd);
                valor = qtd * 8.99;
                adicionarItem(&totalLimpeza, 1, valor);
                break;
            case 3:
                printf("Informe a quantidade de Esponja: ");
                scanf("%d", &qtd);
                valor = qtd * 1.50;
                adicionarItem(&totalLimpeza, 1, valor);
                break;
            case 4:
                printf("Informe a quantidade de Amaciante: ");
                scanf("%d", &qtd);
                valor = qtd * 15.00;
                adicionarItem(&totalLimpeza, 1, valor);
                break;
            case 5:
                return;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }
}

void exibirSubmenuAlimentos() {
    int submenuAlimentos, qtd;
    float valor;

    while (1) {
        printf("\n\n==== Alimentos ^-^ ====\n\n");
        printf("1. Cafe           R$19,99\n");
        printf("2. Leite          R$5,90\n");
        printf("3. Arroz - 1kg      R$4,50\n");
        printf("4. Feijao Preto - 1kg  R$8,00\n");
        printf("5. Acucar - 1kg     R$5,00\n");
        printf("6. Voltar ao menu principal\n");
        adicionarItem(&totalAlimentos, 2, totalAlimentos);
        printf("Carrinho: R$%.2f     ", totalAlimentos);
        printf("Escolha uma opcao: ");
        scanf("%d", &submenuAlimentos);

        switch (submenuAlimentos) {
            case 1:
                printf("Informe a quantidade de Cafe: ");
                scanf("%d", &qtd);
                valor = qtd * 19.99;
                adicionarItem(&totalAlimentos, 2, valor);
                break;
            case 2:
                printf("Informe a quantidade de Leite: ");
                scanf("%d", &qtd);
                valor = qtd * 5.90;
                adicionarItem(&totalAlimentos, 2, valor);
                break;
            case 3:
                printf("Informe a quantidade de Arroz: ");
                scanf("%d", &qtd);
                valor = qtd * 4.50;
                adicionarItem(&totalAlimentos, 2, valor);
                break;
            case 4:
                printf("Informe a quantidade de Feijao Preto: ");
                scanf("%d", &qtd);
                valor = qtd * 8.00;
                adicionarItem(&totalAlimentos, 2, valor);
                break;
            case 5:
                printf("Informe a quantidade de Acucar: ");
                scanf("%d", &qtd);
                valor = qtd * 5.00;
                adicionarItem(&totalAlimentos, 2, valor);
                break;
            case 6:
                return;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }
}

void exibirSubmenuPadaria() {
    int submenuPadaria, qtd;
    float valor;

    while (1) {
        printf("\n\n===== Padaria ^-^ =====\n\n");
        printf("1. Pao de Forma     R$9,50\n");
        printf("2. Pao Integral     R$12,50\n");
        printf("3. Pao Frances - Unid R$1,90\n");
        printf("4. Sonho           R$8,50\n");
        printf("5. Voltar ao menu principal\n");
        adicionarItem(&totalPadaria, 3, totalPadaria);
        printf("Carrinho: R$%.2f     ", totalPadaria);
        printf("Escolha uma opcao: ");
        scanf("%d", &submenuPadaria);

        switch (submenuPadaria) {
            case 1:
                printf("Informe a quantidade de Pao de Forma: ");
                scanf("%d", &qtd);
                valor = qtd * 9.50;
                adicionarItem(&totalPadaria, 3, valor);
                break;
            case 2:
                printf("Informe a quantidade de Pao Integral: ");
                scanf("%d", &qtd);
                valor = qtd * 12.50;
                adicionarItem(&totalPadaria, 3, valor);
                break;
            case 3:
                printf("Informe a quantidade de Pao Frances: ");
                scanf("%d", &qtd);
                valor = qtd * 1.90;
                adicionarItem(&totalPadaria, 3, valor);
                break;
            case 4:
                printf("Informe a quantidade de Sonho: ");
                scanf("%d", &qtd);
                valor = qtd * 8.50;
                adicionarItem(&totalPadaria, 3, valor);
                break;
            case 5:
                return;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }
}

void exibirMenuPagamento() {
    int opcao;
    float valorrecebido, change, total = totalLimpeza + totalAlimentos + totalPadaria;

    total = calcularDesconto(total);

    printf("\n\nTotal com desconto: R$%.2f\n", total);
    printf("Escolha uma opcao de pagamento:\n");
    printf("1. Dinheiro\n");
    printf("2. Cartao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Informe o valor recebido em dinheiro: ");
            scanf("%f", &valorrecebido);
            if (valorrecebido >= total) {
                change = valorrecebido - total;
                printf("Troco: R$%.2f\n", change);
            } else {
                printf("Valor insuficiente. Por favor, insira um valor maior.\n");
            }
            break;
        case 2:
            printf("Pagamento aprovado com cartao.\n");
            break;
    }
}
