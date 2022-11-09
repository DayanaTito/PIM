#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


	int opcao, opcao1, opcao2, opcao3, opcao4, i, quant;

	struct referencia {
	 
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
		printf("Nome do usuario: ");
		fflush(stdin);
		scanf_s("%[^\n]s", nome5);
		printf("Senha da loja: ");
		scanf_s("%d", &opcao3);

			
		switch (opcao3) {
			case 123456:

				while (opcao!= 6) {
					while (opcao2!= 1) {
						system("color F4");
						system("cls");

						printf("------------------------------------------------------------------------------------");
						printf("\t\t\t\t nome da startup do pim\n");
						printf("------------------------------------------------------------------------------------\n\n");
						printf("\t\t\tSeja Bem Vindo, usuario %s\n" ,nome5);
						printf("====================================================================================\n ");
						printf("1-Cadastrar\n ");
						printf("2-Exibir Dados\n ");
						printf("3-Alterar\n ");
						printf("4-Excluir\n ");
						printf("5-Informações do sistema\n ");
						printf("6-Sair\n" );
						printf("------------------------------------------------------------------------------------\n\n");
						printf("\nQual opçao você deseja acessar? ");
						scanf_s("%d", &opcao);

						switch (opcao) {
							case 1:
								system("cls");
								printf("\n\n Quantos cadastros voce deseja realizar ? ");;
								scanf_s("%d", &quant);

								for (i = i; i <= quant; i++) {
									system("cls");
									printf("\n\n\t\t\t          INICIANDO CADASTRO %d\n", i);
									printf("\t\t\t         ------------------------\n\n");
									printf("\n Nome do comprador: ");
									fflush(stdin);
									scanf_s("%[^\n]s", CA[i].nome0);
									printf("\n Telefone do Comprador: ");
									fflush(stdin);
									scanf_s("%[^\n]s", CA[i].nome1);
									printf("\n Marca do Produto: ");
									fflush(stdin);
									scanf_s("%[^\n]s", CA[i].nome2);
									printf("\n Código do produto: ");
									fflush(stdin);
									scanf_s("%[^\n]s", CA[i].nome3);
									printf("\n Preço do produto");
									fflush(stdin);
									scanf_s("%[^\n]s", CA[i].nome4);
									printf("\n\n\t\t");
									system("pause");
									system("cls");

						
								}
								break;

							case 2:
								system("cls");


								for (i = i; i <= quant; i++) {
									system("cls");
									printf("\n\n\t\t\t       EXIBINDO CADASTRO   %d\n", i);
									printf("\t\t\t     ----------------------\n\n");
									printf("\n Nome do comprador: %s\n", CA[i].nome0);
									printf("\n Telefone do comprador: %s\n", CA[i].nome1);
									printf("\n Marca do produto: %s\n", CA[i].nome2);
									printf("\n Código do produto: %s\n", CA[i].nome3);
									printf("\n preço do produto: %s\n", CA[i].nome4);
									system("pause");

								}
								break;


							case 3:
								system("cls");
								for (i = i; i <= quant; i++) {
									printf("\n\n\t\t\t    ALTERAR CADASTRO\n");
									printf("\t\t\t    ------------------\n\n");
									printf(" 1- Nome do Comprador");
									printf("\n 2- Telefone do Comprador");
									printf("\n 3- Marca do Produto");
									printf("\n 4- Código do Produto");
									printf("\n 5- Preço do produto\n\n");
									printf("Qual opçao voce deseja acessar? \n");
									scanf_s("%d", &opcao1);

										switch(opcao1){
											case 1:
												for (i = i; i <= quant; i++) {
													system("cls");
													printf("\n\n CADASTRO %d\n", i);
													printf("\n Alterar Nome do Comprador: ");
													fflush(stdin);
													scanf_s("%[^\n]s", &CA[i].nome0);
													printf("\n Novo Nome do Comprador: %s\n\n\t\t");
													system("pause");
												


												}
												break;

											case 2:
												for (i = i; i <= quant; i++) {
													system("cls");
													printf("\n\n CADASTRO %d\n", i);
													printf("\n Alterar Telefone do Comprador: ");
													fflush(stdin);
													scanf_s("%[^\n]s", &CA[i].nome1);
													printf("\n Novo Telefone do Comprador: %s\n\n\t\t");
													system("pause");

												}
												break;

											case 3:
												for (i = i; i <= quant; i++) {
													system("cls");
													printf("\n\n CADASTRO %d\n", i);
													printf("\n Alterar Marca do Comprador: ");
													fflush(stdin);
													scanf_s("%[^\n]s", &CA[i].nome2);
													printf("\n Nova Marca do Comprador: %s\n\n\t\t");
													system("pause");

												}
												break;

											case 4:
												for (i = i; i <= quant; i++) {
													system("cls");
													printf("\n\n CADASTRO %d\n", i);
													printf("\n Alterar Código do Comprador: ");
													fflush(stdin);
													scanf_s("%[^\n]s", &CA[i].nome3);
													printf("\n Novo Código do Comprador: %s\n\n\t\t");
													system("pause");
												}
												break;

											case 5:
												for (i = i; i <= quant; i++) {
													system("cls");
													printf("\n\n CADASTRO %d\n", i);
													printf("\n Alterar Preço do Comprador: ");
													fflush(stdin);
													scanf_s("%[^\n]s", &CA[i].nome4);
													printf("\n Novo Preço do Comprador: %s\n\n\t\t");
													system("pause");
												}
												break;



										}





								}
								break;

								case 4:
									system("cls");
									for (i = i; i <= quant; i++) {
											printf("\n\n\t\t\t        EXCLUIR CADASTRO\n");
											printf("\t\t\t      --------------------\n\n");
											printf(" 1- Nome do Comprador");
											printf("\n 2- Telefone do Comprador");
											printf("\n 3- Marca do Produto");
											printf("\n 4- Código do Produto");
											printf("\n 5- Preço do Produto");
											printf("\n 6- Excluir Todos os Dados\n\n");
											printf("Qual opçao voce deseja acessar? \n");
											scanf_s("%d", &opcao4);
								
											switch (opcao4) {
												case 1:
													for (i = i; i <= quant; i++) {
														system("cls");
														memset(&CA[i].nome0, 0, sizeof(CA[i].nome0));
														printf("nome do comprador excluido!\n\n");
														system("pause");
													}
													break;

												case 2:
													for (i = i; i <= quant; i++) {
														system("cls");
														memset(&CA[i].nome1, 0, sizeof(CA[i].nome1));
														printf("telefone do comprador excluido!\n\n");
														system("pause");
													}
													break;

												case 3:
													for (i = i; i <= quant; i++) {
														system("cls");
														memset(&CA[i].nome2, 0, sizeof(CA[i].nome2));
														printf("marca do comprador excluido!\n\n");
														system("pause");
													}
													break;

												case 4:
													for (i = i; i <= quant; i++) {
														system("cls");
														memset(&CA[i].nome3, 0, sizeof(CA[i].nome3));
														printf("código do comprador excluido!\n\n");
														system("pause");
													}
													break;

												case 5:
													for (i = i; i <= quant; i++) {
														system("cls");
														memset(&CA[i].nome4, 0, sizeof(CA[i].nome4));
														printf("preço do comprador excluido!\n\n");
														system("pause");
													}
													break;

												case 6:
													for (i = i; i <= quant; i++) {
														system("cls");
														memset(&CA[i].nome0, 0, sizeof(CA[i].nome0));
														memset(&CA[i].nome1, 0, sizeof(CA[i].nome1));
														memset(&CA[i].nome2, 0, sizeof(CA[i].nome2));
														memset(&CA[i].nome3, 0, sizeof(CA[i].nome3));
														memset(&CA[i].nome4, 0, sizeof(CA[i].nome4));
														printf("Todos os Dados Foram Excluidos!\n\n");
														system("pause");
													}
													break;




											}


								
									}
									break;

							case 5:
								system("cls");
								// so colocar alguns printf com alguma informação, no video a 
								//mulher coloca o nome dos participantes do trabalho
								// quando for colocar o printf, apagar esse texto "//" e colocar aq nesse espaço entre system e break
								break;

							case 6:
								system("cls");
								printf("\n Voce Realmente Deseja Sair do Sistema? \n\n");
								printf(" 1- sim\n 2- não");
								printf("\n\n");
								scanf_s("%d", &opcao2);

								switch (opcao2) {
									case 1:
										system("cls");
										printf("\n\n Saindo do Sistema \n\n\n\t\t");
										system("pause");
										return 0;
										break;


							}


						}

				
					}
					break;
				}

			}
	system("pause");
	return 0;

}