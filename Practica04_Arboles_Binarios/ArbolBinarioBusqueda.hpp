struct Nodo
{
    int id;
    Nodo *left, *right;
    Nodo(int k);
    ~Nodo();
};

class ArbolBinarioBusqueda{
private:
    /* Función para el programador */
    void _insert(Nodo* actual, int k);
    bool _find(Nodo* actual, int k);
    Nodo* raiz;
public:
    ArbolBinarioBusqueda();
    ~ArbolBinarioBusqueda();
    void insert(int k);     /* Función para el usuario */
    bool find(int k);
};

