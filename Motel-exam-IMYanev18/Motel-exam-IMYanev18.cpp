#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ROOM_PRICING
{
    int singleRoomPrice = 50;
    int doubleRoomPrice = 90;
    int maisonettePrice = 135;

};

class Motel
{
public:

    ROOM_PRICING getRoomPricing()
    {
        ROOM_PRICING pric;
        vector<ROOM_PRICING> prices;
        
    }


    string rentRoom(string clientName,string roomType,int numberOfNights)
    {
        
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
