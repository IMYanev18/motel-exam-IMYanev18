#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ROOM_PRICING
{
    int singleRoomPrice;
    int doubleRoomPrice;
    int maisonettePrice;

};

class Motel
{
public:

    ROOM_PRICING getRoomPricing()
    {
        ROOM_PRICING pric;
        pric.singleRoomPrice = 50;
        pric.doubleRoomPrice = 90;
        pric.maisonettePrice = 135;
        return pric;        
    }


    string rentRoom(string clientName,string roomType,int numberOfNights)
    {
        cin >> clientName;
        cin >> roomType;
        cin >> numberOfNights;
    }


    string checkOut(int bookingNumber)
    {

    }

    Motel(string name, int capacity)
    {
        double singleRoomPrice;
        double doubleRoomPrice;
        double maisonettePrice;
    }



private:
    string name;
    int capacity;
    vector<int> bookings;
    int currentBookingNumber = 1;
    int singleRooms = 40;
    int doubleRooms = 40;
    int maisonette = 20;
};


int main()
{
    
}
