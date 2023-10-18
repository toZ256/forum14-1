#include <stdio.h>

int main() {
    
    FILE *ptrFile;

    // Membuka file dengan file pointer
    ptrFile = fopen("data.txt", "r");

    // Buffer untuk menyimpan string dari file
    char buffer[255];

    if(ptrFile == NULL) {
        printf("File tidak bisa dibuka!\n");
    } else {
        // While loop untuk mencetak semua baris dalam file
        while (fgets(buffer, 255, ptrFile) != NULL) {
            printf("%s", buffer);
        }
    }
    
    fclose(ptrFile);

    return 0;
}