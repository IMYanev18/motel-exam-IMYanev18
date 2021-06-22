#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ROOM_PRICING
{
    float singleRoomPrice = 50;
    float doubleRoomPrice = 90;
    float maisonettePrice = 135;

};

class Motel
{
public:

    ROOM_PRICING getRoomPricing()
    {
        ROOM_PRICING roomPrice;

        return roomPrice;
    }


    string rentRoom(string clientName,string roomType,int numberOfNights)
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
    int singleRooms;
    int doubleRooms;
    int maisonette;
};


int main()
{
    
}
