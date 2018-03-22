Problema: Batman empieza en un array de tamaño [a,g] en la posicion x0 y y0 y se necesita llegar a un posicion [X,Y] desconocida para la cual solo te dan indicaciones para las 8 puntos cardinales aplicados al edificio.
Batman cuenta con un cierto numero de movimientos N maximos antes de que la bomba explote
1<a<10000
1<g<10000
2<N<100
0<x, x0 < a
0<y, y0 < g
Solucion:
Dado el tamaño no sabemos en que lugar esta la bomba solo se le dara un indicador de en que direccion se tiene que mover el entonces sea este el caso
se descartan las otras direcciones a las que se tienen que mover, despues de hacer esto se hace un arreglo mas chico eliminando las posiciones en donde
no se encuentr la bomba y asi continuamente se sigue moviendo a batman y reduciendo el arreglo para ver en que posicion se encuentra.