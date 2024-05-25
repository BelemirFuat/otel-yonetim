#include <iostream>
#include <string>
#include <list>
#include <ctime>
#include <unistd.h>

class Oda
{
private:
	int odaNum;
	int yatakSayi;
	float fiyat;
	bool dolu;

public:
	Oda(int _odaNum = 0, int _yatakSayisi = 0, int _fiyat = 0, bool _dolu = false) : odaNum(_odaNum), yatakSayi(_yatakSayisi), fiyat(_fiyat), dolu(_dolu){};
	bool bosMu()
	{
		return !(this->dolu);
	}
	void rezerveEt()
	{
		if (this->dolu == false)
			this->dolu = true;
		else
			std::cout << "Bu oda dolu oldugu icin rezerve edilemiyor... \nBaska oda deneyin veya odayi derezerve edin...\nIyi gunler dileriz...\n";
	}
	void derezerveEt()
	{
		if (this->dolu == true)
			this->dolu = false;
		else
			std::cout << "Bu oda bos oldugu icin derezerve edilemiyor... \nBaska oda deneyin...\nIyi gunler dileriz...\n";
	}
	int getOdaNum()
	{
		return this->odaNum;
	}
	int getYatakSayi()
	{
		return this->yatakSayi;
	}
	float getFiyat()
	{
		return this->fiyat;
	}
	void setOdaNum(int _odaNum)
	{
		this->odaNum = _odaNum;
	}
	void setYatakSayi(int _yatakSayi)
	{
		this->yatakSayi = _yatakSayi;
	}
	void setFiyat(float _fiyat)
	{
		this->fiyat = _fiyat;
	}
	void yazdir()
	{
		std::cout << "Oda Numarasi: " << this->odaNum << std::endl;
		std::cout << "Yatak Sayisi: " << this->yatakSayi << std::endl;
		std::cout << "Fiyat: " << this->fiyat << std::endl;
		std::cout << "Rezerve Durumu: ";
		if (this->dolu == true)
			std::cout << "MUSAIT" << std::endl;
		else
			std::cout << "REZERVE" << std::endl;
	}
};

class Musteri
{
private:
	std::string ad;
	std::string soyad;
	std::string telefonNo;
	Oda odaBilgisi; // Member variable to represent room reservation
	std::string tarih;
	int gun;
	int musteriNo;

public:
	Musteri(std::string _ad = "", std::string _soyad = "", std::string _telNo = "", std::string _tarih = "", Oda _oda = Oda(0, 0, 0, false), int _gun = 0, int _musteriNo = 0) : ad(_ad), soyad(_soyad), telefonNo(_telNo), tarih(_tarih), odaBilgisi(_oda), gun(_gun), musteriNo(_musteriNo) {}

