### Práctica 4
## Por: Guillermo alberto Jiménez Frías

# Objetivos:
- Construir un arbol binario a partir del InOrder & PosOrder.
- Recorrer en Preorder de un arboles binarios.

# Sobre el Trabajo
Implementaremos la clase Arbol Binario e instanciaremos la clase a través de los recorridos InOrder & PosOrder para luego regresar el recorrido PreOrder

La clase ArbolBinario cuenta con una atributo extra llamado size. La función del atributo es reservar memoria de forma dinámica para el arreglo que contrendrá el pre-orden de arbol.

Tiene también dos métodos auxiliares
- crearArbol : Recibe los apuntadores a arreglos en InOrder & PosOrder, y el tamaño de los arreglos, regresa un apuntador a nodo, el cual lo asigna como raiz en el constructor.
Éste método funciona de manera recursiva.

- _preorder : Recibe un apuntador a nodo padre y el aputnador a un índice, con éste indice accedemos a la dirección de memoria reservada para el arreglo que contendrá los elementos del arbol en PreOrder.
Éste método funciona de manera recursiva.

# Comentarios Generales:
- Para las funciones me base en la implementacion de las correspondientes de la ayudantía.
- Me costó trabajo manejar memoria (dinámica) para generar el arreglo en pre-orden, en el sentido que era más secillo solo imprimir en pantalla los valores o utilizar una cola.
- El constructor no tube problemas ni inconvenientes.

# Archivos Enviados
- mainc.cpp : archivo fuente con el código principal. Se dan los arreglos en In-Order & Pos-Order, se define e inicializa un arbol binario; luego generamos el arreglo en Pre-Order y lo mostramos en pantalla. Al final liberamos memoria de ese arreglo.
- ArbolBinario.hpp : archivo encabezado con la definición de los métodos de la clase ArbolBunario y estructura Nodo.
- ArbolBinario.cpp : archivo fuente con la implementación de los métodos de la clase ArbolBunario y estructura Nodo.
- Readme.md : Archivo presente. Tiene instrucciónes del código y descripción de la práctica

# Compilación
con el comando

g++ -std=c++11 main.cpp ArbolBinario.cpp -o arbolbin

# Resultado en Pantalla
Recorrido en preorder del arbol:
1 3 2 7 8


# Pregunta Final:

inorder = {3,7,1,2,8}
posorder = {3,1,8,7,2,}

¿Cómo harías para saber si los recorridos corresponden a un árbol binario sin tener que construir el árbol?

Por la definición de éstos ordenes. Para el In- se debe cumplir que el Nodo Padre este entre los otros dos

In- 

1.- Izquierdo
2.- Padre
2.- Derecho

y para el Pos-

1.- Izquierdo
2.- Derecho
3.- Padre

Por lo que el nodo padre -que conocemos por el posorder-, divide a los nodos en dos subconjuntos disjuntos Iz y Der en el inorder.
Luego el primer subarreglo de longiud |Iz| de posorder va a la izquierda y el resto -sin el último nodo- va a la derecha. Generando así otra partición.
(En general así construimos el árbol).

En este caso, para generar los subconjuntos en inorder el 8 y el 7 no pertenecen al mismo subconjuto (nodo hijo). Pero en los subconjuntos de posorder siguen sin pertenecer al mismo pero en este caso pertenecen al lado contario. Esto es contradictorio en como se generan los subconjuntos.

Por ello se puede saber que los recorridos dados no generan un árbol binario.
