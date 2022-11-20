#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int opcao, opcao1, opcao2, opcao3, opcao4, i, quant;

	void center_print(const char *s, int width);

	struct referencia
	{
		char nome0[100], nome1[100], nome2[100], nome3[100], nome4[100];
	}

	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	char nome5[100];

	system("cls");

	printf("------------------------------------------------------------------------------------\n");
	center_print("EasyGet", 84);
	printf("------------------------------------------------------------------------------------\n\n");
	
	printf("Login: ");
	fflush(stdin);
	scanf("%[^\n]s", nome5);
	printf("Senha: ");
	scanf("%d", &opcao3);

	system("cls");

	switch (opcao3)
	{
	case 123456:

		while (opcao != 6)
		{
			while (opcao2 != 1)
			{

				printf("------------------------------------------------------------------------------------");
				printf("\n\t\t\t\t EasyGet	\n");
				printf("------------------------------------------------------------------------------------\n\n");
				printf("\t\t\tSeja Bem Vindo, usuário %s\n", nome5);
				printf("====================================================================================\n ");
				printf("1-Cadastrar\n ");
				printf("2-Exibir Dados\n ");
				printf("3-Alterar\n ");
				printf("4-Excluir\n ");
				printf("5-Informações do sistema\n ");
				printf("6-Sair\n");
				printf("------------------------------------------------------------------------------------\n\n");
				printf("\nQual opção você deseja acessar? ");
				scanf("%i", &opcao);

				switch (opcao)
				{
				case 1:
					printf("\n\n Quantos cadastros você deseja realizar ? ");

					scanf("%i", &quant);

					for (i = 1; i <= quant; i++)
					{
						printf("\n\n\t\t\t          INICIANDO CADASTRO %d\n", i);
						printf("\t\t\t         ------------------------\n\n");
						printf("\n Nome do Cliente: ");
						fflush(stdin);
						scanf("%[^\n]s", CA[i].nome0);
						printf("\n Telefone do Cliente: ");
						fflush(stdin);
						scanf("%[^\n]s", CA[i].nome1);
						printf("\n Marca do Produto: ");
						fflush(stdin);
						scanf("%[^\n]s", CA[i].nome2);
						printf("\n Código do produto: ");
						fflush(stdin);
						scanf("%[^\n]s", CA[i].nome3);
						printf("\n Preço do produto: ");
						fflush(stdin);
						scanf("%[^\n]s", CA[i].nome4);
						printf("\n\n\t\t");
						system("pause");
					}
					break;

				case 2:

					for (i = 1; i <= quant; i++)
					{
						printf("\n\n\t\t\t       EXIBINDO CADASTRO   %d\n", i);
						printf("\t\t\t     ----------------------\n\n");
						printf("\n Nome do Cliente: %s\n", CA[i].nome0);
						printf("\n Telefone do Cliente: %s\n", CA[i].nome1);
						printf("\n Marca do produto: %s\n", CA[i].nome2);
						printf("\n Código do produto: %s\n", CA[i].nome3);
						printf("\n Preço do produto: %s\n", CA[i].nome4);
						system("pause");
					}
					break;

				case 3:
					for (i = 1; i <= quant; i++)
					{
						printf("\n\n\t\t\t    ALTERAR CADASTRO\n");
						printf("\t\t\t    ------------------\n\n");
						printf(" 1- Nome do Cliente");
						printf("\n 2- Telefone do Cliente");
						printf("\n 3- Marca do Produto");
						printf("\n 4- Código do Produto");
						printf("\n 5- Preço do produto\n\n");
						printf("Qual opçao você deseja acessar? \n");
						scanf("%i", &opcao1);

						switch (opcao1)
						{
						case 1:
							for (i = i; i <= quant; i++)
							{
								printf("\n\n CADASTRO %d\n", i);
								printf("\n Alterar Nome do Cliente: ");
								fflush(stdin);
								scanf("%[^\n]s", &CA[i].nome0);
								printf("\n Novo Nome do Cliente: %s\n\n\t\t");
								system("pause");
							}
							break;

						case 2:
							for (i = i; i <= quant; i++)
							{
								printf("\n\n CADASTRO %d\n", i);
								printf("\n Alterar Telefone do Cliente: ");
								fflush(stdin);
								scanf("%[^\n]s", &CA[i].nome1);
								printf("\n Novo Telefone do Cliente: %s\n\n\t\t");
								system("pause");
							}
							break;

						case 3:
							for (i = i; i <= quant; i++)
							{
								printf("\n\n CADASTRO %d\n", i);
								printf("\n Alterar Marca do Cliente: ");
								fflush(stdin);
								scanf("%[^\n]s", &CA[i].nome2);
								printf("\n Nova Marca do Cliente: %s\n\n\t\t");
								system("pause");
							}
							break;

						case 4:
							for (i = i; i <= quant; i++)
							{
								printf("\n\n CADASTRO %d\n", i);
								printf("\n Alterar Código do Cliente: ");
								fflush(stdin);
								scanf("%[^\n]s", &CA[i].nome3);
								printf("\n Novo Código do Cliente: %s\n\n\t\t");
								system("pause");
							}
							break;

						case 5:
							for (i = i; i <= quant; i++)
							{
								printf("\n\n CADASTRO %d\n", i);
								printf("\n Alterar Preço do Cliente: ");
								fflush(stdin);
								scanf("%[^\n]s", &CA[i].nome4);
								printf("\n Novo Preço do Cliente: %s\n\n\t\t");
								system("pause");
							}
							break;
						}
					
					}default:
						printf("Valor incorreto!\n");
						fflush(stdin);
						continue;
					break;

				case 4:
					for (i = i; i <= quant; i++)
					{
						printf("\n\n\t\t\t        EXCLUIR CADASTRO\n");
						printf("\t\t\t      --------------------\n\n");
						printf(" 1- Nome do Cliente");
						printf("\n 2- Telefone do Cliente");
						printf("\n 3- Marca do Produto");
						printf("\n 4- Código do Produto");
						printf("\n 5- Preço do Produto");
						printf("\n 6- Excluir todos os Dados\n\n");
						printf("Qual opção você deseja acessar? \n");
						scanf("%d", &opcao4);

						switch (opcao4)
						{
						case 1:
							for (i = i; i <= quant; i++)
							{
								memset(&CA[i].nome0, 0, sizeof(CA[i].nome0));
								printf("Nome do Cliente excluido!\n\n");
								system("pause");
							}
							break;

						case 2:
							for (i = i; i <= quant; i++)
							{
								memset(&CA[i].nome1, 0, sizeof(CA[i].nome1));
								printf("Telefone do Cliente excluido!\n\n");
								system("pause");
							}
							break;

						case 3:
							for (i = i; i <= quant; i++)
							{
								memset(&CA[i].nome2, 0, sizeof(CA[i].nome2));
								printf("Marca do Cliente excluido!\n\n");
								system("pause");
							}
							break;

						case 4:
							for (i = i; i <= quant; i++)
							{
								memset(&CA[i].nome3, 0, sizeof(CA[i].nome3));
								printf("Código do Cliente excluido!\n\n");
								system("pause");
							}
							break;

						case 5:
							for (i = i; i <= quant; i++)
							{
								memset(&CA[i].nome4, 0, sizeof(CA[i].nome4));
								printf("Preço do Cliente excluido!\n\n");
								system("pause");
							}
							break;

						case 6:
							for (i = i; i <= quant; i++)
							{
								memset(&CA[i].nome0, 0, sizeof(CA[i].nome0));
								memset(&CA[i].nome1, 0, sizeof(CA[i].nome1));
								memset(&CA[i].nome2, 0, sizeof(CA[i].nome2));
								memset(&CA[i].nome3, 0, sizeof(CA[i].nome3));
								memset(&CA[i].nome4, 0, sizeof(CA[i].nome4));
								printf("Todos os dados foram excluidos!\n\n");
								system("pause");
							}
							break;
						default:
							printf("valor inválido!\n");
							exit(0);
						}
					}

					break;
	
				case 5:
					printf("\nSistema EasyGet\n");
					printf("   v.0.0.01   \n");
					system("pause");

					break;

				case 6:
					printf("\n Você realmente deseja sair do sistema? \n\n");
					printf(" 1- sim\n 2- não");
					printf("\n\n");
					scanf("%d", &opcao2);

					switch (opcao2)
					{
					case 1:
						printf("\n\n Saindo do Sistema \n\n\n\t\t");
						system("pause");
						return 0;
						break;
					default:
						printf("Valor inválido! 2\n");
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}

void center_print(const char *s, int width)
{
        int length = strlen(s);
        int i;
        for (i=0; i<=(width-length)/2; i++) {
                fputs(" ", stdout);
        }
        printf("%s\n", s);
}