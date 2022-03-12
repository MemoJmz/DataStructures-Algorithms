En general tenemos la siguietne estructura

struct Nodo{
    int valor;
    Nodo* Izq;
    Nodo* Der;
};

# PreOrder
VisitarNodo
PreOrder(Iz)
PreOrder(Der)

# InOrder
InOrder(Iz)
VisitarNodo
InOrder(Der)

# PosOrder
PosOrder(Iz)
PosOrder(Der)
VisitarNodo

Nota que la Izquierda siempre se visita antes de la Derecha