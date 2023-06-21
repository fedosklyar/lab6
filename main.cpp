#include "HashOpen.h"


int main(){

    int option = menu_type();
    if(option == 1){
        HashOpen <int> Tabla(enter_size());
        Tabla.create_Hash_Table();
        Tabla.getTableData();
        Iterator <int> tableiter;
        char pick;
        do{
            option = menu_choice();
            switch(option){
                case 1:
                Tabla.insertElem(create_key<int>());
                Tabla.getTableData();
                break;

                case 2:
                Tabla.eraseElem(create_key<int>());
                Tabla.getTableData();
                break;

                case 3:
                tableiter = Tabla.begin();
                tableiter.display_info();
                break;

                case 4:
                tableiter = Tabla.end();
                tableiter.display_info();
                break;

                case 5:
                tableiter = Tabla.current();
                tableiter.display_info();
                break;

                case 6:
                tableiter = Tabla.next();
                tableiter.display_info();
                break;

                default:
                cout<<"Error";
            }


        cin.ignore();
        cout<<"Would you like to Continue (Y - yep, N - No): ";
        cin>>pick;
    }while(tolower(pick) != 'n');
    }
    else if(option == 2){

        HashOpen <double> Tabla(enter_size());
        Tabla.create_Hash_Table();
        Tabla.getTableData();
        Iterator <double> tableiter;
        char pick;
        do{
            option = menu_choice();
            switch(option){
                case 1:
                Tabla.insertElem(create_key<double>());
                Tabla.getTableData();
                break;

                case 2:
                Tabla.eraseElem(create_key<double>());
                Tabla.getTableData();
                break;

                case 3:
                tableiter = Tabla.begin();
                tableiter.display_info();
                break;

                case 4:
                tableiter = Tabla.end();
                tableiter.display_info();
                break;

                case 5:
                tableiter = Tabla.current();
                tableiter.display_info();
                break;

                case 6:
                tableiter = Tabla.next();
                tableiter.display_info();
                break;

                default:
                cout<<"Sosi";
            }


        cin.ignore();
        cout<<"Would you like to Continue (Y - yep, N - No): ";
        cin>>pick;
    }while(tolower(pick) != 'n');

    }

    else if(option == 3){
        HashOpen <char> Tabla(enter_size());
        Tabla.create_Hash_Table();
        Tabla.getTableData();
        Iterator <char> tableiter;
        char pick;
        do{
            option = menu_choice();
            switch(option){
                case 1:
                Tabla.insertElem(create_key<char>());
                Tabla.getTableData();
                break;

                case 2:
                Tabla.eraseElem(create_key<char>());
                Tabla.getTableData();
                break;

                case 3:
                tableiter = Tabla.begin();
                tableiter.display_info();
                break;

                case 4:
                tableiter = Tabla.end();
                tableiter.display_info();
                break;

                case 5:
                tableiter = Tabla.current();
                tableiter.display_info();
                break;

                case 6:
                tableiter = Tabla.next();
                tableiter.display_info();
                break;

                default:
                cout<<"Sosi";
            }


        cin.ignore();
        cout<<"Would you like to Continue (Y - yep, N - No): ";
        cin>>pick;
    }while(tolower(pick) != 'n');
    }

    //create_Hash_Table();

    //HashOpen <char> CharTable;




    return 0;
}