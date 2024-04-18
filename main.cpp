#include <iostream>
#include "ContactManager.h"

int main() {
    // Inicjalizacja ContactManager
    ContactManager contactManager;

    // Pêtla g³ówna programu
    while (true) {
        // Wyœwietlenie menu
        std::cout << "==== Menu ====" << std::endl;
        std::cout << "1. Dodaj kontakt" << std::endl;
        std::cout << "2. Usun kontakt" << std::endl;
        std::cout << "3. Edytuj kontakt" << std::endl;
        std::cout << "4. Wyswietl wszystkie kontakty" << std::endl;
        std::cout << "5. Zakoncz program" << std::endl;

        // Wczytanie wyboru u¿ytkownika
        int choice;
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        // Obs³uga wyboru u¿ytkownika
        switch (choice) {
            case 1: {
                // Dodawanie nowego kontaktu
                std::string firstName, lastName, phoneNumber, email;
                std::cout << "Podaj imie: ";
                std::cin >> firstName;
                std::cout << "Podaj nazwisko: ";
                std::cin >> lastName;
                std::cout << "Podaj numer telefonu: ";
                std::cin >> phoneNumber;
                std::cout << "Podaj adres email: ";
                std::cin >> email;
                Contact newContact(firstName, lastName, phoneNumber, email);
                contactManager.addContact(newContact);
                std::cout << "Kontakt zostal dodany." << std::endl;
                break;
            }
            case 2: {
                // Usuwanie kontaktu
                int index;
                std::cout << "Podaj numer kontaktu do usuniecia: ";
                std::cin >> index;
                contactManager.removeContact(index);
                std::cout << "Kontakt zostal usuniety." << std::endl;
                break;
            }
            case 3: {
                // Edycja kontaktu
                int index;
                std::cout << "Podaj numer kontaktu do edycji: ";
                std::cin >> index;
                std::string newFirstName, newLastName, newPhoneNumber, newEmail;
                std::cout << "Podaj nowe imie: ";
                std::cin >> newFirstName;
                std::cout << "Podaj nowe nazwisko: ";
                std::cin >> newLastName;
                std::cout << "Podaj nowy numer telefonu: ";
                std::cin >> newPhoneNumber;
                std::cout << "Podaj nowy adres email: ";
                std::cin >> newEmail;
                contactManager.editContact(index, newFirstName, newLastName, newPhoneNumber, newEmail);
                std::cout << "Kontakt zostal zaktualizowany." << std::endl;
                break;
            }
            case 4: {
                // Wyœwietlenie wszystkich kontaktów
                std::cout << "Wszystkie kontakty:" << std::endl;
                contactManager.displayContacts();
                break;
            }
            case 5: {
                // Zakoñczenie programu
                std::cout << "Koniec programu." << std::endl;
                return 0;
            }
            default:
                std::cout << "Niepoprawny wybor. Wybierz ponownie." << std::endl;
                break;
        }
    }

    return 0;
}
