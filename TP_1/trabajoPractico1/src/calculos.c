#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "calculos.h"


float CalcularDebito(float numero){

	float descuento;
	float precioDescuento;

	descuento = (numero * 10) / 100;
	precioDescuento = numero - descuento;

	return precioDescuento;

}

float CalcularCredito(float numero){

	float aumento;
	float precioInteres;

	aumento = (numero * 25) / 100;
	precioInteres = numero + aumento;

	return precioInteres;

}

float CalcularBitcoin(float numero){

	float precioBitcoin;
	float bitcoin = 4606954.55;

	precioBitcoin = numero / bitcoin;

	return precioBitcoin;

}

float CalcularUnitario(float kilometros, float numero){

	float precioUnitario;

	precioUnitario = numero / kilometros;

	return precioUnitario;

}

float CalcularDiferencia(float aeroLineas, float latam){

	float diferencia;

	if(aeroLineas > latam){

		diferencia = aeroLineas - latam;

	}else{

		diferencia = latam - aeroLineas;

	}

	return diferencia;

}
