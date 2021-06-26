#include "include/list.h"

void List::print_menu(){
    int choice;

    cout << "*******************************************\n";
    cout << " 1 - Print List.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit.\n";
    cout << " Entre you choice and press return: ";

    cin >> choice;

    if (choice == 4){
        exit(0);
    } 
    else if (choice == 2){
        add_item();
    } else if (choice == 3){
        delete_item();
    } else if (choice == 1){
        print_list();
    }
    
    
    else {
        cout << "Sorry, choice not implemented yet.\n";
    }
}

void List::add_item(){
    cout << "\n\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an intem to add:";

    string item;
    cin >> item;
    
    list.push_back(item);

    cout << "Sucessfully added an item to the list \n\n\n\n\n";

    cin.clear();

    print_menu();    
}

void List::delete_item(){
    cout << "*** Delete Item ***";
    cout << "Select an item index number to delete:";

    if(list.size()){
        for (int i = 0; i < list.size(); i++){
            cout << i << ": " + list[i] + "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        
        list.erase(list.begin()+choiceNum);

    } else {
        cout << "No items to delete. \n";
    }

    print_menu();
}


void List::print_list(){
    cout << "\n\n\n\n\n\n" ;
    cout << "**** Printing List ****\n";

    if(list.size()){
        for (int i = 0; i < list.size(); i++){
            cout << " * " << list[i] + "\n";
        }
        
    } else {
        cout << "No items in the list. \n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if (choice =='M' || choice == 'm'){
        print_menu();
    }
}