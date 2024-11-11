#include <iostream>
#include <string>
using namespace std;

int main() {
    int price = 80;
    int finalPrice = 0;

    cout << "Enter destination (domestic or international): ";
    string destination;
    getline(cin, destination);

    // Menghitung harga dasar berdasarkan tujuan
    if (destination == "domestic") {
        price += 30;
    } else if (destination == "international") {
        price += 650;
    } else {
        cout << "Spelling error detected in destination input!" << endl;
    }

    cout << "Ticket Price: " << price << endl;

    // Melanjutkan perhitungan berdasarkan input pengguna
    cout << "Enter bag weight: ";
    int bagWeight;
    cin >> bagWeight;
    if (bagWeight > 19) {
        price += 35;
    }
    finalPrice = price;

    // Menampilkan biaya per perjalanan
    cout << "\n==== Trip Details ====" << endl;
    cout << "Base Trip Cost: $" << (price - (bagWeight > 19 ? 35 : 0)) << endl;
    if (bagWeight > 19) {
        cout << "Bag Weight Charge: $35" << endl;
    }
    cout << "Destination Charge: " << (destination == "domestic" ? "$30" : "$650") << endl;

    // Menampilkan harga total
    cout << "\nTotal Ticket Price: $" << finalPrice << endl;

    // Opsi tambahan: Makanan
    cout << "Would you like to add a meal for an additional $50? (yes or no): ";
    string addMeal;
    cin >> addMeal;
    if (addMeal == "yes") {
        finalPrice += 50;
        cout << "Meal service added. Total updated." << endl;
    }

    // Opsi tambahan: Asuransi
    cout << "Would you like to add travel insurance for $100? (yes or no): ";
    string addInsurance;
    cin >> addInsurance;
    if (addInsurance == "yes") {
        finalPrice += 100;
        cout << "Travel insurance added. Total updated." << endl;
    }

    // Opsi tambahan: Mobil
    cout << "Would you like to add a car for the trip at an extra $350? (yes or no): ";
    string addCars;
    cin >> addCars;
    if (addCars == "yes") {
        finalPrice += 200;
        cout << "Trip cars added. Total updated." << endl;
    }

    // Menampilkan ringkasan akhir
    cout << "\n==== Final Ticket Summary ====" << endl;
    cout << "Final Ticket Price: $" << finalPrice << endl;
    cout << "Thank you for using our ticketing service!" << endl;

    return 0;
}
