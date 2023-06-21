#include "Iterator.h"


template <class T>
Iterator<T>::Iterator(){
    this->current_index = empty;
    this->elem = empty;
}




template<class T>
void Iterator<T>::display_info(){
    cout<<"Index = "<<this->current_index<<endl;
    cout<<"Elem = "<<this->elem<<endl;
}

template<class T>
void Iterator<T>::Set_info(int ind, T e){
    this->elem = e;
    this->current_index = ind;
}


template<class T>
int Iterator<T>::GetIndex(){
    return this->current_index;
}

template<class T>
T Iterator<T>::GetElem(){
    return this->elem;
}





