#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "calculos.h"

int Menu(void){

	setbuf(stdout, NULL);

	float kilometrosIngresados = 0;
	int opcion;
	int opcionVuelo;
	float ingreseAeroLineas = 0;
	float ingreseLatam = 0;

	float resultadoDebito1;
	float resultadoDebito2;
	float resultadoCredito1;
	float resultadoCredito2;
	float resultadoBitcoin1;
	float resultadoBitcoin2;
	float resultadoUnitario1;
	float resultadoUnitario2;
	float resultadoDiferencia;

	float banderaCostos = 0;

	float banderaAeroLineas = 0;
	float banderaLatam = 0;

	float kilometrosPredeterminados = 7090;
	float aeroLineasPredeterminada = 162965;
	float latamPredeterminada = 159339;

		do{

	    	printf("+=======================================================================+");
	    	printf("\n|                                  MENU                                 |");
	    	printf("\n+=======================================================================+");
	    	printf("\n|   1 - Ingresar Kilómetros: (km = %.2f)                                ", kilometrosIngresados);
	        printf("\n|   2 - Ingresar Precio de Vuelos: (Aerolíneas = %.2f, Latam = %.2f)    ", ingreseAeroLineas, ingreseLatam);
	        printf("\n|   3 - Calcular todos los costos.                                      ");
	        printf("\n|   4 - Informar Resultados.                                            ");
	        printf("\n|   5 - Carga forzada de datos.                                         ");
	        printf("\n|   6 - Salir.                                                          ");
	    	printf("\n+=======================================================================+");
	    	printf("\n|   Respuesta: ");
	        scanf("%d", &opcion);
	        printf("+=======================================================================+\n\n");


	        switch (opcion)
	        {
	            case 1:

	            	banderaCostos = 0;

	            	kilometrosIngresados = SubMenu();

	            		break;

	            case 2:

	            	banderaCostos = 0;

	            	do{

	            				printf("\n+=======================================================================+");
	            				printf("\n|                               SUB MENU                                |");
	            				printf("\n+=======================================================================+");
	            				printf("\n|            >>>>>   Seleccione la Agencia de Viajes   <<<<<            |");
	            				printf("\n+=======================================================================+");
	            				printf("\n|   1 - Volar con AeroLineas.                                           |");
	            				printf("\n|   2 - Volar con Latam.                                                |");
	            				printf("\n+=======================================================================+");
	            				printf("\n|   Respuesta: ");
	            				scanf("%d", &opcionVuelo);
	            				printf("+=======================================================================+\n\n");

	            				switch(opcionVuelo){

	            					case 1:

	            						printf("\n+=======================================================================+");
	            						printf("\n|                               SUB MENU                                |");
	            						printf("\n+=======================================================================+");
	            					  	printf("\n|   - Precio vuelo AeroLienas: ");
	            					  	scanf("%f", &ingreseAeroLineas);
	            						printf("+=======================================================================+\n\n\n");

	            						break;

	            					 case 2:

	            						 printf("\n+=======================================================================+");
	            						 printf("\n|                               SUB MENU                                |");
	            						 printf("\n+=======================================================================+");
	            						 printf("\n|   - Precio vuelo Latam: ");
	            						 scanf("%f", &ingreseLatam);
	            						 printf("+=======================================================================+\n\n\n");

	            						break;

	            				}

	            		}while(opcionVuelo != 1 && opcionVuelo != 2);

	                    break;

	            case 3:

	            	banderaCostos = 1;

	            	if(ingreseAeroLineas < 1){

	            		printf("\n+=======================================================================+");
	            		printf("\n|   No a ingresado dinero en AeroLineas.");

	            	}else{

	            		banderaAeroLineas = 1;

	            		printf("\n+=======================================================================+");
	            		printf("\n|   Calculos de AeroLineas Finalizdo.");

	            		resultadoDebito1 = CalcularDebito(ingreseAeroLineas);
	            	    resultadoCredito1 = CalcularCredito(ingreseAeroLineas);
	            	    resultadoBitcoin1 = CalcularBitcoin(ingreseAeroLineas);
	            		resultadoUnitario1 = CalcularUnitario(kilometrosIngresados, ingreseAeroLineas);

	            	}

	            	if(ingreseLatam < 1){

	            		printf("\n+=======================================================================+");
	            		printf("\n|   No a ingresado dinero en Latam.");
	            		printf("\n+=======================================================================+\n\n\n");

	                }else{

	                	banderaLatam = 1;

	                	printf("\n+=======================================================================+");
	                	printf("\n|   Calculos de Latam Finalizado.");
	                	printf("\n+=======================================================================+\n\n\n");

	                	resultadoDebito2 = CalcularDebito(ingreseLatam);
	                	resultadoCredito2 = CalcularCredito(ingreseLatam);
	                    resultadoBitcoin2 = CalcularBitcoin(ingreseLatam);
	                	resultadoUnitario2 = CalcularUnitario(kilometrosIngresados, ingreseLatam);
	                	resultadoDiferencia = CalcularDiferencia(ingreseAeroLineas, ingreseLatam);

	                }


	            		break;

	            case 4:

	            	if(banderaCostos == 1){

						if(banderaAeroLineas == 1){

						printf("\n+=======================================================================+");
						printf("\n|                             AeroLineas                                |");
						printf("\n+=======================================================================+");
						printf("\n|   a) Precio con tarjeta de débito: $ %.2f",resultadoDebito1);
						printf("\n|   b) Precio con tarjeta de crédito: $ %.2f",resultadoCredito1);
						printf("\n|   c) Precio pagando con bitcoin: %f BTC",resultadoBitcoin1);
						printf("\n|   d) Precio unitario: $ %.2f",resultadoUnitario1);

						}else{

							printf("\n+=======================================================================+");
							printf("\n|   No Hay dinero para AeroLineas.");

						}

						if(banderaLatam == 1){

						printf("\n+=======================================================================+");
						printf("\n|                                Latam                                  |");
						printf("\n+=======================================================================+");
						printf("\n|   a) Precio con tarjeta de débito: $ %.2f",resultadoDebito2);
						printf("\n|   b) Precio con tarjeta de crédito: $ %.2f",resultadoCredito2);
						printf("\n|   c) Precio pagando con bitcoin: %f BTC", resultadoBitcoin2);
						printf("\n|   d) Precio unitario: $ %.2f",resultadoUnitario2);
						printf("\n+=======================================================================+");
						printf("\n|   La diferencia de precio es: $ %.2f",resultadoDiferencia);
						printf("\n+=======================================================================+\n\n\n");

						}else{

						printf("\n+=======================================================================+");
						printf("\n|   No Hay dinero para Latam.");
						printf("\n+=======================================================================+\n\n\n");

						}

	            	}else{

	            		printf("\n+=======================================================================+");
	            		printf("\n|   No se han calculado los costos.");
	            		printf("\n+=======================================================================+\n\n\n");

	            	}
	            		break;

	            case 5:

	            	kilometrosIngresados = kilometrosPredeterminados;
	            	ingreseAeroLineas = aeroLineasPredeterminada;
	            	ingreseLatam = latamPredeterminada;

	            	printf("\n+=======================================================================+");
	            	printf("\n|   Kilómetro Ingresados: %.2f km", kilometrosIngresados);
	            	printf("\n+=======================================================================+");
	            	printf("\n|   Precio AeroLineas: $ %.2f", ingreseAeroLineas);
	            	printf("\n+=======================================================================+");
	            	printf("\n|   a) Precio con tarjeta de débito: $ %.2f",CalcularDebito(ingreseAeroLineas));
	            	printf("\n|   b) Precio con tarjeta de crédito: $ %.2f",CalcularCredito(ingreseAeroLineas));
	            	printf("\n|   c) Precio pagando con bitcoin: $ %f",CalcularBitcoin(ingreseAeroLineas));
	            	printf("\n|   d) Precio unitario: $ %.2f",CalcularUnitario(kilometrosIngresados, ingreseAeroLineas));
	            	printf("\n+=======================================================================+");
	            	printf("\n|   Precio Latam: $ %.2f", ingreseLatam);
	            	printf("\n+=======================================================================+");
	            	printf("\n|   a) Precio con tarjeta de débito: $ %.2f",CalcularDebito(ingreseLatam));
	            	printf("\n|   b) Precio con tarjeta de crédito: $ %.2f",CalcularCredito(ingreseLatam));
	            	printf("\n|   c) Precio pagando con bitcoin: $ %f",CalcularBitcoin(ingreseLatam));
	            	printf("\n|   d) Precio unitario: $ %.2f",CalcularUnitario(kilometrosIngresados, ingreseLatam));
	            	printf("\n+=======================================================================+");
	            	printf("\n|   La diferencia de precio es: $ %.2f",CalcularDiferencia(ingreseAeroLineas, ingreseLatam));
	                printf("\n+=======================================================================+\n\n\n");

	                break;

	            case 6:

	            	printf("\n+=======================================================================+");
	                printf("\n|                  >>>>>   FIN DEL PROGRAMA   <<<<<  ");
	                printf("\n+=======================================================================+\n\n\n");

	            	break;

	            default:

	            	printf("\n+=======================================================================+");
	            	printf("\n|   Ingrese una opcion valida.  ");
	            	printf("\n+=======================================================================+\n\n\n");

	            	break;

	        }

	    }while (opcion != 6);

	return 0;

}

float SubMenu(void){

	float ingreseKilometros;

	printf("\n+=======================================================================+");
	printf("\n|                               SUB MENU                                |");
	printf("\n+=======================================================================+");
   	printf("\n|   Ingrese los KMs: ");
	scanf("%f", &ingreseKilometros);
	printf("+=======================================================================+\n\n\n");

	return ingreseKilometros;
}
