
/** \brief ingresa los numeros pedidos a la funcion de sumar
 *
 * \param se crea una variable
 * \param es la operacion de los numeros pedidos para agregar un valor a la variable resultado
 * \return regresa el resultado de la suma de los operadores
 *
 */

float operadorSuma(float operadorUno,float operadorDos)
{
    float resultado;
    resultado = operadorUno + operadorDos;
    return resultado;

}
/** \brief ingresa los numeros pedidos a la funcion de resta
 *
 * \param se crea una variable
 * \param es la operacion de los numeros pedidos para agregar un valor a la variable resultado
 * \return regresa el resultado de la resta de los operadores
 *
 */

float operadorResta(float operadorUno,float operadorDos)
{
    float resultado;
    resultado = operadorUno - operadorDos;
    return resultado;
}
/** \brief ingresa los numeros pedidos a la funcion de dividir
 *
 * \param se crea una variable
 * \param es la operacion de los numeros pedidos para agregar un valor a la variable resultado
 * \return regresa el resultado de la division de los operadores
 *
 */

float operadorDivision(float operadorUno,float operadorDos)
{
    float resultado;
    if(operadorDos==0)
    {
        resultado = 0;
    }
    else
    {
        resultado = operadorUno / operadorDos;
    }

    return resultado;

}
/** \brief ingresa los numeros pedidos a la funcion de multiplicar
 *
 * \param se crea una variable
 * \param es la operacion de los numeros pedidos para agregar un valor a la variable resultado
 * \return regresa el resultado de la multiplicacion de los operadores
 *
 */

float operadorMultiplicacion(float operadorUno,float operadorDos)
{
    float resultado;
    resultado = operadorUno * operadorDos;
    return resultado;

}
/** \brief ingresa los numeros pedidos a la funcion de factorial
 *
 * \param se crea una variable
 * \param es la operacion de los numeros pedidos para agregar un valor a la variable resultado
 * \return regresa el resultado del factorial de los operadores
 *
 */

float operadorFactorialUno(float operadorUno)

{
    float resultado;

    if(operadorUno==0)
    {
        resultado=1;
    }
    else
    {
        resultado = operadorUno * operadorFactorialUno(operadorUno-1);
    }
    return resultado;
}
/** \brief ingresa los numeros pedidos a la funcion de factorial
 *
 * \param se crea una variable
 * \param es la operacion de los numeros pedidos para agregar un valor a la variable resultado
 * \return regresa el resultado del factorial de los operadores
 *
 */

float operadorFactorialDos(float operadorDos)

{
    float resultado;

    if(operadorDos==0)
    {
        resultado=1;
    }
    else
    {
        resultado = operadorDos * operadorFactorialDos(operadorDos-1);
    }
    return resultado;
}


