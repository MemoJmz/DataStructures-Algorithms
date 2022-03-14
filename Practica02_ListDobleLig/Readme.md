# Práctica 02 - Listas Doblemente Ligadas
# Guillermo Alberto Jiménez Frías

Se envían los archivos Readme.md con una descripción de los resultados hechos, un archivo header ListaContactos.hpp con la definición de las clases y prototipos de sus métodos. También se incluyen los archivos ListaContactos.cpp con la implementación de los métodos de las clases y el archivo main.cpp con un ejemplo del uso de las clases y métodos a partir de Listas Doblemente Ligadas.

La forma de compilar los códigos es:
g++ -std=c++11 main.cpp ListaContactos.cpp -o nombre-ejecutable


Los métodos actuan de acuerdo y conforme a lo que se pidió en la práctica. Así como los resutlados obtenidos.

Comentarios Generales:
La práctica tubo complicaciones debido a los requerimientos de moverse a la izquierda/derecha a partir de contacto_actual... eso fue lo que más me costó.

Al terminar de realizar las instrucciones se activa el destructor de fila. Lo que provoca que al final se vea un contacto vacio (header) y los otros dos contactos que quedaban en la lista.

La salida en consola fue:

Se ha eliminado el contacto:
Nombre: Juan
Numero: 0987654321
Email: hola.mundo@cimat.mx


##### Lista de Contactos #####
1. Santiago
2. Joel
##########


##### Lista de Contactos #####
1. Santiago
2. Claudia
3. Joel
##########

[ERROR] Posicion no valida
Se ha eliminado el contacto:
Nombre: Santiago
Numero: 1234567890
Email: jose.vales@cimat.mx


##### Lista de Contactos #####
1. Claudia
2. Joel
##########

Se ha eliminado el contacto:
Nombre:
Numero:
Email:

Se ha eliminado el contacto:
Nombre: Claudia
Numero: 2468013579
Email: ejemplo@cimat.mx

Se ha eliminado el contacto:
Nombre: Joel
Numero: 1357924680
Email: adios.mundo@cimat.mx
