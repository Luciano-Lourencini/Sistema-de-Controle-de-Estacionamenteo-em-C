#include<locale.h>
#include<stdio.h>
int main()
{
	int opcao, tipo, vaga=0;
	int vaganorm=0, vagadef=0, vagaidoso=0;
	int vdef[21], vidoso[21], vnorm[161];
	char carro[20], placa[10];
	int i, j, k;
	int ocupado;
	int horaentra, horasai, minentra, minsai;
	int momentra, momsai;
	int totaltempo;
	float preco;
	setlocale(LC_ALL,"portuguese");
	
	printf("###################\n");
	printf("## LUCIANO's CAR ##\n");
	printf("###################\n");
	printf("----------------------------\n\n");
	
	do
	{
		printf(" 1- ENTRADA\n");
	    printf(" 2- SAÍDA\n");
	    printf(" 3- VISUALIZAÇÃO DAS VAGAS\n");
	    printf(" 0- SAIR\n");
	    printf("\nOPÇÃO: ");
	    scanf("%d",&opcao);
	    
	    switch(opcao)
	    {
				case 0:
	    		{
	    			system("cls");
					printf("Obrigado por estacionar em LUCIANO's CAR!\n");
					break;
				}
			case 1:
	    		{
	    			system("cls");
	    			printf("------ENTRADA------\n");
	    			printf(" 1- Deficiente\n 2- Idoso\n 3- Nenhuma das opções\n\nOpção: ");
	    			scanf("%d",&tipo);
	    			
	    			if(tipo==1)
	    			{
						system("cls");
						printf("\n\n------DEFICIENTE------\n");
	    				printf("ISENTO DE PAGAMENTO\n");
	    				fflush(stdin);
						printf("Digite sua placa: ");
	    				gets(placa);
	    				printf("\nDigite o modelo do carro: ");
	    				gets(carro);
	    				printf("\nEscolha uma vaga de 1 até 20: ");
	    				scanf("%d",&i);
	    				
	    				if(i<=20)
	    				{
	    					if(vdef[i]==0)
	    					{
	    						ocupado++;
					           	vagadef++;
					           	vdef[i]=1;
					        	printf("Vaga disponível\n\n");
						        system("pause");
						        system("cls");
							}
							else
							{
								printf("Vaga ocupada\n\n");
								system("pause");
					        	system("cls");
							}
						}
						
						else
						{
							printf("Vaga inexistente\n\n");
							system("pause");
					        system("cls");
						}
					}
					
					else if(tipo==2)
					{
						system("cls");
						printf("\n\n------IDOSO------\n");
	    				printf("R$2,50 por hora\n");
	    				fflush(stdin);
						printf("Digite sua placa: ");
	    				gets(placa);
	    				printf("\nDigite o modelo do carro: ");
	    				gets(carro);
	    				printf("\nEscolha uma vaga de 1 até 20: ");
	    				scanf("%d",&j);
	    				
	    				if(j<=20)
	    				{
	    					if(vidoso[j]==0)
	    					{
	    						ocupado++;
					            vidoso[j]=1;
				        		vagaidoso++;
						        printf("Vaga disponível\n\n");
						        system("pause");
						        system("cls");
							}
							else 
							{
								printf("Vaga ocupada\n\n");
								system("pause");
					        	system("cls");
							}
						}
						else
						{
							printf("Vaga inexistente\n\n");
							system("pause");
					        system("cls");
						}						
					}
					
					else if(tipo==3)
					{
						system("cls");
						printf("\n\n------NORMAL------\n");
	    				printf("R$5,00 a hora\n");
	    				fflush(stdin);
						printf("Digite sua placa: ");
	    				gets(placa);
	    				printf("\nDigite o modelo do carro: ");
	    				gets(carro);
	    				printf("\nEscolha uma vaga de 1 até 20: ");
	    				scanf("%d",&k);
	    				
	    				if(k<=160)
	    				{
	    					if(vnorm[k]==0)
	    					{
	    						ocupado++;
				         		vnorm[k]=1;
				        		vaganorm++;
				        		printf("Vaga disponível\n\n");
				        		system("pause");
					        	system("cls");
							}
							
							else
	    				    { 
	    					    printf("Vaga ocupada\n\n");
	    					    system("pause");
					        	system("cls");
						    }
						}
						else
						{
							printf("Vaga inexistente\n\n");
							system("pause");
					        system("cls");
						}
					}
					else
					{
						printf("OPÇÃO INDISPONÍVEL\n");
						system("pause");
						system("cls");
					}
					break;
				}
		    
		    case 2:
		    	{
		    		system("cls");
		    		printf("-----SAÍDA-----\n");
		    		printf(" 1- Deficiente\n 2- Idoso\n 3- Nenhuma das opções\n\nOpção: ");
		    		scanf("%d",&tipo);
		    		
		    		if(tipo==1)
		    		{
		    			system("cls");
						printf("\n\n-----DEFICIENTE-----\n");
						printf("Digite a vaga que está seu carro: ");
						scanf("%d",&i);
						
						if(i>0&&i<21)
						{
							if(vdef[i]!=0)
							{
								printf("\nDigite o horário da entrada\n Hora(ex:13): ");
								scanf("%d",&horaentra);
								printf("\n Saída(ex:55): ");
								scanf("%d",&minentra);
								while(horaentra>=24||minentra>=60)
								{
									printf("Horário inexistente\n\n");
									printf("Hora(ex:13): ");
							    	scanf("%d",&horaentra);
							    	printf("\n Minutos(ex:55): ");
							    	scanf("%d",&minentra);
								}
								momentra=(horaentra*60)+minentra;
								printf("\nDigite o horário da saída\n Hora(ex:13): ");
								scanf("%d",&horasai);
								printf("\n Minutos(ex:55): ");
								scanf("%d",&minsai);
								while(horasai>=24||minsai>=60)
								{
									printf("Horário inexistente\n\n");
									printf("Hora(ex:13): ");
							    	scanf("%d",&horasai);
							    	printf("\n Minutos(ex:55): ");
							    	scanf("%d",&minsai);
								}
								momsai=(horasai*60)+minsai;
								
								printf("\nSAÍDA FRANCA\nOBRIGADO POR ESTACIONAR EM LUCIANO's CAR\nVOLTE SEMPRE\n\n");
								system("pause");
								system("cls");
							}
							else
							{
								printf("Vaga não ocupada\n");
								system("pause");
								system("cls");
							}
						}
						else
						{
							printf("Vaga indisponível\n");
							system("pause");
							system("cls");
						}
					}
					else if(tipo==2)
					{
						system("cls");
						printf("-----IDOSO-----\n");
						printf("Digite a vaga ocupada pelo seu carro: ");
						scanf("%d",&j);
						
						if(j>0&&j<21)
						{
							if(vidoso[j]!=0)
							{
								printf("\nDigite o horário da entrada\n Hora(ex:13): ");
								scanf("%d",&horaentra);
								printf("\n Saída(ex:55): ");
								scanf("%d",&minentra);
								while(horaentra>=24||minentra>=60)
								{
									printf("Horário inexistente\n\n");
									printf("Hora(ex:13): ");
							    	scanf("%d",&horaentra);
							    	printf("\n Minutos(ex:55): ");
							    	scanf("%d",&minentra);
								}
								momentra=(horaentra*60)+minentra;
								printf("\nDigite o horário da saída\n Hora(ex:13): ");
								scanf("%d",&horasai);
								printf("\n Minutos(ex:55): ");
								scanf("%d",&minsai);
								while(horasai>=24||minsai>=60)
								{
									printf("Horário inexistente\n\n");
									printf("Hora(ex:13): ");
							    	scanf("%d",&horasai);
							    	printf("\n Minutos(ex:55): ");
							    	scanf("%d",&minsai);
								}
								momsai=(horasai*60)+minsai;
								totaltempo=momsai-momentra;
								preco=totaltempo*0.04167;
								printf("O valor a ser pago é de: R$%.2f",preco);
								printf("\n\nOBRIGADO POR ESTACIONAR EM LUCIANO's CAR\nVOLTE SEMPRE\n\n");
								system("pause");
								system("cls");
							}
							else
							{
								printf("Vaga não ocupada\n");
								system("pause");
								system("cls");
							}	
						}
						else
						{
							printf("Vaga indisponível\n");
							system("pause");
							system("cls");
						}
					}
					else if(tipo==3)
					{
						system("cls");
						printf("-----NORMAL-----\n");
						printf("Digite a vaga ocupada pelo seu carro: ");
						scanf("%d",&k);
						if(k>0&&k<161)
						{
							if(vnorm[k]!=0)
							{
								printf("\nDigite o horário da entrada\n Hora(ex:13): ");
								scanf("%d",&horaentra);
								printf("\n Saída(ex:55): ");
								scanf("%d",&minentra);
								while(horaentra>=24||minentra>=60)
								{
									printf("Horário inexistente\n\n");
									printf("Hora(ex:13): ");
							    	scanf("%d",&horaentra);
							    	printf("\n Minutos(ex:55): ");
							    	scanf("%d",&minentra);
								}
								momentra=(horaentra*60)+minentra;
								printf("\nDigite o horário da saída\n Hora(ex:13): ");
								scanf("%d",&horasai);
								printf("\n Minutos(ex:55): ");
								scanf("%d",&minsai);
								while(horasai>=24||minsai>=60)
								{
									printf("Horário inexistente\n\n");
									printf("Hora(ex:13): ");
							    	scanf("%d",&horasai);
							    	printf("\n Minutos(ex:55): ");
							    	scanf("%d",&minsai);
								}
								momsai=(horasai*60)+minsai;
								totaltempo=momsai-momentra;
								preco=totaltempo*0.0833;
								printf("O valor a ser pago é de: R$%.2f",preco);
								printf("\n\nOBRIGADO POR ESTACIONAR EM LUCIANO's CAR\nVOLTE SEMPRE\n\n");
								system("pause");
								system("cls");
							}
							else
							{
								printf("Vaga não ocupada\n");
								system("pause");
								system("cls");
							}
						}
						else
						{
							printf("Vaga indisponível\n");
							system("pause");
							system("cls");
						}
					}
					else
					{
						printf("OPÇÃO INVÁLIDA\n");
						system("pause");
						system("cls");
					}
					break;
				}
			case 3:
					{
						system("cls");
						printf("-----VAGAS OCUPADAS-----\n\n");
						printf("TOTAL DE CARROS ESTACIONADOS: %d",ocupado);
						printf("\n\n|MODELO|-|PLACA|-|VAGA|\n\n");
						printf("-----DEFICIENTES-----\n");
						for(i=1;i<=vagadef;i++)
						{
							printf("|%s|-|%s|-|%d|\n",carro,placa,vdef[i]);
						}
						printf("\n-----IDOSOS-----");
						for(j=1;j<=vagaidoso;j++)
						{
							printf("|%s|-|%s|-|%d|\n",carro,placa,vidoso[i]);
						}
						printf("\n-----NORMAL-----");
						for(k=1;k<=vaganorm;k++)
						{
							printf("|%s|-|%s|-|%d|\n",carro,placa,vnorm[i]);
						}
						printf("\n");
						system("pause");
						system("cls");
						break;
					}
			default:
				{
					system("cls");
					printf("OPÇÃO INEXISTENTE\n");
					system("pause");
					system("cls");
				}	
		}
	    
	}
	while(opcao!=0);
	return 0;
}
