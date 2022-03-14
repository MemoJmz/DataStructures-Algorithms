Sesion de Ayudantía 1: Programación Orientada a Objetos

¿Qué es?
Es un paradigma de programación, donde un problema se construye con base en abstracciones de entidades que conforman al problema. Tienen como objetivo facilitar el manejo de código en el programa.

Dichas entidades pueden ser abstractas o fisicas: el modelo/ lo que se modela.

En este caso, las entidades serán modeladas con clases.

Caracteristicas:
- Modularidad -> Escribir el código en módulos (archivos de funciones, clases, principal)
- Abstracción -> Sobrecarga de operadores (Definición e Implementacion)
- Jerarquía -> Más allá de la herencia, implementación de interfaces (C++ no las tiene, se pueden implementar, Java si tiene)
- Encapsulamiento -> Determinar los elemetos invariantes del código

Dan como resultado la caracteristica de polimorfismo, se puede ver que un objeto se comporta como otro al ejecutarlo o en el tiempo de ejecucion. (p.e. pagar con cheques, tarjeta, dinero... son diferentes clases pero funcionan al final para realizar un pago)

Clase
Plantilla que modela el comportamiento de una entidad de manera directa o indirecta en el problema que se desea resolver.

Compuesta por dos componentes:
- Atributos  -> Propiedades de la clase  (datos)
- Métodos    -> Modifica y trabajan con los atributos (funciones)

Subclase
Relacionada con la clase, se puede ver (no es la única relación) con la herencia de ciertos atributos y métodos.

En C++  se usa con la palabra reservada extends

Visibilidad (Jerarquía y Encapsulamiento)
Restricciones de acceso a los atributos

Tabla para C++

                         Public     Protected      Private & Default*    
Desde la misma clase       Si           Si              Si
Desde la misma subclase    Si           Si              No    
Desde la otra clase        Si           No              No
(no subclase)

El lenguaje basado en objetos, basicamente todo es un objeto (Java, int, double). La creación de éstos objetos la lleva a cabo el compilador. Lenguajes con soporte  a objetos, no todo es un objeto (C++, int double si son primitivas)

¿Qué es un objeto?
Es la instancia de una clase, entonces ¿qué es una instancia? la clase que tiene recursos asignados (tiene vida).

¿Par que sirve?

- Nos permite modelar soluciones más simples para problemas complejos.
- Da facilidades para la expansión y mantenimineto del código.
- Permita plasmar soluciones complejas de una manera un poco más "natural".
