#include <stdio.h>

int main(){
    int lempar_dadu, lokasi = 0, hasil_dadu;
    scanf("%d\n", &lempar_dadu);

    for (int i = 0; i < lempar_dadu; i++){
        scanf("%d", &hasil_dadu);
        lokasi = lokasi + hasil_dadu;
        switch (lokasi){
            case 9:
                lokasi = 21;
                break;
            case 33:
                lokasi = 42;
                break;
            case 76:
                lokasi = 92;
                break;
            case 53:
                lokasi = 37;
                break;
            case 80:
                lokasi = 59;
                break;
            case 97:
                lokasi = 88;
                break;
        }
    }
    printf("%d\n", lokasi);
}