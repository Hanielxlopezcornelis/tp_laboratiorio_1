#ifndef CALCULOS_H_
#define CALCULOS_H_

/// \fn CalcularDebito()
/// \brief la funcion calcula el precio para pagar en debito con un descuento.
/// \param flaot numero
/// \return retorna un numero flotante
float CalcularDebito(float numero);

/// \fn CalcularCredito()
/// \brief la funcion calcula el precio para pagar en credito con un interes.
/// \param flaot numero
/// \return retorna un numero flotante
float CalcularCredito(float numero);

/// \fn CalcularBitcoin()
/// \brief la funcion calcula el precio para pagar con Bitcoin.
/// \param flaot numero
/// \return retorna un numero flotante
float CalcularBitcoin(float numero);

/// \fn CalcularUnitario()
/// \brief la funcion calcula el precio por kilometro.
/// \param float kilometros, float numero
/// \return retorna un numero flotante
float CalcularUnitario(float kilometros, float numero);

/// \fn CalcularDiferencia()
/// \brief la funcion calcula la diferencia de precio que hay entre ambas Aerolineas.
/// \param float aeroLineas, float latam
/// \return retorna un numero flotante
float CalcularDiferencia(float aeroLineas, float latam);

#endif /* CALCULOS_H_ */
