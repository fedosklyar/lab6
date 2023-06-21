#include "HashOpen.h"
#include "funcs.h"

template <class T>
HashOpen<T>::HashOpen(int value){
    size = value;
    table_elem = new T[size];

    iterator.Set_info(empty, empty);
    //for(int i = 0; i < size; i++) table_elem[i] = nullptr;
    //head = new T;
    //tail = new T;
}

template <class T>
HashOpen<T>::~HashOpen(){
    delete [] table_elem;
    //delete head;
    //delete tail;
}


template <class T>
float HashOpen<T>::HashValue(T key){
    float A = 0.451;
    cout<<"|KEY| = "<<fabs((float) key)<<endl;
    float drob = floor (size * fmod(A* fabs(float(key)), 1.0)); //hash value


    return drob;
}


template <class T>
void HashOpen<T>::create_Hash_Table(){

    //Nodeptr<T> newarr = new Node<T>[size];
    //this->setSize(enter_size());
    cout<<"Size = "<<this->size<<endl;

    //створюєм голову списку


    for(int i = 0; i < this->size; i++) this->table_elem[i] = empty;
    
    int quan = 0;
    char pick;
    do{
        insertElem(create_key<T>());
        ++quan;
        cin.ignore();
        cout<<"Would you like to insert one more element (Y - yep, N - No): ";
        cin>>pick;
    }while(tolower(pick) != 'n' && quan < size); //ось ду вайл на вайл переробити б для гарнішого інтерфейсу

    cout<<"Quantity = "<<quan<<endl;

    return;
}



template <class T>
int HashOpen<T>::getSize(){
    return size;
}



template <class T>
void HashOpen<T>::insertElem(T key){
    //перевірку на заповненість табли
    //if(HashOpen.isFull()) return;
    int h = HashValue(key);


    //p = new Node<T>;
    while(table_elem[h] != empty){
        if(h >= size) h = 0;
        h++;
    } 

    //if(h == 0 && table_elem[h] == -1) head = &table_elem[h]; //треба буде перевірити, якою буде поведінка 

    table_elem[h] = key;
    
    //після видалення елемента, на який вказує і голова
}


template <class T>
void HashOpen<T>::getTableData(){
    
    for(int i = 0; i < size; i++){
        if(table_elem[i] != empty){
            //Nodeptr<T> temp = table_elem[i];
            cout<<i + 1<<" Data -> "<<table_elem[i]<<endl;
        }
    }
}



template <class T>
void HashOpen<T>::eraseElem(int key){
    bool check = false;
    for(int i = 0; i < size; i++){
        if(table_elem[i] != empty && table_elem[i] == key){ // трошки модифікував умову
        //Nodeptr<T> temp = table_elem[i];
            check = !check;
            table_elem[i] = empty;
    }
    }

    if(!check){
        cout<<"There is no element with such key:"<<endl;
        return;
    }

    //for(int i = 0; )

    /*for(int i = 0; i < size; i++){
        if(table_elem[i] != nullptr){
            Nodeptr<T> temp = table_elem[i];
            Nodeptr<T> tempnext = temp->next;

            temp->next = nullptr;

            cout<<i<<" Data -> "<<temp->data<<endl;
        }
    }*/
    return;
}

template<class T>
Iterator<T> HashOpen<T>::begin(){
    if(table_elem[0] == empty) cout<<"The beginning of the table is empty"<<endl;

    else{
        iterator.Set_info(0, table_elem[0]);
    }
    return iterator;
}



template<class T>
Iterator<T> HashOpen<T>::end(){
    if(table_elem[size - 1] == empty) cout<<"The end of the table is empty"<<endl;

    else iterator.Set_info(size - 1, table_elem[size - 1]);
    return iterator;

}

template<class T>
Iterator<T> HashOpen<T>::current(){
    this->iterator.display_info();
    return iterator;
}


template<class T>
Iterator<T> HashOpen<T>::next(){
    if(this->current().GetIndex() == empty && this->current().GetElem() == empty || this->current().GetIndex() == size - 1) {
        cout<<"Can`t go to the next element, because it is absent"<<endl;
        return this->current();
    }
    Iterator<T> curr = this->current();
    curr.display_info();
    int currInd = curr.GetIndex();
    int increm = ++currInd;
    cout<<"CurrInd = "<<currInd<<" And ++currInd = "<<increm<<endl;

    if(table_elem[increm] != empty) curr.Set_info(increm, table_elem[increm]);
    curr.display_info();
    return curr;
}