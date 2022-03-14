Práctica 01: Clases, Objetos y arreglos Dinámicos.

Se realizaron implementaciones de clases y uso de objetos a través de un ejemplo práctico creando dos clases, AgendaTel y Contacto; simulan, respectivamente, las entidades agenda telefonica y contacto.

Cada método y atributo de las clases realiza las actividades descritas en las instrucciones de la práctica.

Se creó el objeto agenda como instacia de la clase AgendaTel, así como 4 objetos contactos. Mediante el uso de apuntadores inicializamos los contactos y la agenda.

Luego pedimos que buscara el contacto "Jsj gege", para el cual la función find regreso el mensaje "[MSG] Contacto no encontrado"

El programa relizó todas las actividades y regreso en pantalla lo siguiente:

PS C:\Users\gajim\Desktop\EDA\Practica01\Practica> g++ -std=c++11 main.cpp Agenda.cpp -o main
PS C:\Users\gajim\Desktop\EDA\Practica01\Practica> .\main.exe
Contacto insertado con e'xito.
Contacto insertado con e'xito.
Contacto insertado con e'xito.
Contacto insertado con e'xito.
[MSG] Contacto no encontrado
Lista de contactos: 
Contact 0: Mkk Mkkdd Sse
Number: 413 567 8920     email: mkk.mkkdd@gmail.com
Contact 1: Lle Ajsss Awj
Number: 413 264 1365     email: lle.ajsss@gmail.com
Contact 2: Ldl Sjdfa Ssd
Number: 413 547 4927     email: ldl.sjdfa@gmail.com
Contact 3: Tuy Hjass Lls
Number: 413 864 5627     email: tuy.hjass@gmail.com

El nombre de los archivos fuente es:  main.cpp y Agenda.cpp
El nomreb de los archivos header es: Agenda.h

Para compilar y generar el ejecutable se escribe la instrucción en consola:
g++ -std=c++11 main.cpp Agenda.cpp -o main

Para correrlo: main.exe

Referencias: Ayudantía 11 - Febrero, Diapositivas de Clase: Clases y Memoría Dinámica.