#include <iostream>
#include <windows.h>
#include <cstdlib>

#include "page_size.h"
#include "number_of_logical_procesors.h"
#include "total_available_phys_n_virtual_memory.h"
#include "memory_commit.h"
#include "number_of_running processes.h"


                                     /*The project's scope is to determine and display information
                                              about the operating system it is run on            */
                                                                        /*The authors of the project are :
                                                                                    Mihoci Paula
                                                                                    Abigail Iovescu
                                                                                    Oboroceanu Alexandru*/

                                     // TO BE NOTED THE PROJECT SHOULD ONLY WORK IF RUN ON A WIDNOWS MACHINE // 

void menu(); // << Declaring the function beforehand for main execution <<


int main() {
        menu();

    return 0;
}

void menu_logic(int choice){

    switch (choice) {
    case 1:
        system("cls");
        print_page_size();
        break;
    case 2:
        system("cls");
        print_number_of_logical_procesors();
        break;
    case 3:
        system("cls");
        print_total_phys_and_virtual_memory();
        break;
    case 4:
        system("cls");
        print_memory_commit();
        break;
    case 5:
        system("cls");
        print_number_of_proceses();
        break;
    case 6:
        std::cout << "Exiting";
        break;
    default:
        std::cout << "Invalid choice. Please try again.\n";
        break;
    }
}

void print_menu() {
    std::cout << "Menu Options:\n";
    std::cout << "1. Display Page size\n";
    std::cout << "2. Display the number of logical processors\n";
    std::cout << "3. Display the total physical and virtual memory\n";
    std::cout << "4. Display the total commited memory and the commit limit\n";
    std::cout << "5. Display Number of Running Processes\n";
    std::cout << "6. Exit\n";
}

void menu() {

    int user_choice = 0; // should work also if not initialized; 

    while (user_choice != 6) {
        print_menu();
        std::cout << "Choose an option: ";
        std::cin >> user_choice;

        menu_logic(user_choice);
        std::cout << std::endl; 
    }
}