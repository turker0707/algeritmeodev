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
        printf("Kullanýcý adýný giriniz: ");
        scanf("%s", kullaniciAdi);
        printf("Þifrenizi giriniz: ");
        scanf("%s", sifre);

        if (strcmp(kullaniciAdi, DogruKullaniciAdi) == 0 && strcmp(sifre, DogruSifre) == 0) {
            printf("Giriþ baþarýlý.\n");
            return 1;
        } else {
            girisHakki--;
            printf("Hatalý deneme. Kalan hakkýnýz %d\n", girisHakki);
        }
    }

    printf("Giriþ hakkýnýz bitti. Program kapatýlýyor.\n");
    return 0;
}

int main() {
    setlocale(LC_ALL, "Turkish");
    if (!kullaniciGirisi()) {
        return 0;
    }

    int buton, secim, oyuncuNo;
    printf("\nFutbolcu lisansý yüklemek için 1\n");
    printf("Mevcut futbolcularý incelemek için 2 tuþuna basýnýz\nOyuncularýnýza gelen teklifleri görmek için 3 basiniz:\n");
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
            printf("Oyuncu eklemek için 1'e basýnýz, çýkmak için 0'a basýnýz: ");
            scanf("%d", &oyuncuEkle);

            if (oyuncuEkle == 1) {
            	 printf("Oyuncunun no sunu  giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].no);
                
                 printf("Oyuncunun isim giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].isim);
                
                 printf("Oyuncunun takým giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].takim);
                
                 printf("Oyuncunun mevki giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].mevki);
                
                 printf("Oyuncunun kullandýðý ayaðýný giriniz: ");
                scanf("%s", &oyuncuListesi[toplamOyuncuSayisi].ayak);
                
                  printf("Oyuncunun boyunu giriniz: ");
                scanf("%d", &oyuncuListesi[toplamOyuncuSayisi].boy);

                printf("Oyuncunun yaþýný giriniz: ");
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
                printf("  takým: %s \n", oyuncuListesi[i].takim);
                printf("  mevki: %s \n", oyuncuListesi[i].mevki);
                printf("  ayak: %s cm\n", oyuncuListesi[i].ayak);
                printf("  Boy: %d cm\n", oyuncuListesi[i].boy);
                printf("  Yaþ: %d\n", oyuncuListesi[i].yas);
                printf("  Kilo: %d kg\n", oyuncuListesi[i].kilo);
                 printf("  bonservis: %d M £\n", oyuncuListesi[i].bonservis);
            }
        }
    }
    else if (buton == 2) {
    	printf("\noyuncu no:1\n");
    	printf("isim:Gabriel Sara\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:orta saha\n");
    	printf("ayak:sol\n");
    	printf("yaþ:25\n");
    	printf("boy:1.77 m\n");
    	printf("bonservis:40m £\n");
    	
    	
    	printf("\noyuncu no:2\n");
    	printf("isim:Nelsson\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:stoper \n");
    	printf("ayak:sað\n");
    	printf("yaþ:27\n");
    	printf("boy:1.86 m\n");
    	printf("bonservis:14m £\n");
    	
    	
    	
    	
    	printf("\noyuncu no:3\n");
    	printf("isim:jelert\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:sað bek\n");
    	printf("ayak:sað\n");
    	printf("yaþ:22\n");
    	printf("boy:1.71 m\n");
    	printf("bonservis:12m £\n");
    	
    	
    	
    	printf("\noyuncu no:4\n");
    	printf("isim:Ziyech\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:sað kanat\n");
    	printf("ayak:sol\n");
    	printf("yaþ:32\n");
    	printf("boy:1.77 m\n");
    	printf("bonservis:2m £\n");
    	
    	
    	
    	printf("\noyuncu no:5\n");
    	printf("isim:Osimhen\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:forvet\n");
    	printf("ayak:sað\n");
    	printf("yaþ:25\n");
    	printf("boy:1.5 m\n");
    	printf("bonservis:999m £\n");
    	
    	
    	
    	printf("\noyuncu no:6\n");
    	printf("isim:Gabriel Sara\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:orta saha\n");
    	printf("ayak:sol\n");
    	printf("yaþ:25\n");
    	printf("boy:1.77 m\n");
    	printf("bonservis:40m £\n");
    	
    	
    	
    		printf("\noyuncu no:7\n");
    	printf("isim:Recep Ceviz\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki: stoper\n");
    	printf("ayak:sað\n");
    	printf("yaþ:31\n");
    	printf("boy:1.79 m\n");
    	printf("bonservis:100m £\n");
    	
    	
    		printf("\noyuncu no:6\n");
    	printf("isim:Berat Türker Yakþi\n");
    	printf("takým:Galatasaray\n");
    	printf("mevki:orta saha\n");
    	printf("ayak:sað\n");
    	printf("yaþ:19\n");
    	printf("boy:1.72 m\n");
    	printf("bonservis:0m £\n");
    	
        printf("\n\n\n\nMevcut oyunculara teklif vermek için 1, çýkmak için 2 basýnýz: \n");
        scanf("%d", &secim);

        if (secim == 1) {
        	int teklifMiktari;
            printf("Teklif vereceðiniz oyuncu numarasýný giriniz: \n");
            scanf("%d", &oyuncuNo);
            
            printf("seçtiðiniz oyuncuya vereceðiniz teklifi giriniz:\n");
            scanf("%d",&teklifMiktari);
             
        }
        
        else if (secim == 2) {
            return 0;
        }
    }
    else if (buton==3){
    	printf("TEKLÝF LÝSTESÝ:\nteklif gelen oyuncu no:4\n teklif miktari:1m £\n");
    	
    	printf("gelen teklifi kabul etmek için 1:\n reddetmek için 2:\nkarþý teklif yapmak için 3 basýnýz:\n ");
    	scanf("%d",&secim);
    	
    	if (secim==1){
    		printf("oyuncunuzun satýþý baþarýyla gerçekleþmiþtir iyi günler dileriz");
    		
		}
		
	else if(secim==2){
		printf("teklifi reddettiniz");
	}
	else if(secim==3){
		int karsiTeklifMiktari;
		printf("karþý teklif miktarýný giriniz:");
		scanf("%d",&karsiTeklifMiktari);
		printf("teklifiniz gönderildi");
	}
    	
	}
}









