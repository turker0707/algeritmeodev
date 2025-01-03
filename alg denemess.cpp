#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define DogruKullaniciAdi "Galatasaray"
#define DogruSifre "1905"

int kullaniciGirisi() {
    char kullaniciAdi[100], sifre[20];
    int girisHakki = 3;

    while (girisHakki > 0) {
        printf("Kullan�c� ad�n� giriniz: ");
        scanf("%s", kullaniciAdi);
        printf("�ifrenizi giriniz: ");
        scanf("%s", sifre);

        if (strcmp(kullaniciAdi, DogruKullaniciAdi) == 0 && strcmp(sifre, DogruSifre) == 0) {
            printf("Giri� ba�ar�l�.\n");
            return 1;
        } else {
            girisHakki--;
            printf("Hatal� deneme. Kalan hakk�n�z %d\n", girisHakki);
        }
    }

    printf("Giri� hakk�n�z bitti. Program kapat�l�yor.\n");
    return 0;
}

int main() {
    setlocale(LC_ALL, "Turkish");
    if (!kullaniciGirisi()) {
        return 0;
    }

    int buton, secim, oyuncuNo;
    printf("\nFutbolcu lisans� y�klemek i�in 1\n");
    printf("Mevcut futbolcular� incelemek i�in 2 tu�una bas�n�z\nOyuncular�n�za gelen teklifleri g�rmek i�in 3 basiniz:\n");
    scanf("%d", &buton);

    if (buton == 1) {
        struct Oyuncu {
            int yas, boy, kilo, no, bonservis ;
            char isim[50];
			char takim[50];
			char mevki[50]; 
			char ayak[50];
        };

        struct Oyuncu oyuncuListesi[100];
        int toplamOyuncuSayisi = 0;
        int oyuncuEkle;

        while (1) {
            printf("Oyuncu eklemek i�in 1'e bas�n�z, ��kmak i�in 0'a bas�n�z: ");
            scanf("%d", &oyuncuEkle);

            if (oyuncuEkle == 1) {
            	 printf("Oyuncunun no sunu  giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].no);
                
                 printf("Oyuncunun isim giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].isim);
                
                 printf("Oyuncunun tak�m giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].takim);
                
                 printf("Oyuncunun mevki giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].mevki);
                
                 printf("Oyuncunun kulland��� aya��n� giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].ayak);
                
                  printf("Oyuncunun boyunu giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].boy);

                printf("Oyuncunun ya��n� giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].yas);

                printf("Oyuncunun kilosunu giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].kilo);
                
                
                printf("Oyuncunun bonservisini giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].bonservis);

                toplamOyuncuSayisi++;
            } else {
                break;
            }

            // Girilen oyuncu bilgileri
            printf("\nGirilen oyuncu bilgileri:\n");
            int i;
            
            for ( i = 0; i < toplamOyuncuSayisi; i++) {
                printf("Oyuncu %d:\n", i + 1);
                printf("  no: %d \n", oyuncuListesi[i].no);
                printf("  isim: %s \n", oyuncuListesi[i].isim);
                printf("  tak�m: %s \n", oyuncuListesi[i].takim);
                printf("  mevki: %s \n", oyuncuListesi[i].mevki);
                printf("  ayak: %s cm\n", oyuncuListesi[i].ayak);
                printf("  Boy: %d cm\n", oyuncuListesi[i].boy);
                printf("  Ya�: %d\n", oyuncuListesi[i].yas);
                printf("  Kilo: %d kg\n", oyuncuListesi[i].kilo);
                 printf("  bonservis: %d M �\n", oyuncuListesi[i].bonservis);
            }
        }
    }
    else if (buton == 2) {
    	printf("\noyuncu no:1\n");
    	printf("isim:Gabriel Sara\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:orta saha\n");
    	printf("ayak:sol\n");
    	printf("ya�:25\n");
    	printf("boy:1.77 m\n");
    	printf("bonservis:40m �\n");
    	
    	
    	printf("\noyuncu no:2\n");
    	printf("isim:Nelsson\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:stoper \n");
    	printf("ayak:sa�\n");
    	printf("ya�:27\n");
    	printf("boy:1.86 m\n");
    	printf("bonservis:14m �\n");
    	
    	
    	
    	
    	printf("\noyuncu no:3\n");
    	printf("isim:jelert\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:sa� bek\n");
    	printf("ayak:sa�\n");
    	printf("ya�:22\n");
    	printf("boy:1.71 m\n");
    	printf("bonservis:12m �\n");
    	
    	
    	
    	printf("\noyuncu no:4\n");
    	printf("isim:Ziyech\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:sa� kanat\n");
    	printf("ayak:sol\n");
    	printf("ya�:32\n");
    	printf("boy:1.77 m\n");
    	printf("bonservis:2m �\n");
    	
    	
    	
    	printf("\noyuncu no:5\n");
    	printf("isim:Osimhen\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:forvet\n");
    	printf("ayak:sa�\n");
    	printf("ya�:25\n");
    	printf("boy:1.5 m\n");
    	printf("bonservis:999m �\n");
    	
    	
    	
    	printf("\noyuncu no:6\n");
    	printf("isim:Gabriel Sara\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:orta saha\n");
    	printf("ayak:sol\n");
    	printf("ya�:25\n");
    	printf("boy:1.77 m\n");
    	printf("bonservis:40m �\n");
    	
    	
    	
    		printf("\noyuncu no:7\n");
    	printf("isim:Recep Ceviz\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki: stoper\n");
    	printf("ayak:sa�\n");
    	printf("ya�:31\n");
    	printf("boy:1.79 m\n");
    	printf("bonservis:100m �\n");
    	
    	
    		printf("\noyuncu no:6\n");
    	printf("isim:Berat T�rker Yak�i\n");
    	printf("tak�m:Galatasaray\n");
    	printf("mevki:orta saha\n");
    	printf("ayak:sa�\n");
    	printf("ya�:19\n");
    	printf("boy:1.72 m\n");
    	printf("bonservis:0m �\n");
    	
        printf("\n\n\n\nMevcut oyunculara teklif vermek i�in 1, ��kmak i�in 2 bas�n�z: \n");
        scanf("%d", &secim);

        if (secim == 1) {
        	int teklifMiktari;
            printf("Teklif verece�iniz oyuncu numaras�n� giriniz: \n");
            scanf("%d", &oyuncuNo);
            
            printf("se�ti�iniz oyuncuya verece�iniz teklifi giriniz:\n");
            scanf("%d",&teklifMiktari);
             
        }
        
        else if (secim == 2) {
            return 0;
        }
    }
    else if (buton==3){
    	printf("TEKL�F L�STES�:\nteklif gelen oyuncu no:4\n teklif miktari:1m �\n");
    	
    	printf("gelen teklifi kabul etmek i�in 1:\n reddetmek i�in 2:\nkar�� teklif yapmak i�in 3 bas�n�z:\n ");
    	scanf("%d",&secim);
    	
    	if (secim==1){
    		printf("oyuncunuzun sat��� ba�ar�yla ger�ekle�mi�tir iyi g�nler dileriz");
    		
		}
		
	else if(secim==2){
		printf("teklifi reddettiniz");
	}
	else if(secim==3){
		int karsiTeklifMiktari;
		printf("kar�� teklif miktar�n� giriniz:");
		scanf("%d",&karsiTeklifMiktari);
		printf("teklifiniz g�nderildi");
	}
    	
	}
}









