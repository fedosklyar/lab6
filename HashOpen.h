#include "funcs.h"

using namespace std;


template <class T>
class HashOpen{

    static int size;
    static int quantity;
    T *table_elem;
    Iterator<T> iterator;

    public:
    HashOpen(int value);
    ~HashOpen();
    float HashValue(T key);
    void setData(T key);
    static void setSize(int value);
    int getSize();
    bool isEmpty();
    void insertElem(T key);
    void eraseElem(int key);
    Iterator<T> begin();
    Iterator<T> current();
    Iterator<T> end();
    Iterator<T> next();
    void create_Hash_Table();
    T& CreateHead(T*);
    T& CreateTail(T*);
    void getTableData();
};

template <class T>
int HashOpen<T>::size = 10;