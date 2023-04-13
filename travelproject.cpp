//Program for airline travel pricing
//Program by ISAAC OPATA

#include <iostream>
using namespace std;

int main()
{
    int choice;
    int airlineChoice;
    int numOfPassengers;
    int numOfUnderAge;
    int adults;
    double ticketPrice, underagePrice, adultPrice, totalPrice;
    const double discount = 0.25;

    //Asks the User to Select a Place of Choice for their Summer Vacation
    cout << "Please select a number which represents a place of choice:\n";
    cout << "1. Hawai\n";
    cout << "2. Bahamas\n";
    cout << "3. Cancun\n";
    //Displays to the User their Place of Chouce for Summer Vacation
    cin >> choice;
    if (choice == 1)
        cout << "You have selected Hawai for your summer vacation.\n";
    else if (choice == 2)
        cout << "You have selected Bahamas for your summer vacation.\n";
    else if (choice == 3)
        cout << "You have selected Cancum for your summer vacation.\n";
    else
        cout << "Error! Please select a number from 1 to 3\n";
    //Ask User to choose flight and display the their selection
    cout << "Please select your flight choice: \n";
    cout << "1.US Air\n";
    cout << "2.Delta\n";
    cout << "3.South West\n";
    cin >> airlineChoice;
    switch(airlineChoice)
    {
       case 1: cout << "You have selected US Air\n";
           break;
       case 2: cout << "You have selected Delta\n";
           break;
       case 3: cout << "You have Selected South West\n";
           break;
       default: cout << "Error! Please select a number from 1 to 3\n";
    }
    //Ask user to enter ticket price
    cout << "What is the ticket price? $";
    cin >> ticketPrice;
    //ask user to select the number of passengers and display their selection
    cout << "Please select the number of passengers: \n";
    cout << "1.One person\n";
    cout << "2.Two persons\n";
    cout << "3.Three persons\n";
    cout << "4.Four persons\n";
    cin >> numOfPassengers;
    switch (numOfPassengers)
    {
    case 1: cout << "You have selected One Person\n";
        break;
    case 2: cout << "You have selected Two Persons\n";
        break;
    case 3: cout << "You have Selected Three Persons\n";
        break;
    case 4: cout << "You have Selected Four Persons\n";
        break;
    default: cout << "Error! Please select a number from 1 to 3\n\n";
    }
    //ask you to input the number of underage travelers and calculate the ticket prices with the provided information
    cout << "If you have selected " << numOfPassengers << " passengers,";
    cout <<"how many passengers are underage of 18? \n";
    cout << "1.One person\n";
    cout << "2.Two persons\n";
    cout << "3.Three persons\n";
    cout << "4.Four persons\n\n";
  
    cout << "please enter how many passengers are underage of 18: ";
    cin >> numOfUnderAge;
    underagePrice = ticketPrice * discount;
    adults = numOfPassengers - numOfUnderAge;
    adultPrice = ticketPrice;
    totalPrice = numOfUnderAge * underagePrice + adults * adultPrice;
    cout << "Location: " << choice << endl;
    cout << "Air Line Ticket: " << ticketPrice << endl;
    cout << "Air Fare per round trip: " << ticketPrice << endl;
    cout << "Air Fare per adult: " << adultPrice << endl;
    cout << "Air Fare per underage: " << underagePrice << endl;
    cout << "Air Fare for underage in family: " << underagePrice * numOfUnderAge << endl;
    cout << "Total Air Fare for family: " << totalPrice << endl;
    
    return 0;
}