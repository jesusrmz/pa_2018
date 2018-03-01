En este problema se tiene que revisar un string que tenga solo caracteres numericos para esto podemos considerar lo siguiente
-Tiene que ser un string de longitud minima de 1 caracter
-Puedes tener cual  cualquier tipo de caracter

Estos son las caracteristicas que van a entrar al programa a checar, el programa tendra que hacer lo siguiente para  poder resolver el problema de si tiene caracteres que no son numericos

Primero se recibe el apuntador al primer caracter del arreglo.
Despues de esto se tendra que ir recorriendo el arreglo en busqueda de todos los caracteres que contiene
De cada caracter se tendra que checar si se contiene en una HashTable la que contendra los siguientes caracteres "0 1 2 3 4 5 6 7 8 9 . e (espacio) "
En dado caso que el caracter que se tiene seleccionado no se encuentra en la hash se mandara que es falso y no es un numero
Tambien se tendra que checar cuantos puntos decimales hay antes de dar un espacio dado que solamente se puede tener un punto decimal en un numero y despues de un espacio se puede considerar que sigue otro numero y solamente se podra poner si hay un numero a un lado de el
Otra condicion que solamente la e de exponencial solo se podra poner entre 2 numeros dado que solamente se pone un e cuando indicas que un numero esta elevado a una potencia
