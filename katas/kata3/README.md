En este problema tenemos que checar los movimientos de un robot y ver que el robot llegue a la posicion inicial, para esto vamos a considerar lo siguiente
*La posicion inicial es 0,0
*Los movimientos permitidos son R (Right), L(Left), U (Up) and D (down)
*Se recibe por medio de un string en donde solo se permiten esos movimientos
*Al recibir otro char se mandara como error en el problema

Para resolver el problema se va hacer lo siguiente
Se recibe primero el apuntador al inicio del string en donde se contienen los movimientos
Se recorrera el arreglo para saber que movimientos se haran
Se consideraran 2 variables en donde se guardaran hasta que punto se ha movido el robot en el eje x y y
Cuando se recorre el arreglo se agregara o restara a las variables dependiendo del movimiento que se hace, para mi punto de vista seria U = +1 y D = -1 en el eje Y y para el otro eje sera R = +1 y L = -1 en el eje X
Al terminar de recorrer el arreglo se tendria que ver en las variables 0 para que se regrese un resultado positivo en caso contrario se regresara el resultado negativo