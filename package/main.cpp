//
// Created by levef on 10.04.2023.
//
#include "vector"
#include "iostream"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include "string"
using namespace std;

int main()
{
    cout << "Creating packages obj... " << endl;

    // создаем объекты посылок
    TwoDayPackage packageOne("Ann", "Bolorya street", "Moscow", "Moscovskaya oblast",
                          121333, 231444, 2.1, 20, 5);

    TwoDayPackage packageTwo("Luc", "Adreno street", "St. Peterburg", "Leningradskaya oblast",
                             388487, 754783, 6, 18, 4);

    OvernightPackage packageThree("Lee", "Somua street", "Abinsk", "Kuban",
                                  332334, 857339, 2, 25, 10);

    cout << "Creating vector for Package obj..." << endl;
    // создаем вектор посылок
    vector<Package*> packages(3);

    // присваиваем ему объекты посылок
    packages[0] = &packageOne;
    packages[1] = &packageTwo;
    packages[2] = &packageThree;

    double total_cost = 0; // суммарная стоимость всех отправлений
    for(auto & package : packages)
    {
        string name = package->getName();
        int addresseeZip = package->getAddresseeZip();
        string city = package->getCity();
        string state = package->getState();
        string address = package->getAddress();
        int senderZip = package->getSenderZip();
        auto weight = package->getWeight();
        auto price = package->getPrice();
        auto cost = package->calculateCost();

        //Распечатываем информацию о посылке
        cout << "Package: " << name << "\n"
             << "\tTO: " << addresseeZip << ", \n\t"
             << city << ", \n\t"
             << state << ", \n\t"
             << address
             << "\n\tFROM: " << senderZip
             << "\nWeight: " << weight
             << " Price: " << price
             << "\nCost: " << cost
             << "\n" << endl;

        total_cost += cost;
    }

    cout << "Total cost: " << total_cost << endl;
    system("pause");
    return 0;
}