	void yazdir()
	{
		std::cout << "Musteri Numarasi: " << this->musteriNo << std::endl;
		std::cout << "Musteri Adi: " << this->ad << std::endl;
		std::cout << "Musteri Soyadi: " << this->soyad << std::endl;
		std::cout << "Musteri Telefon Numarasi: " << this->telefonNo << std::endl;
		std::cout << "Musteri Rezervasyon Tarihi: " << this->tarih << std::endl;
		std::cout << "Musteri Oda Numarasi: " << this->odaBilgisi.getOdaNum() << std::endl;
		std::cout << "Musteri Oda Yatak Sayisi: " << this->odaBilgisi.getYatakSayi() << std::endl;
		std::cout << "Musteri Oda Fiyati: " << this->odaBilgisi.getFiyat() << std::endl;
		std::cout << "Musteri Konaklama Suresi: " << this->gun << " Gun" << std::endl;
	}
	std::string getAd()
	{
		return this->ad;
	}
	std::string getSoyad()
	{
		return this->soyad;
	}
	std::string getTelNo()
	{
		return this->telefonNo;
	}
	std::string getTarih()
	{
		return this->tarih;
	}
	int getOdaNum()
	{
		return this->odaBilgisi.getOdaNum();
	}
	int getYatakSayi()
	{
		return this->odaBilgisi.getYatakSayi();
	}
	float getFiyat()
	{
		return this->odaBilgisi.getFiyat();
	}
	Oda getOda()
	{
		return this->odaBilgisi;
	}
	int getGun()
	{
		return this->gun;
	}
	void setAd(std::string _ad)
	{
		this->ad = _ad;
	}
	void setSoyad(std::string _soyad)
	{
		this->soyad = _soyad;
	}
	void setTelNo(std::string _telNo)
	{
		this->telefonNo = _telNo;
	}
	void setTarih(std::string _tarih)
	{
		this->tarih = _tarih;
	}
	void setOdaNum(int _odaNum)
	{
		this->odaBilgisi.setOdaNum(_odaNum);
	}
	void setYatakSayi(int _yatakSayi)
	{
		this->odaBilgisi.setYatakSayi(_yatakSayi);
	}
	void setFiyat(float _fiyat)
	{
		this->odaBilgisi.setFiyat(_fiyat);
	}
	void setGun(int _gun)
	{
		this->gun = _gun;
	}
	void setMusteriNo(int _musteriNo)
	{
		this->musteriNo = _musteriNo;
	}
	int getMusteriNo()
	{
		return this->musteriNo;
	}
};
class Otel
{
private:
	int odaSayisi;
	std::string otelAdi;
	int doluOdaSayi;
	int bosOdaSayi;

public:
	Otel(int _odaSayisi = 0, std::string _otelAdi = "", int _doluOdaSayi = 0, int _bosOdaSayi = 0) : odaSayisi(_odaSayisi), otelAdi(_otelAdi), doluOdaSayi(_doluOdaSayi), bosOdaSayi(_bosOdaSayi) {}
	int getOdaSayisi()
	{
		return this->odaSayisi;
	}
	void setOdaSayisi(int _odaSayisi)
	{
		this->odaSayisi = _odaSayisi;
	}
	std::string getOtelAdi()
	{
		return this->otelAdi;
	}
	void setOtelAdi(std::string _otelAdi)
	{
		this->otelAdi = _otelAdi;
	}
	int getDoluOdaSayi()
	{
		return this->doluOdaSayi;
	}
	void setDoluOdaSayi(int _doluOdaSayi)
	{
		this->doluOdaSayi = _doluOdaSayi;
	}
	int getBosOdaSayi()
	{
		return this->bosOdaSayi;
	}
	void setBosOdaSayi(int _bosOdaSayi)
	{
		this->bosOdaSayi = _bosOdaSayi;
	}
};
std::list<Musteri> musteriliste;
std::list<Oda> rezerveOdalar;
std::list<Oda> tumOdalar;
Otel otelTest(10, "Test Otel", 0, 10);
int musteriSayisi = 1;

void birNumaraliMenu();
void ikiNumaraliMenu();
void ucNumaraliMenu();
void girisMenusu();
void birBir();
void birIki();
void birUc();
void birDort(int);
void birBes();
void ikiBir();
void ikiIki();
void ikiUc();
void ikiDort();
void ucBir();
void cikisYap();
Oda odaBulbyNo(int);

Oda odaBulbyNo(int _odaNo)
{
	for (auto &it : tumOdalar)
	{
		if (it.getOdaNum() == _odaNo)
			return it;
	}
	Oda gecici(0, 0, false);
	return gecici;
}

Musteri musteriBulByNo(int _musteriNo)
{
	for(auto &it : musteriliste)
	{
		if(it.getMusteriNo()==_musteriNo)
			return it;
	}
	Musteri gecici;
	gecici.setMusteriNo(0);
}
void girisMenusu()
{
	sleep(1);
	std::cout << "1. Oda Yonetimi" << std::endl;
	std::cout << "2. Musteri Yonetimi" << std::endl;
	std::cout << "3. Fatura Olusturma" << std::endl;
	std::cout << "-1. Cikis Yapin."<<std::endl;
	int secim;
	std::cout << "Secim Yapiniz: ";
	std::cin >> secim;
	if (secim == 1)
		birNumaraliMenu();
	else if (secim == 2)
		ikiNumaraliMenu();
	else if (secim == 3)
		ucNumaraliMenu();
	else if( secim == -1)
		cikisYap();
	else
		std::cout << "Yanlis Secim Yaptiniz tekrar deneyiniz..." << std::endl;
}

