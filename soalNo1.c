#include <stdio.h>

struct Data // Membuat Struct nya, yaitu Data
{
    char *nama; // Variabel Nama dideklarasi dengan tipedata Char
    int modal; // Variabel Modal dideklarasi dengan tipedata Integer
    int jual; // Variabel Jual dideklarasi dengan tipedata Integer
};

int margins(int jual, int modal){ // Buat fungsi untuk menghitung margin
    int margin = jual - modal; // Rumus menghitung margin
    return margin; // Kembalikan nilai hasil perhitungannya
}

int main(){ // Buat Fungsi Utamanya
    struct Data data; // Mendeklarasi struct Data sebagai data
    printf("Nama            : "); // Mencetak Nama
    fflush(stdin);gets(data.nama); // Mencetak dan Menyimpan value nama
    printf("Modal           : "); // Mencetak Modal
    scanf("%i",&data.modal); // Mencetak dan Menyimpan value modal
    printf("Jual            : "); // Mencetak Jual
    scanf("%i",&data.jual); // Mencetak dan Menyimpan value jual
    printf("Margin adalah   : %d", margins(data.jual, data.modal)); // Mencetak hasil dari fungsi margins

    return 0; // Program selesai
}
