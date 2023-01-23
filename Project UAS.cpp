#include <iostream>
using namespace std;

struct rincian{
    string judul;
    string nama;
    string kelas;
    string prodi;
    unsigned int nim;
};

void nama_tugas (){
    cout << "=============================================\n";
    cout << "   APLIKASI PEMBAYARAN TAGIHAN LISTRIK PLN   \n";
    cout << "=============================================\n";
    cout << endl;

}

int main (){
    char ulangi;
    rincian data;

    do{
        data.judul = "PROJECT ULANGAN AKHIR SEMESTER";
        data.nama  = "Tanaya Salsabila Arliansyah";
        data.nim   = 2230511040;
        data.kelas = "1 TI A";
        data.prodi = "Teknik Informatika";
        cout << "-----------------------------------------\n";
        cout << "-    " << data.judul << "\t-" << endl;
        cout << "- Nama   : " << data.nama << "\t-" << endl;
        cout << "- Nim    : " << data.nim << "\t\t\t-" << endl;
        cout << "- Kelas  : " << data.kelas << "\t\t\t-" << endl;
        cout << "- Prodi  : " << data.prodi << "\t\t-" << endl;
        cout << "-----------------------------------------\n";
        cout << endl;

    nama_tugas();
    unsigned int nomor, bulan1, bulan2, pilih, total, ppn, nominal;
    string nama2, tarif;
    const int admin = 2000;

    cout << " > Info Pelanggan\n";
    cout << endl;

        cout << "* Masukan ID Pelanggan / No. Meter\t: ";
            cin >> nomor;
        cout << "* Nama Pelanggan\t\t\t: ";
            cin >> nama2;
        cout << "* tarif\t\t\t\t\t: ";
            cin >> tarif;
        cout << "* Meter listrik Bulan 1 \t\t: ";
            cin >> bulan1;
        cout << "* Meter Listrik Bulan 2 \t\t: ";
            cin >> bulan2;

        system ("CLS");
    cout << endl;

    cout <<"==============================================\n";
    cout << endl;
    cout << " > RIWAYAT METERAN LISTRIK\n";
    cout << endl;

    cout << "* Pemakaian Bulan 1 : " << bulan1 << endl;
    cout << "* Pemakaian Bulan 2 : " << bulan2 << endl;
    cout << endl;
    cout <<"==============================================\n";
    cout << endl;

    cout << " > INFORMASI PEMBAYARAN TAGIHAN PLN \n";
    cout << endl;

    unsigned int jumlah_pemakaian, jumlah_terpakai, bayar_biaya;

    cout << "* Nomor ID Pelanggan / No. Meter \t: " << nomor << endl;
    cout << "* Nama \t\t\t\t\t: " << nama2 << endl;
    cout << "* Tarif \t\t\t\t: " << tarif << endl;
    cout << "* Meter Bulan ke 1 \t\t\t: " << bulan1 << endl;
    cout << "* Meter Bulan ke 2 \t\t\t: " << bulan2 << endl;

    jumlah_pemakaian = bulan1 - bulan2;
    cout << "* Besar Pemakaian \t\t\t: " << jumlah_pemakaian << " kWh" << endl;

    if (jumlah_pemakaian){
        jumlah_terpakai = jumlah_pemakaian - 15;
        bayar_biaya = jumlah_terpakai * 1500;
        cout << "* Biaya Bulan Sekarang \t\t\t: Rp. " << bayar_biaya << endl;
    }
    else if (jumlah_pemakaian <= 15 && jumlah_pemakaian <= 0){
        bayar_biaya = 2000;
        cout << "* Biaya Bulan Sekarang \t\t\t: Rp. " << bayar_biaya <<endl;
    }

    cout << "* Admin \t\t\t\t: Rp. " << admin << endl;

    //Kemudian jika pembayaran terkena pajak
    if (jumlah_pemakaian > 500){
        ppn = 20000;
        cout << "* Biaya PPN \t\t\t\t: Rp. " << ppn << endl;
    }
    else if (jumlah_pemakaian < 500){
        ppn = 10000;
        cout << "* Biaya PPN \t\t\t\t: Rp. " << ppn << endl;
    }
    else {
        ppn = 0;
        cout << "* Biaya PPN \t\t\t\t: Rp. " << ppn <<endl;
    }

    total = bayar_biaya + admin + ppn;

    cout << "* Total Pembayaran \t\t\t: Rp. "<< total << endl;
    cout << endl;

    cout <<"==============================================\n";
    cout << endl;

    cout << "> METODE PEMBAYARAN\n";
    cout << endl;

    cout << "1. Bayar di kasir    \n";
    cout << "2. Transfer   \n";
    cout << endl;

    cout << "* Pilih : ";
    cin  >> pilih;
    cout << endl;

    switch (pilih){
        case 1:
            cout << "* Bayar di kasir \n";
            cout << "* Total Tagihan \t\t: Rp. " << total << endl;
            cout << "* Masukan Nominal Pembayaran \t: Rp. ";
            cin  >> nominal;
            cout << "* Kembalian \t\t\t: Rp. " << nominal - total << endl;
            cout << endl;
            cout << "Berhasil!! Terimakasih telah membayar listrik tepat waktu.\n";
            cout << endl;

            cout << "Kembali ke menu utama (y) / Selesai (t)? : ";
            cin  >> ulangi;

                system ("CLS");

        break;

        case 2:
            cout << "Transfer \n";
            cout << "Total Tagihan  \t\t\t: Rp. " << total << endl;
            cout << "Masukan Nominal Pembayaran \t: Rp. ";
            cin  >> nominal;
            cout << "Kembalian  \t\t\t: Rp. " << nominal - total << endl;
            cout << endl;
            cout << "Berhasil!! Terimakasih telah membayar listrik tepat waktu.\n";
            cout << endl;

            cout << "Kembali ke menu utama (y) / Selesai (t)? : ";
            cin  >> ulangi;

                system ("CLS");

        break;

        default:
            cout << "Maaf!! Metode Pembayaran yang anda pilih tidak tersedia.\n";
            cout << endl;

            cout << "Kembali ke menu utama (y) / Selesai (t)? : ";
            cin  >> ulangi;

                system ("CLS");

        break;
    }
    }
    while (ulangi == 'y');

    string selesai [1] = {"PROGRAM SELESAI!!<3"};
    for (int b = 0; b < 3; b++){
    cout << selesai [0] << endl;
    }
    return 0;
}
