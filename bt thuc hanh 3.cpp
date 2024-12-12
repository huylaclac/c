#include<stdio.h>
int main() {
    int chon;
     float sotien, ketqua;
     float usd_to_vnd = 23500;
     float eur_to_vnd = 25000;
     float gpb_to_vnd = 28000;
     float jpy_to_vnd = 180;
     float vnd_to_usd = 1.0 / usd_to_vnd;
     float vnd_to_eur = 1.0 / eur_to_vnd;
     float vnd_to_gpb = 1.0 / gpb_to_vnd;
     float vnd_to_jpy = 1.0 / jpy_to_vnd;
    printf("============= chuong trinh chuyen doi tien te =============\n");
    printf("1, usd to vnd\n");
    printf("2, eur to vnd\n");
    printf("3, gpb to vnd\n");
    printf("4, jpy to vnd\n");
    printf("5, vnd to usd\n");
    printf("6, vnd to eur\n");
    printf("7, vnd to gpb\n");
    printf("8, vnd to jpy\n");
    printf("loai tien ban muon doi (1 den 8): ");
    scanf("%d", &chon);
    printf("so tien ban muon doi: ");
    scanf("%f", &sotien);
    switch(chon) {
        case 1: 
            ketqua = sotien * usd_to_vnd;
            printf("%.2fusd%.2fvnd\n", sotien, ketqua);
            break;
        case 2: 
            ketqua = sotien * eur_to_vnd;
            printf("%.2feur=%.2fvnd\n", sotien, ketqua);
            break;
        case 3: 
            ketqua = sotien * gpb_to_vnd;
            printf("%.2fgpb=%.2fvnd\n", sotien, ketqua);
            break;
        case 4: 
             ketqua = sotien * jpy_to_vnd;
            printf("%.2fjpy=%.2fvnd\n", sotien, ketqua);
            break;
        case 5: 
             ketqua = sotien * vnd_to_usd;
            printf("%.2fvnd=%.2fusd\n", sotien, ketqua);
            break;
        case 6: 
             ketqua = sotien * vnd_to_eur;
            printf("%.2fvnd=%.2feur\n", sotien, ketqua);
            break;
        case 7: 
             ketqua = sotien * vnd_to_gpb;
            printf("%.2fvnd=%.2fgpb\n", sotien, ketqua);
            break;
        case 8: 
             ketqua = sotien * vnd_to_jpy;
            printf("%.2fvmd= %.2fjpy\n", sotien, ketqua);
            break;      
    }

    return 0;
}
