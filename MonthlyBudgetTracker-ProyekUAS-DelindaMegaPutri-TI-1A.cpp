#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

//*FUNGSI*//
void beranda(){
    string namaBulan;
    unsigned int jumlahBudget;

    cout << "================================================================================================" << endl;
    cout << "|                                      MONTHLY BUDGET TRACKER                                  |" << endl;
    cout << "================================================================================================" << endl;
    cout << "Bulan\t: ";
    cin >> namaBulan;
    cout << "Budget\t: ";
    cin >> jumlahBudget;
    cout << endl;
}

//*FUNGSI*//
void headTable(){
    string judulTabel[4] = {"No.", "Tanggal", "Deskripsi", "Jumlah"}; //*ARRAY*//

    cout << "| " << judulTabel[0] << setw(2);
    cout << "| " << judulTabel[1] << setw (13);
    cout << "| " << judulTabel[2] << setw (40);
    cout << "| " << judulTabel[3] << setw (14) << "|"<< endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
}

//*FUNGSI*//
void judulIncome(){
    cout << "================================================================================================" << endl;
    cout << "|                                         MONTHLY INCOME                                       |" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
}

//*STRUCT*//
struct tableIncome{
  int nomor, jumlah;
  string tanggal, deskripsi;
};

//*FUNGSI*//
void judulPengeluaran(){
    cout << "================================================================================================" << endl;
    cout << "|                                         MONTHLY EXPENSES                                     |" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
}

//*STRUCT*//
struct tableExpenses{
  int nomor, jumlah;
  string tanggal, deskripsi;
};

//*FUNGSI*//
void judulTabungan(){
    cout << "================================================================================================" << endl;
    cout << "|                                         MONTHLY SAVINGS                                      |" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
}

//*STRUCT*//
struct tableTabungan{
  int nomor, jumlah;
  string tanggal, deskripsi;
};

//*FUNGSI*//
void judulSummary(){
    cout << "================================================================================================" << endl;
    cout << "|                                         MONTHLY SUMMARY                                      |" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
}

//*FUNGSI*//
void notes(){
    cout << "================================================================================================" << endl;
    cout << "|                                              NOTES                                           |" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
}

