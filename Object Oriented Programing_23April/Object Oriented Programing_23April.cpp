#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nama;
	int umur;
	string jurusan;


	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class matakuliah {
private:
	string kodeMK;
	string namaMK;
	int sks;

public:
	void input() {
		cout << "Kode MK: ";
		cin >> kodeMK;
		cout << "Nama MK: ";
		cin >> namaMK;
		cout << "SKS: ";
		cin >> sks;
	}
};