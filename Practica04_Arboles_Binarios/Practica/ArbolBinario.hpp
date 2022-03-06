struct Nodo {
    int id;
    Nodo *left, *right;
    Nodo(int x);
    ~Nodo();
};

class ArbolBinario {
    public:
    ArbolBinario(int* inorder, int* posorder, int N);
    ~ArbolBinario();

    int* recorrido_preorder();

    private:
    Nodo* raiz;
    /* Necesité de los siguientes métodos y aatributo para el constructor y el recorrido_preorder() */
    Nodo* crearArbol(int* inorder, int* posorder, int N);
    int* _preorder(Nodo* padre, int* idx);
    int size;
};