void birNumaraliMenu()
{ // oda yönetimi
	sleep(1);

	std::cout << "1. Rezerve edilmis odalari goruntuleyin" << std::endl;
	std::cout << "2. Bos odalari goruntuleyin" << std::endl;
	std::cout << "3. Oteldeki oda sayisini guncelleyin" << std::endl;
	std::cout << "4. Oda Ekleyin" << std::endl;
	std::cout << "5. Tum Odalari Goruntuleyin" << std::endl;
	int secim;
	std::cout << "Secim Yapiniz: ";
	std::cin >> secim;
	if (secim == 1)
		birBir();
	else if (secim == 2)
		birIki();
	else if (secim == 3)
		birUc();
	else if (secim == 4)
		birDort(0);
	else if (secim == 5)
		birBes();
	else
		std::cout << "Yanlis Secim Yaptiniz tekrar deneyiniz..." << std::endl;
}
void ikiNumaraliMenu()
{ // musteri yonetimi
	sleep(1);

	std::cout << "1. Musterilerinzi goruntuleyin" << std::endl;
	std::cout << "2. Rezervasyon Yapin" << std::endl;
	std::cout << "3. Derezerve yapin" << std::endl;
	std::cout << "4. Rezervasyon Guncelleyin." << std::endl;
	int secim;
	std::cout << "Secim Yapiniz: ";
	std::cin >> secim;
	if (secim == 1)
		ikiBir();
	else if (secim == 2)
		ikiIki();
	else if (secim == 3)
		ikiUc();
	else if (secim == 4)
		ikiDort();
	else
		std::cout << "Yanlis Secim Yaptiniz tekrar deneyiniz..." << std::endl;
}

void ucNumaraliMenu()
{
	sleep(1);
	std::cout << "1. Fatura Kesin" << std::endl;
	ucBir();
}

void birBir()
{ // rezerve edilmis odalari goruntuleyin
	sleep(1);

	bool bulundu = false;

	for (auto &it : rezerveOdalar)
	{
		it.yazdir();
		bulundu = true;
	}
	if (bulundu == false)
		std::cout << "Bulunamadi..." << std::endl;
	std::cout << std::endl;
}

