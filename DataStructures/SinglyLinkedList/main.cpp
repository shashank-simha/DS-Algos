#include <iostream>
#include "sll.hpp"

using namespace std;

int main()
{
    SLL sll;
    
    do
    {
        int choise, data, pos;
        cout << endl << "Available choises" << endl << "1. Append" << endl << "2. Insert" << endl << "3. Remove" << endl << "4. Display" << endl << "Enter your choise: ";
        cin>>choise;

        switch (choise)
        {
            case 1:
                cout << "Enter the data: ";
                cin >> data;
                sll.append(data);
                break;

            case 2:
                cout << "Enter the data: ";
                cin >> data;
                cout << "Enter the position: ";
                cin >> pos;
                sll.insert(data, pos);
                break;

            case 3:
                cout << "Enter the position: ";
                cin >> pos;
                sll.remove(pos);
                break;

            case 4:
                sll.display();
                break;
        
            default:
                cout << "Invalid choise" << endl;
                break;
        }

    } while (true);
    

    return 0;
}