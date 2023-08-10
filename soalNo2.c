#include <stdio.h>

typedef struct Pecahan{ // Membuat Typedef Struct nya, yaitu Pecahan
    int pembilang; // Variabel pembilang dideklarasi dengan tipedata Integer
    int penyebut; // Variabel penyebut dideklarasi dengan tipedata Integer
} pecahan; // pecahan typedef sebagai Interface

int FPT(int a, int b) { // Buat Fungsi FTP untuk dapat membagi habis kedua bilangan tersebut
    if (b == 0) // Jika b adalah 0
        return a; // Maka tampilkan a
    return FPT(b, a % b); // Kembalikan nilai FTP dengan b, dan a adalah sisa bagi b
} 

pecahan penyederhanaan(pecahan p) { // Membuat fungsi penyederhanaan berdasarkan struct pecahan
    int sederhana = FPT(p.pembilang, p.penyebut); // mendeklarasikan fungsi FTP sebagai int sederhana
    p.pembilang /= sederhana; // pembilang dibagi dengan nilai sederhana 
    p.penyebut /= sederhana; // Kemudian hasil baginya diassign kembali ke variabel pembilang
    return p; // kembalikan nilai p
}

int main() { // Buat fungsi utamanya
    pecahan bilangan[3]; // deklarasikan pecahan sebagai bilangan dengan array 3
    for (int i = 0; i < 3; i++){ // Perulangan untuk inputannya
        printf("(Pembilang, Penyebut) : "); // Cetak inputan
        scanf("%i",&bilangan[i].pembilang); // Mencetak dan Menyimpan value inputan pembilang
        scanf("%i",&bilangan[i].penyebut); // Mencetak dan Menyimpan value inputan penyebut
    }
    for (int i = 0; i < 3; i++){ // Perulangan untuk hasilnya
        bilangan[i] = penyederhanaan(bilangan[i]); // Panggil fungsi penyederhanaan untuk menyederhanakan angka 
        printf("Pecahan setelah disederhanakan: %d/%d\n", bilangan[i].pembilang, bilangan[i].penyebut);
        // Cetak hasil pecahannya
    }
    return 0; // Program selesai
}
