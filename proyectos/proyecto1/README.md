Para el proyecto de primer paracial elegi el problema numero 1197 este es el link de descripcion
http://acm.timus.ru/problem.aspx?space=1&num=1197
********************************************************************

The statement of this problem is very simple: you are to determine how many squares of the chessboard can be attacked by a knight standing alone on the board. Recall that a knight moves two squares forward (horizontally or vertically in any direction) and then one square sideways (perpedicularly to the first direction). 

Input
The first line contains the number N of test cases, 1 ≤ N ≤ 100. Each of the following N lines contains a test: two characters. The first character is a lowercase English letter from 'a' to 'h' and the second character is an integer from 1 to 8; they specify the rank and file of the square at which the knight is standing.

Output
Output N lines. Each line should contain the number of the squares of the chessboard that are under attack by the knight.

***********************************************************************

Tomando en cuenta lo que se nos meciona del problema tenemos que ver que casillas puede atacar un caballero dandonos a conocer que el caballero se puede mover 2 casillas de manera vertical o horizontal y despues una casilla en diagonal al primer movimiento. Para la entrada del problema tenemos los siguientes parametros

*Primero se dara el numero de casillas que se quiere revisar teniendo un minimo de 1 y maximo de 100
*Las posiciones de las casillas estaran conformadas por 2 caracteres, el primero tiene que ser una letra de la 'a' a la 'h' que describen un lado del tablero y el otro caracter sera un numero entero del 1 al 8 con esto se ubicara en que posicion se encuentra la pieza
*Checar que los caracteres sean validos para el problema

Para la resolucion del problema se hara lo siguiente
Primero se checara cuantas posiciones se tendran que calificar con el primer numero que se metera.
Despues conforme vayan incluyendo las posiciones se tendra que checar cada una.
Para checar sera necesario un arreglo donde se tengan los caracteres que sean validos [a,b,c,d,e,f,g,h]
Despues se vera que el numero de la posicion este entre el rango de numeros que son validos
Tomando ya encuenta que es una posicion valida se tendra que hacer lo siguiente para ver que casillas son las posibles en las que puede atacar el caballero

*Primero de manera horizontal se vera en que posicion se encuentra el caracter.
*Tomando en cuenta esto se vera si se puede mover 2 posiciones en las 2 direcciones del arreglo.
*Sea el caso que se pueda mover las 2 posiciones se checara de manera vertical que seran los numeros enteros
*En este momento se le intentara sumar o restar 1 en caso de que no pase los limites de 1 a 8 se le sumara 1 al contador de posiciones por cada caso que se cumpla.

*Despues de checar de manera horizontal se checara de manera vertical de la misma manera.
*Se tomara el numero entero y se le tratara de sumar o restar 2 para si es posible moverlo en ese sentido
*En caso de ser posible este movimiento se tomara el caracter
*Se buscara la posicion del caracter en el arreglo de caracteres
*Al obtener la posicion del caracter se vera si es posible mover una posicion arriba o abajo en el arreglo
*Al ser posible una de esas posiciones se sumara 1 al contador de posiciones que son posibles de atacar

*Al terminar de checar todo lo de una posicion se regresara el numero de casillas que puede atacar el caballero
*Y se realizara el mismo proceso con las otras posiciones