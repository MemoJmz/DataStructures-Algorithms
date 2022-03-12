namespace Lista
{
    class listaSimple
    {
        typedef struct nodo{
            int info;
            nodo *sig;
        } lista;
    
    lista *head;        
    public:
        listaSimple(){
            head=NULL;  
        }

        lista *getHead(){
            return head;
        }

      void inserta_al_final(int valor); // inserta un valor en orden no decreciente
      int elimina_del_inicio();
      void imprimeLista();
    };

    void listaSimple::inserta_al_final(int valor){
        lista *i=(lista*)malloc(sizeof(lista));
        i->info=valor;
        if (head==NULL){
            head=i;
        }  
        else{
            i->sig=head;
            head=i;
        }
        return;
    }

    int listaSimple::elimina_del_inicio(){
        int x=-1;
        lista *p=getHead();
        lista *prev=NULL;
        while (p->sig!=NULL){
            prev=p;
            p=p->sig;
        }
        if (prev==NULL){
            std::cout<<"COLA VACIA"<<std::endl;
            exit(EXIT_FAILURE);
        }
        else{
            prev->sig=NULL;
            x=p->info;
            free(p);
        }
        return x;
    }

    void listaSimple::imprimeLista(){
        lista *p=getHead();
        while (p){
            std::cout<<p->info<<" ";
            p=p->sig;
        }
        std::cout<<"\n";
    }
}