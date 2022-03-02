#include <iostream>
using namespace std;

int main() {
	int kode[] = {001, 002, 003, 004, 005};
	const char* nama_barang[] = {"Penghapus", "Buku", "Pensil", "Rautan", "Penggaris"};
	int jml[] = {4, 3, 2, 3, 5};
	int harga[] = {1000, 1500, 2000, 1000, 500};
	
	int total_item = 0;
	int total_pembelian = 0;
	int length_item = (sizeof(jml) / sizeof(*jml));
	int length_pembelian = (sizeof(harga) / sizeof(*harga));
	
	for(int i = 0; i < length_item; i++) {
 
        total_item += jml[i];
        total_pembelian += jml[i] * harga[i];
    }

	
	cout << "Jumlah Item = " << total_item << endl;
	cout << "Total Pembelian = " << total_pembelian << endl;
	
	return 0;
}
