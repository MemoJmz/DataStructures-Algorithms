//template <typename tipo>
struct Nodo
{
    int key;
    Nodo *left;
    Nodo *right;

    //Nodo(int x);
    //~Nodo();
};

class AVL{
    public:
    Nodo* insert(Nodo* r, int d);
    void erase(int key);
    Nodo* search(int key);
    int size = 0;

    private:
    Nodo* root;

    unsigned int get_height(Nodo* root);
    int get_balance(Nodo* root);
    void leftRotate(Nodo* root);
    void rightRotate(Nodo* root);

    int containsNodo(Nodo* r, int d);
};

class Set{
    private:
    AVL Tree;

    public:
    void add(int n);
    void remove(int n);
    bool exists(int n);
};