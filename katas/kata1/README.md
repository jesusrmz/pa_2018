Para solucionar este problema tenermos que tomar en cuenta los siguiente
-Son 2 arreglos de entrada
-Contienen la misma cantidad de numeros
-El segundo arreglo es un anagrama del primero
-Pueden repetirse numeros dentro del arreglo
-Los numeros enteros van del 0 a 10^5
-El rango de los arreglos es de 1 a 100 numeros
-La salida es un arreglo con las posiciones del par de una froma P[i] = j  siendo i la posicion en el primer arreglo y j la posicion del par en el segundo arreglo

Para progamacion
Sera necesario crear un arreglo del tamaño de los arreglos que se van a revisar
Despues se tiene que recorrer el primer arreglo y hacer una busqueda con hashtable para encontrar la posicion
Al encontrar la posicion se coloca en el arreglo de salida
Se regresa el arreglo que contiene las posiciones