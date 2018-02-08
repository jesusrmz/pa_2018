Para este problema tenemos que confirmar la complejidad de una contraseña cumpliendo con ciertos parametros

La contraseña tiene almenos 6 carcateres
Maximo 20 carcateres
Contiene al menos una mayuscula, una minuscula y un digito
no deben de repetirse un caracter tres veces de manera consecutiva
Debe retornar el cambio minimo para convertir una contraseña debil en una fuerte
Tiene dos estados, fuerte o debil.
No se aceptan caracteres no alfanumericos

Para la solucion de este problema tenemos recibimos como parametro un apuntador a un arreglo donde se encuentra la contraseña.
Al recibir esto primero se tiene que ver que cumpla con la longitud minima de caracteres si no es asi se tiene que guardar ese error en alguna variable
Despues al mismo tiempo se tiene que checar al estar recorriendo el arreglo que no contenga 3 caracteres iguales y que sean consecutivos.
Al ir recorriendo el arreglo podemos checar que se cumpla con las condiciones minimas de los caracteres diferentes que se pusieron y en dado caso de no cumplir alguno regresar un aviso con el tipo de caracter que falta.