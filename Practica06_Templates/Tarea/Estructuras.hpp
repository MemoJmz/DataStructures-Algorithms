//template <typename tipo>
class Nodo
{
    public:
    int key;
    Nodo *left;
    Nodo *right;
    unsigned int height = 1;    // Agregue este atributo para manejar la profundidad
};                              // Se inicializó a uno pues es un nodo hoja

class AVL{
    public:
    Nodo* insert(Nodo* r, int d);
    Nodo* erase(Nodo* r, int key);
    Nodo* search(Nodo* r, int key);

    private:
    Nodo* root;

    unsigned int get_height(Nodo* root);
    int get_balance(Nodo* root);
    Nodo* leftRotate(Nodo* root);
    Nodo* rightRotate(Nodo* root);

    int max(int a, int b);
    Nodo* min(Nodo* r);
};

class Set{
    private:
    AVL Tree;

    public:
    void add(int n);
    void remove(int n);
    bool exists(int n);
};