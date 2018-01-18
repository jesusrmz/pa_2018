Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Para este problema se tienen que tener la s siguientes consideraciones:
Para el ingreso del arreglo se tomo en cuenta que
-Tiene 2 o mas items dentro del array y siempre se cumple el target
-No tiene nuemero negativos
-No tiene numeros repetidos
-Siempre se regresan 2 indices

Para este programa tendra una duracion aproximada de lo siguiente
- En el mejor de los casos se dara que solamente se tienen 2 items en el array en este caso se mandaran los 2 indices y se acabo la operacion
- En cualquiera de los otros casos se tendra que tomar el tiempo de n que son la cantidad de numeros que se encuentran en el arreglo que en el peor de los casos se tendra que recorrer todo el arreglo y el tiempo que se tarde en checar en un hashtable si se encuentra el numero que salio como resultado de la resta del target y del primer numero que esto nos da el numero meta que se quiere encontrar

Para el programa sera necesario lo siguiente
-Array que se regresara
-ciclo while para recorrer el array
-hashtable para buscar
-variable temporal para el resultado de la resta y saber el numero que se busca