#include<iostream>

using namespace std;

int main() {


	srand(time(0));

	int rastgeleSayi = rand() % 100 + 1;
	int tahmin;
	int adim = 0;


	std::cout << "Sesli sayi oyununa hosgeldiniz!\n";
	std::cout << "1 ile 100 arasinda bir sayi tahmin ediniz\n";



	do {

		std::cout << "tahmininizi giriniz: ";
		std::cin >> tahmin;

		adim++;

		if (tahmin > rastgeleSayi) {

			std::cout << "Daha kucuk bir sayi giriniz!\n";

		}

		else if (tahmin < rastgeleSayi) {

			std::cout << "Daha buyuk bir sayi giriniz!\n";

		}

		else {

			std::cout << "Tebrikler, dogru cevap " << tahmin << " sayisiydi!\n";
			std::cout << "bu sayiyi " << adim << " adimda tahmin ettiniz\n";

		}
		
	} while (tahmin != rastgeleSayi);

	return 0;

}