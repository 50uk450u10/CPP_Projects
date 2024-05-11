/*
Sean Zamora
ITSE-1307
2/15/2024
Calculate occupancy rate for a hotel, ask how many floors, rooms on each floor, and occupancy for those rooms.
*/

#include <iostream>
using namespace std;

int main()
{
    //variables set
    double floors;
    double rooms;
    double occ;
    double unoc;
    double percent;
    int count = 0;
    int totoc = 0;
    int roomcount = 0;
    int unoccount = 0;

    //code body
    cout << "How many floors does the hotel have?" << endl;
    cin >> floors;
    
    if (floors > 0) {//input validation
        for (int i = 0; i < floors; ++i) {//floor count logic for loop iteration
                ++count;//counter for floor number
                cout << "How many rooms does floor " << count << " have?" << endl;
                cin >> rooms;
                if (rooms > 9) {//input validation
                    cout << "How many rooms are occupied on floor " << count << "?" << endl;
                    cin >> occ;
                    totoc += occ;//total occupied room counter increase
                    roomcount += rooms;//total room counter increase
                    unoc = rooms - occ;//unoccupied rooms calculated
                    unoccount += unoc;//unoccupied room counter increase
                }
                else {
                    cout << "Invalid room count." << endl;
                    return 0;//end program
                }
        }
        percent = (occ / rooms) * 100;//percentage of rooms occupied
    }
    else {
        cout << "Invalid floor amount." << endl;
        return 0;//end program
    }

    //output
    cout << "Total occupied rooms: " << totoc << endl;
    cout << "Total unoccupied rooms: " << unoccount << endl;
    cout << "Total rooms in the hotel: " << roomcount << endl;
    cout << "Percentage of rooms occupied: " << percent << "%" << endl;
}
