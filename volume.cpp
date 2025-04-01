#include <iostream>
using namespace std;

struct Distance{
	int feet;
	float inches;
};

struct Volume{
	Distance length;
	Distance width;
	Distance height;
};

int main(){
	// You can change this volume to whatever
	// you want.
	Volume room_vol = {{10,5.5},{20,9.0},{15,6.5}};
	
	float room_len = static_cast<float>(room_vol.length.feet) + (room_vol.length.inches / 12.0);
	float room_wid = static_cast<float>(room_vol.width.feet) + (room_vol.width.inches / 12.0);
	float room_hei = static_cast<float>(room_vol.height.feet) + (room_vol.height.inches / 12.0);
	
	float total_volume = room_len * room_wid * room_hei;
	
	cout << "Total volume of room is " << total_volume << " cubic feet." << endl;
	
	return 0;
}