#include "funcs.h"



int menu_type(){
    int choice;
    cout<<"\n1 -- Int\n2 -- Double\n3 -- Char\nChoose the type of data: ";
    cin>>choice;
    return choice;
}


int menu_choice(){
    int choice;
    cout<<"\n1 -- Insert the element\n2 -- Erase the element\n3 -- Go to the beginning\n4 -- Go to the end\n5 -- Get data from cuurent position\n6 -- Go to the next element\nChoose the option: ";
    do{
        cin>>choice;
        if(choice < 1 || choice > 6) cout<<"Invalid number\nPlease, try again: ";

    }while(choice < 1 || choice > 6);
    return choice;
}


template <class T>
T create_key(){
    T value;
    cout<<"Enter the value: ";
    cin>>value;

    return value;

}




int enter_size(){
    int size;
    do{
        cout<<"\nEnter the size (max --> 20): ";
        cin>>size;
        if(size <= 1 || size > 20)  cout<<"Invalid number for size\nPlease, try again:"<<endl;
}while(size <= 1 || size > 20);

return size;
}

