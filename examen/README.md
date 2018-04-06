En este problema de salvar a la humanidad tenermos que checar la posicion en donde se puede encontrar un match de un string la cadena P tiene el adn de la persona que esta constituida por una cadena de caracteres solamente en ingles y minuscula y la cadena V es el virus que se quiere buscar en la cadena de P

Para considerar un match en el problema sera necesario que solamente un caracter de la cadena de V no se encuentre en la cadena P.

En dado caso de hacer match se tienen que imprimir los indices en donde se encontro los casos de virus de la persona para poder atacarlos.

Para la solucion de este problema sera necesario lo siguiente

P el array de char de la persona
V el array de char del virus a buscar
El maximo numero de comparaciones en el problema sera de 10 y un minimo de 1

Por cada array que se reciba de persona sera necesario recorrelo completamente hasta el punto sizeof(P)-sizeof(v) dado que si se continua una parte del array de V se encontrara fuera del rango de P, con esta condicion se ve que si se encuentra un V mayor a P entonces no se encontrara ningun match.

