#include <iostream>
using namespace std;

class bangunDatar {

private:
	float panjang, lebar;
public:
	float luas;


	void input() {
		cout << "Masukan Panjangnya= ";
		cin >> panjang;
		cout << "Masukan Lebarnya= ";
		cin >> lebar;

	}

	float hitungLuas() {
		return panjang * lebar;
	}

	void display() {
		cout << "panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << lebar << endl;
		cout << "Luasnya = " << hitungLuas() << endl;
	}
};

int main() {
	bangunDatar pp; //deklarasi objek pp dari kelas bangunDatar
	pp.input();
	pp.display();

	return 0;
}