#ifndef CALCULADORA_3_H_INCLUDED
#define CALCULADORA_3_H_INCLUDED


int menu (int a, int b, int flag, int flag2);
/** \brief La funcion menu sirve para mostrar un menu desplegable con diferentes opciones
 *
 * \param el primer parametro es un numero entero para operar
 * \param el segundo parametro es un segundo numero entero para operar con el primero
 * \param el tercer parametro es una bandera utilizada para validar si paso o no por el primer caso
 * \param el cuarto parametro es otra bandera utilizada para validar si paso o no por el segundo caso
 * \return devuelve la opcion elegida por el usuario
 *
 */
int suma (int a, int b);
/** \brief La funcion suma realiza la suma entre dos operandos
 *
 * \param el primer parametro es un numero entero
 * \param el segundo parametro es otro numero entero
 * \return devuelve la suma entre el primer y segundo operando
 *
 */

int resta (int a, int b);
/** \brief La funcion resta realiza la resta entre dos operandos
 *
 * \param el primer parametro es un numero entero
 * \param el segundo parametro es otro numero entero
 * \return devuelve la resta entre los dos operandos
 *
 */

int multiplicacion (int a, int b);
/** \brief la funcion multiplicacion multiplica dos numeros enteros
 *
 * \param el primer parametro es un numero entero
 * \param el segundo parametro es otro numero entero
 * \return devuelve la multiplicacion entre ambos operandos
 *
 */

float division (int a, int b);
/** \brief la funcion division realiza una division entre dos numeros enteros y es de tipo flotante ya que la division de dos enteros da por resultado un numero decimal
 *
 * \param el primer parametro es un numero entero
 * \param el segundo parametro es otro numero entero
 * \return devuelve la division entre esos dos numeros enteros
 *
 */

int factorial (int a);
/** \brief la funcion factorial realiza el factorial del numero entero
 *
 * \param recibe un numero entero para poder operar
 * \return devuelve el factorial del numero entero
 *
 */

void reset(int*p);
/** \brief La funcion reset reestablece a 0 los valores de las variables punteros
 *
 * \param recibe un unico parametro con la direccion de memoria de una variable
 * \param
 * \return no devuelve nada
 *
 */



#endif // CALCULADORA_3_H_INCLUDED