int main(){
    char lanjut;
    do{ //*PERULANGAN*//
        beranda();
        cout << "Apakah anda ingin memulai (y/t)? ";
        cin >> lanjut;
        judulIncome();
        headTable();

        //*ISI STRUCT TABLE INCOME*//
        tableIncome income1;
        income1.nomor = 1;
        income1.tanggal = "01 Januari 2022";
        income1.deskripsi = "Uang saku";
        income1.jumlah = 1500000;

        tableIncome income2;
        income2.nomor = 2;
        income2.tanggal = "03 Januari 2022";
        income2.deskripsi = "Online bussiness";
        income2.jumlah = 2000000;

        tableIncome income3;
        income3.nomor = 3;
        income3.tanggal = "05 Januari 2022";
        income3.deskripsi = "Part time job";
        income3.jumlah = 1500000;

        cout << "| " << income1.nomor << setw(4) << "| " << income1.tanggal << setw(5) << "| " << income1.deskripsi << setw(40) << "| " << income1.jumlah << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << income2.nomor << setw(4) << "| " << income2.tanggal << setw(5) << "| " << income2.deskripsi << setw(33) << "| " << income2.jumlah << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << income3.nomor << setw(4) << "| " << income3.tanggal << setw(5) << "| " << income3.deskripsi << setw(36) << "| " << income3.jumlah << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;

        int totalIncome = income1.jumlah + income2.jumlah + income3.jumlah;
        cout << "| " << setw(74) << "Total Income | " << totalIncome << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << endl;

        cout << "Next (y/t)? ";
        cin >> lanjut;

        judulPengeluaran();

        headTable();

        //*ISI STRUCT TABLE EXPENSES*//
        tableExpenses pengeluaran1;
        pengeluaran1.nomor = 1;
        pengeluaran1.tanggal = "01-31 Januari 2022";
        pengeluaran1.deskripsi = "Transportasi";
        pengeluaran1.jumlah = 200000;

        tableExpenses pengeluaran2;
        pengeluaran2.nomor = 2;
        pengeluaran2.tanggal = "01-31 Januari 2022";
        pengeluaran2.deskripsi = "Makan dan Cemilan";
        pengeluaran2.jumlah = 1500000;

        tableExpenses pengeluaran3;
        pengeluaran3.nomor = 3;
        pengeluaran3.tanggal = "08 Januari 2022";
        pengeluaran3.deskripsi = "Skincare dan Make Up";
        pengeluaran3.jumlah = 500000;

        tableExpenses pengeluaran4;
        pengeluaran4.nomor = 4;
        pengeluaran4.tanggal = "08 Januari 2022";
        pengeluaran4.deskripsi = "Pulsa dan Wi-Fi";
        pengeluaran4.jumlah = 500000;

        tableExpenses pengeluaran5;
        pengeluaran5.nomor = 5;
        pengeluaran5.tanggal = "01-31 Januari 2022";
        pengeluaran5.deskripsi = "Hiburan, Hobby, dan Lainnya";
        pengeluaran5.jumlah = 300000;

        cout << "| " << pengeluaran1.nomor << setw(4) << "| " << pengeluaran1.tanggal << setw(2) << "| " << pengeluaran1.deskripsi << setw(37) << "| " << pengeluaran1.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << pengeluaran2.nomor << setw(4) << "| " << pengeluaran2.tanggal << setw(2) << "| " << pengeluaran2.deskripsi << setw(32) << "| " << pengeluaran2.jumlah << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << pengeluaran3.nomor << setw(4) << "| " << pengeluaran3.tanggal << setw(5) << "| " << pengeluaran3.deskripsi << setw(29) << "| " << pengeluaran3.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << pengeluaran4.nomor << setw(4) << "| " << pengeluaran4.tanggal << setw(5) << "| " << pengeluaran4.deskripsi << setw(34) << "| " << pengeluaran4.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << pengeluaran5.nomor << setw(4) << "| " << pengeluaran5.tanggal << setw(2) << "| " << pengeluaran5.deskripsi << setw(22) << "| " << pengeluaran5.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;

        int totalExpenses = pengeluaran1.jumlah + pengeluaran2.jumlah + pengeluaran3.jumlah + pengeluaran4.jumlah + pengeluaran5.jumlah;
        cout << "| " << setw(74) << "Total Expenses | " << totalExpenses << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << endl;

        cout << "Next (y/t)? ";
        cin >> lanjut;

        judulTabungan();

        headTable();

        //*ISI STRUCT TABLE TABUNGAN*//
        tableTabungan tabungan1;
        tabungan1.nomor = 1;
        tabungan1.tanggal = "11 Januari 2022";
        tabungan1.deskripsi = "Tabungan Utama";
        tabungan1.jumlah = 500000;

        tableTabungan tabungan2;
        tabungan2.nomor = 2;
        tabungan2.tanggal = "21 Januari 2022";
        tabungan2.deskripsi = "Keperluan Mendadak";
        tabungan2.jumlah = 250000;

        tableTabungan tabungan3;
        tabungan3.nomor = 3;
        tabungan3.tanggal = "31 Januari 2022";
        tabungan3.deskripsi = "Keinginan Tambahan";
        tabungan3.jumlah = 250000;

        cout << "| " << tabungan1.nomor << setw(4) << "| " << tabungan1.tanggal << setw(5) << "| " << tabungan1.deskripsi << setw(35) << "| " << tabungan1.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << tabungan2.nomor << setw(4) << "| " << tabungan2.tanggal << setw(5) << "| " << tabungan2.deskripsi << setw(31) << "| " << tabungan2.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << tabungan3.nomor << setw(4) << "| " << tabungan3.tanggal << setw(5) << "| " << tabungan3.deskripsi << setw(31) << "| " << tabungan3.jumlah << setw(14) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;

        int totalTabungan = tabungan1.jumlah + tabungan2.jumlah + tabungan3.jumlah;
        cout << "| " << setw(74) << "Total Tabungan | " << totalTabungan << setw(13) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << endl;

        cout << "Next (y/t)? ";
        cin >> lanjut;

        judulSummary();
        string headSummary[3] = {"Total Income", "Total Expenses", "Total Tabungan"}; //*ARRAY*//

        cout << "| " << headSummary[0] << setw(19);
        cout << "| " << headSummary[1] << setw (17);
        cout << "| " << headSummary[2] << setw (18) << "|"<< endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "| " << totalIncome << setw(24) << "| " << totalExpenses << setw(24) << "| " << totalTabungan << setw(25) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;

        //*TOTAL TERSISA*//
        int totalLeft = totalIncome - totalExpenses - totalTabungan;
        cout << "| " << setw(62) << "Total Left | " << totalLeft << setw(25) << "|" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << endl;

        cout << "Next (y/t)? ";
        cin >> lanjut;

        notes();
        if(totalLeft >= 0){
            cout << "| Selamat! Anda berhasil menyimpan lebih banyak uang di bulan ini ;)" << setw(28) << "|" << endl;
        }else{
            cout << "| Sayang sekali, uang anda tidak tersisa di bulan ini :(" << setw(40) << "|" << endl;
        }
        cout << "------------------------------------------------------------------------------------------------" << endl;
        break;
    }while (lanjut=='y');
return 0;
}
