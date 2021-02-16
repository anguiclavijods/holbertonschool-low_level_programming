# incluir  < unistd.h >

/ * *
 * _putchar - escribe el carácter c en stdout
 * @c: el carácter a imprimir
 *
 * Devolución: en caso de éxito 1.
 * En caso de error, se devuelve -1 y errno se establece de forma adecuada.
 * /
int  _putchar ( carácter c)
{
	return ( escribir ( 1 , & c, 1 ));
}