void birIki()
{ // bos odalari goruntuleyin
	sleep(1);

	if (rezerveOdalar.size() == tumOdalar.size())
		std::cout << "Bulunamadi..." << std::endl;
	else
	{
		for (auto &it : tumOdalar)
		{
			if (it.bosMu() == true)
			{
				it.yazdir();
			}
		}
	}
}
void birUc()
{ // oteldeki oda sayisini guncelleyin
	sleep(1);

	std::cout << "Mevcut Oda Sayisi: " << otelTest.getOdaSayisi() << std::endl;
	std::cout << "Yeni Oda Sayisini Giriniz: ";
	int odaSayisi;
	std::cin >> odaSayisi;
	int fark = odaSayisi - otelTest.getOdaSayisi();
	otelTest.setOdaSayisi(odaSayisi);
	if (fark < 0)
		std::cout << "Oda sayisi " << fark << " azaltilarak Guncellendi..." << std::endl;
	else if (fark > 0)
		std::cout << "Oda Sayisi " << fark << " artirilarak Guncellendi..." << std::endl;
	else
		std::cout << "Oda Sayisi Guncellenmedi..." << std::endl;
}
void birDort(int _odaNo = 0)
{
	sleep(1);

	if (_odaNo == 0)
	{
		std::cout << "Oda Numarasi Giriniz: ";
		std::cin >> _odaNo;
	}
	int geciciOdaNo = _odaNo;
	if (odaBulbyNo(geciciOdaNo).getOdaNum() != 0)

		std::cout << "Boyle bir oda zaten var!.." << std::endl;
	else
	{
		std::cout << "Yatak Sayisi Giriniz: ";
		int geciciYatakSayisi;
		std::cin >> geciciYatakSayisi;
		std::cout << "Fiyat Giriniz: ";
		int geciciFiyat;
		std::cin >> geciciFiyat;
		Oda geciciOda(geciciOdaNo, geciciYatakSayisi, geciciFiyat, false);
		tumOdalar.push_back(geciciOda);
	}
}
void birBes()
{ // tum odalari goruntule
	sleep(1);

	for (auto &it : tumOdalar)
	{
		it.yazdir();
	}
	std::cout << std::endl;
}
void ikiBir()
{ // musterileri goruntule
	sleep(1);

	if (musteriliste.empty() == true)
		std::cout << "Musteri Bulunamadi..." << std::endl;
	else
	{
		for (auto &it : musteriliste)
		{
			it.yazdir();
			it.getOda().yazdir();
		}
	}
}
void ikiIki()
{ // rezervasyon yap
	sleep(1);

	std::cout << "Musteri Adi Giriniz: ";
	std::string geciciAd;
	std::cin >> geciciAd;
	std::cout << "Musteri Soyadi Giriniz: ";
	std::string geciciSoyad;
	std::cin >> geciciSoyad;
	std::cout << "Musteri Telefon Giriniz: ";
	std::string geciciTelefon;
	std::cin >> geciciTelefon;
	std::cout << "Tarih Giriniz: ";
	std::string geciciTarih;
	std::cin >> geciciTarih;
	int geciciGun;
	std::cout << "Gun Giriniz: ";
	std::cin >> geciciGun;
	std::cout << "Oda Numarasi Giriniz: ";
	int geciciOdaNo;
	std::cin >> geciciOdaNo;
	if (odaBulbyNo(geciciOdaNo).getOdaNum() == 0)
	{

		std::cout << "Once Oda Eklemelisiniz..." << std::endl;
		std::cout << "Sizi Oda Ekleme Ekranina Yonlendiriyoruz..." << std::endl;
		birDort(geciciOdaNo);
	}
	Oda _geciciOda = odaBulbyNo(geciciOdaNo);
	Musteri _musteri(geciciAd, geciciSoyad, geciciTelefon, geciciTarih, _geciciOda, geciciGun, musteriSayisi++);

	musteriliste.push_back(_musteri);
	std::cout << "Basariyla Rezervasyon Yapildi..." << std::endl;
	std::cout << "Musteri Numarasi: " << _musteri.getMusteriNo() << std::endl;
	rezerveOdalar.push_back(_geciciOda);
}
void ikiUc()
{ // derezerve yap
	sleep(1);

	int _musteriNo;
	std::cout << "Derezerve etmek istediginiz musterinin numarasini giriniz: ";
	std::cin >> _musteriNo;
	bool bulundu = false;
	for (auto &it : musteriliste)
	{
		if (it.getMusteriNo() == _musteriNo)
		{
			Oda _gecici = it.getOda();

			bulundu = true;
			break;
		}
	}
	if (bulundu == false)
	{
		std::cout << "Bu numarali bir musteri bulunamadi... " << std::endl;
	}
}
void ikiDort()
{ // rezervasyon guncelle
}
void ucBir()
{ 
	std::cout<<"Fatura kesmek icin musteri numarasi giriniz...";
	int _musteriNo;
	std::cin>>_musteriNo;
	Musteri hedef = musteriBulByNo(_musteriNo);
	if (hedef.getMusteriNo()==0)
	{
		std::cout<<"Bu numaraya sahip bir musteri bulunamadi..."<<std::endl;
	}
	else
	{
		std::cout<<"Bulundu..."<<std::endl;
	}

}
void cikisYap()
{
	std::cout<<"Programdan cikmayi tercih ettiniz..."<<std::endl;
	std::cout<<"Iyi gunler dileriz.."<<std::endl;
	exit(1);
}
int main()
{

	while (true)
	{
		girisMenusu();
	}
}
