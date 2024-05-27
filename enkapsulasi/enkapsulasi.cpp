

#include <iostream>
using namespace std;

class remoteLampu {
private:
	string sakLarNo[10];
public:
	void setSaklarNo(int i, string value) {
		sakLarNo[i] = value;
	}
	string getSakLarNo(int i) {
		return sakLarNo[i];
	}
};



int main()
{
	remoteLampu lampuRumah;

	lampuRumah.setSaklarNo(0, "lampu Teras Rumah");
	lampuRumah.setSaklarNo(1, "lampu Ruang Tamu");
	lampuRumah.setSaklarNo(2, "lampu Kamar Tidur");
	lampuRumah.setSaklarNo(3, "lampu Dapur");

	cout << lampuRumah.getSakLarNo(0) << endl;
	cout << lampuRumah.getSakLarNo(1) << endl;
	cout << lampuRumah.getSakLarNo(2) << endl;
	cout << lampuRumah.getSakLarNo(3) << endl;

	return 0;
}


