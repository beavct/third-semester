// Aula 1 - 14/03 - Bags:

template <class Item>
class Bag{
  private:
    Item *v;
    int tam; // capacidade
    int n; // número de elementos
    void resize(int tam);
  public:
    Bag();
    ~Bag();
    void Add(Item item);
    bool isEmpty();
    int size();
    Item at(int i);
};

template <class Item>
Bag <Item>:: Bag(): n(0), tam(1), v(new Item[1]){};

template <class Item>
Bag <Item>:: ~Bag(){
  if(v != nullptr)
    delete []v;
}

template <class Item>
bool Bag <Item>:: isEmpty(){
  return (n == 0);
}

template <class Item>
int Bag <Item>:: size(){
  return (n);
}

template <class Item>
Item Bag <Item>:: at(int i){
  if(i >= 0 && i < n)
    return (v[i]);
}

template <class Item>
void Bag <Item>:: Add(Item item){
  if(n == tam)
    resize(2*tam);
  v[n++] = item;
}

template <class Item>
void Bag <Item>:: resize(int t){
  Item *novov = new Item[t];
  
  for(int i = 0; i < n; i++)
    novov[i] = v[i];
   
   delete []v;
   v = novov;
   tam = t;
}
