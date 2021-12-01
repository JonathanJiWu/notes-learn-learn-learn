//https://www.youtube.com/watch?v=8sOLjwGK_Po
#include <iostream>
using namespace std;

enum Light {
	STOP, //red
	SLOW, //yellow
	GO	//green
};

ostream& operator <<(ostream& out, const Light& light) {
	if (light == STOP) { out << "red"; }
	else if (light == SLOW) { out << "yellow"; }
	else if (light == GO) { out << "green"; }
	return out;
}

//void Display(cout)

int main() {
	Light trafficLight = STOP;

	for (int i = 0; i < 12; i++) {
		cout << "The traffic light is " << trafficLight << endl;

		if (trafficLight == STOP) {
			trafficLight = GO;
		}
		else if (trafficLight == GO) {
			trafficLight = SLOW;
		}
		else if (trafficLight == SLOW) {
			trafficLight = STOP;
		}
	}
}