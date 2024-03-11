#include <iostream>
using namespace std;
int main() {
	int Thang;
	cout << "Nhap so thang:"; cin >> Thang;
	switch (Thang){
	case 1: case 3: case 5: case 7: case 8: case 10:case 12:
		cout << "Thang " << Thang << " co 31 ngay." << endl; break;
	case 4: case 6: case 9:case 11:
		cout << "Thang " << Thang << " co 30 ngay." << endl; break;
	case 2: cout << "Thang" << Thang << " co 28 hoac 29 ngay." << endl; break;
	default:cout << "Khong hop le." << endl;
		break;
	}
	return 0;
}
