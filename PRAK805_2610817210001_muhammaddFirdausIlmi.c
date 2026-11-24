#include <stdio.h>

struct dompet {
    char pemilik[100];
    int saldo;
};

struct transaksi {
    char jenis;
    int jumlah;
};

void topUp(struct dompet *d, int jumlah){
    d->saldo += jumlah;
    printf("Top up %d berhasil, saldo = %d\n", jumlah, d->saldo);
}

void bayar(struct dompet *d, int jumlah){
    if(d->saldo >= jumlah){
        d->saldo -= jumlah;
        printf("Bayar %d berhasil, saldo = %d\n", jumlah, d->saldo);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", jumlah);
    }
}

int main(){
    int totalTransaksi;
    struct dompet dompet1;

    scanf("%s %d", dompet1.pemilik, &dompet1.saldo);
    scanf("%d", &totalTransaksi);

    struct transaksi transaksi[totalTransaksi];

    for(int i = 0; i < totalTransaksi; i++){
        scanf(" %c %d", &transaksi[i].jenis, &transaksi[i].jumlah);
        if(transaksi[i].jenis == 'T'){
            topUp(&dompet1, transaksi[i].jumlah);
        } else if(transaksi[i].jenis == 'B'){
            bayar(&dompet1, transaksi[i].jumlah);
        }
    }

    printf("Saldo akhir %s = %d\n", dompet1.pemilik, dompet1.saldo);

    return 0;
}