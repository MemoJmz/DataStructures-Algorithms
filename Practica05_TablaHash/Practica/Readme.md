# Práctica 5: Tablas Hash
# Guilermo ALberto Jiménez Frías

## Objetivos

- Familiarizar al estudiante con la estructura Tabla Hash y su implementación; y proporcionar un ejemplo útil de ellas.

## Utilicé las librerias

<functional> -> función hash para strings
<utility> -> clase pair
<string> -> clase cadena de caracteres, compare
<list> -> clase list para lista doblemente ligada, interator un iterador, begin(), end(), push_back()
<iomanip> -> No se para que se utilizó

El constructor _HashTable(unsigned int n)_ recibe lo que serpa el tamaño de la tabla hash y reserva memoria para n apuntadores a listas de parejas <string, int>

El destructor _~HashTable()_ libera los N espacios de memora reservados para aputnadores a listas

Insertar _void insert(std::string key, int value)_ no regresa parametro, es un método de la clase HashTable que agrega una nueva pareja (si es que no existe), de otra forma solo aumenta su valor en 1. Para realizar lo anterior primerio se debe buscar su ubicación en la tabla con la función _<string, int>* find(string key)_ y calcular la celda con _hash-func(string key)_ (Es guión bajo).

No entendí porque era necesario mandar el _int valor_. Realmente no es necesario.

Encontrar _<string,int>find(string key)_ primero busca en la celda k (que obtienen a partir de _hash-function(string key)_ (es guión bajo)). Luego itera sobre la lista doblemente ligada en esa celda. Si escuentra el valor regres &*it y si no NULL.

La función _hash-function(string key)_ (es guión bajo) se calcula con una ya predefinida en la librería estándar, luego se calcula el módulo del valor que regresa para que entre dentro del tamaño de la tabla, i.e. % N;


Comentarios: Me costó muchisimo resolver el problema del iterador en la función find() y saber que debo regresar &*it. En la función insert() no se porque sea necesario mandar el valor entero, realmente no se necesita (si se inserta, entonce sno estaba value = 1, si ya estaba, entonces value +=1, donde value es el entero de la pareja).


## Comando para Compilar Solución

g++ -std=c++11 main.cpp HashTable.cpp -o main

## Salida de la función main

m├®xico count: 17
corrupci├│n     count: 13
hola    count: 18perplejidad is not in vocabularymon├│logo is not in vocabulary
mundo   count: 19
huachicoleo     count: 10
arte    count: 16
revista count: 13
pobreza count: 20
odebrecht       count: 14
...     count: 17


## Páginas consultadas

c++ references
cpluplus