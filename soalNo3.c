#include <stdio.h>
#include <math.h>

typedef struct coordinatTrapesium{ // Membuat Typedef Struct nya, yaitu coordinatTrapesium
    int x; // Variabel x dideklarasi dengan tipedata Integer
    int y; // Variabel y dideklarasi dengan tipedata Integer
} Trapesium; // Trapesium typedef sebagai Interface

int main(){ // Buat Fungsi Utamanya
    Trapesium A, B, C, D, E, F; // Definisikan A,B,C,D,E,F sebagai interface Trapesium 
    printf("Koordinat Titik A (x,y) : "); // Mencetak Koordinat Titik A 
    scanf("%d %d", &A.x, &A.y); // Mencetak dan Menyimpan value A dalam struct x dan y
    printf("Koordinat Titik B (x,y) : "); // Mencetak Koordinat Titik B 
    scanf("%d %d", &B.x, &B.y); // Mencetak dan Menyimpan value B dalam struct x dan y
    printf("Koordinat Titik C (x,y) : "); // Mencetak Koordinat Titik C 
    scanf("%d %d", &C.x, &C.y); // Mencetak dan Menyimpan value C dalam struct x dan y
    printf("Koordinat Titik D (x,y) : "); // Mencetak Koordinat Titik D 
    scanf("%d %d", &D.x, &D.y); // Mencetak dan Menyimpan value D dalam struct x dan y
    printf("Koordinat Titik E (x,y) : "); // Mencetak Koordinat Titik E 
    scanf("%d %d", &E.x, &E.y); // Mencetak dan Menyimpan value E dalam struct x dan y
    printf("Koordinat Titik F (x,y) : "); // Mencetak Koordinat Titik F 
    scanf("%d %d", &F.x, &F.y); // Mencetak dan Menyimpan value F dalam struct x dan y

    // Menghitung luas trapesium menggunakan rumus luas trapesium yaitu 1/2 x t(a + b)
    float luas = 0.5 * ((A.y - C.y) * ((B.x - A.x) + (F.x - E.x)));

    printf("Luas Trapesium = %.2f\n", luas); // Mencetak nilai dari float luas

    return 0; // Program selesai
}
