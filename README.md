# AISD_1_Z2
#include<iostream>
using namespace std;

int main(){
    
    cout << "Enter fuel consumption of your car:" << endl;
    
    float fuelConsumption;
    cin >> fuelConsumption;
    
    cout << "Fuel consumption of your car is "<<  fuelConsumption << " l/100km\n";
	
/* 	===========================
	1. INSTRUKCJA WARUNKOWA
	===========================	
	
	Instrukcja warunkowa uzależnia wykonanie pewnego bloku kodu
	od jakiegoś warunku. 
	
	Struktura instrukcji warunkowej w języku C++ jest następująca:
	
	if (warunek) {
		linia kodu;
		linia kodu;
		linia kodu;
	}
	
	W przypadku, gdy warunek jest spełniony wszystkie linie kodu zawarte 
	w klamrach {} zostaną wykonane. W przypadku, gdy warunek nie będzie 
	spełniony, żadna z linii kodu w klamarach {} nie zostanie wykonana.
	Program jednak nie zakończy działania będzie wykonywał instrukcje, 
	które znajdują sie za klamrą zamykającą.
	
	Uwaga: jeżeli uzależniamy od pewnego warunku tylko jedną instrukcje
	to nie ma konieczności umieszczania jej w klamrze, tj. 
	
	if (warunek) 
		lini kodu;
	
	Jest to jednak bardzo ważne z punktu widzenia czytelności i ewentualnego
	poszukiwania błędów. Ten kod zadziała tak samo - ale czy zawsze po 
	dodaniu kolejnej linii kodu będziemy pamiętać o dodaniu klamry?
	Zaleca się zatem, aby stosować klamry zawsze.
	
	Przedstawiona struktura to najprostszy przypadek użycia instrukcji warunkowej,
	jednak możemy dodać jeszcze dalsze elementy tej konstrukcji.
	
	Blok kodu "else" będzie wykonany w przypadku, gdy warunek instrukcji warunkowej
	nie będzie spełniony, tj.
	
	if (warunek) {
		linia kodu w przypadku warunku spelnionego;
	}
	else {
		linia kodu w przypadku warunku niespelnionego;
	}
	
	Dalej - mamy możliwość łączenia ze sobą wielu instrukcji if..else..if..else.
	
	W poniższym przykładzie wyświetlimy komunikat,
	którego treść będzie zależna od wartości, którą wprowadził użytkownik
    na początku niniejszej funkcji main (linia 9).
	*/
    
    if (fuelConsumption > 10) {
        cout << "High fuel consumption!\n";
    }
    else if(fuelConsumption < 5) {
        cout << "Low fuel consumption!\n";
    }
    else if(fuelConsumption <= 0) {
        cout << "Wrong fuel consumption!\n";
    }
    else {
        cout << "Moderate fuel consumption!\n";
    }
	
/*	W tym przykładzie istotne jest to, że tylko jeden komunikat może być
    wyświetlony! To znaczy, że w przypadku, gdy pierwszy warunek jest
    spełniony - każdy kolejny nie będzie już nawet sprawdzany.
	
	===========================
	2. INSTRUKCJA WYBORU
	===========================	
	
	Bardzo podobne działanie uzyskać możemy przez zastosowanie 
	instrukcji wyboru "switch". W tym przykładzie uzależnimy wyświetlany 
	komunikat od litery, która wskazuje kolor.
	Jako zmienną (przełącznik) w instrukcji wyboru można wykorzystać też
	np. zmienną całkowitoliczbową.
	*/
	
    char color;
    cout << "Choose color:" << endl;
    cin >> color;
    switch (color) {
        case 'w':
            cout << "Your color is white!" << endl;
            break;
        case 'r':
            cout << "Your color is red!" << endl;
            break;
        case 'g':
            cout << "Your color is green!" << endl;
            break;
        default:
            cout << "Chosen no predefined color!" << endl;
            break;
    }
/*  Istotne jest zastosowanie instrukcji brake na końcu
    każdego przypadku. Instrukcja brake powoduje przerwanie
    wykonywania dalszego kodu instrukcji switch.
    Gdy zapomnimy o intrukcji brake każda kolejna linia
    kodu zostanie wykonana. Spróbuj w tym miejscu usunąć
    jedną z instrukcji brake i zaobserwować wpływ zmian
    na wykonywany kod.


	W celu uniknięcia problemów z nazwami zmiennych
	zaleca się stosowanie bloku kodu w każdym "przypadku" 
	instrukcji warunkowej, tj. dodanie klamry {} w następujący
	sposób:
	
	case 'w': {
		cout << "Your color is white!" << endl;
		break;
	}
	
	===========================
	3. OPERATORY MATEMATYCZNE
	===========================	
	
	W programowaniu istotną rolę pełnią operatory.
	W języku C++ operatory matematyczne są w wielu 
	przypadkach zgodne z zapisem matematycznym, dlatego 
	najprościej będzie pokazać kilka przykładów.
	*/
	float result;
	result = 1.2 + 4.2; // operacja dodawania
	result = 1.2 - 4.2; // operacja odejmowania
    result = 1.2 * 4.2; // operacja mnożenia
    result = 1.2 / 4.2; // operacja dzielenia
	
	int integerResult;
	integerResult = 5 % 2; // operacja modulo (reszta z dzielenia)
		
/*	===========================
	4. PRZYPISANIE VS. PORÓWNANIE
	===========================	
	
	Na poprzednich zajęciach wspominaliśmy o różnicy między
	operatorem przypisania "=", a operatorem porównania "==".
	W tym przykładzie sprawdzimy jak działają te dwa operatory.
	*/
    
    int firstNumber = 4;
    int secondNumber = 5;

    if(firstNumber == secondNumber) {
        cout << "We are in!" << endl;
    }
    else {
        cout << "We are out!" << endl;
    }
	
/*	Spróbuj:
		- zmienić wartości zmiennych na takie same
		- zmienić wartości zmiennych na różne
		- zmienić operator '==' na '='
		- zmienić operator '!=' 
		
	Instrukcja warunkowa działa w bardzo prosty sposób, wykonując blok 
	kodu w przypadku, gdy wartość w nawiasie jest różna od zera.
	Po przypisaniu wartości secondNumber do zmiennej firstNumber
	w warunku instrukcji warunkowej pozostaje wartość firstNumber.
	Dopóki jest ona różna od zera wykonana zostania instrukcja warunkowa.
	
    Pomyłka w kodzie polegającą na użyciu znaku "=" zamiast "==" jest
    zazwyczaj trudna do zlokalizownia.
	
	===========================
	5. RZUTOWANIE
	===========================	
	
	Rzutowanie w programowaniu to nic innego jak zmiana typu wartości.
	Rzutowanie może być jawne (wprost w kodzie widzimy operację rzutowania)
	lub niejawne (dopiero analiza danych ujawnia, że typy są zmieniane).
	
	Pokażemy to na przykładzie:
	Do zmiennej typu float zapisujemy wartość rzeczywistą:
	*/
	
	fuelConsumption = 7.7;
	
/*	Następnie wartość rzeczywistą przepisujemy do zmiennej typu int.
	Zmienna ta potrafi przechowawać jedynie wartości całkowite.
	*/
	
    firstNumber = fuelConsumption;
    cout << "firstNumber after implicit casting " << firstNumber << endl;
	
/*	W rezultacie widzimy, że utraciliśmy część inforamcji.
	Był to przykład rzutowania niejawnego.
	
	Możemy rzutować w sposób jawny, aby pokazać w kodzie, że jest to zabieg
	zamierzony. Służy do tego funkcja static_cast<typ>(), gdzie między
	znakami mniejsze większe umieszczamy docelowy typ danych.
	*/
	
	firstNumber = static_cast<int>(fuelConsumption);
    cout << "firstNumber after implicit casting " << firstNumber << endl;
    
/*	===========================
	6. INKREMENTACJA I DEKREMENTACJA
	===========================	
    
	Inkrementacja w programowaniu to nic innego jak zwiększenie wartości 
	przechowywanej w zmiennej o dokładnie 1. Jest to przydatne zwłąszcza w 
	odniesieniu do iteracyjnych operacji.
	
	Rozróżniamy dwa rodzaje inkrementacji:
		- preinkrementacja (++value) - wartość jest najpierw zwiększana,
            a później zwracana
		- postinkrementacja (value++) - wartość jest najpierw zwracana,
            a później zwiększana

	*/
	
    cout << "firstNumber before incrementation is equal " << firstNumber << endl;
    ++firstNumber;
    cout << "firstNumber after incrementation is equal " << firstNumber << endl;
	
/*	Przy najprostszym przypadku wykorzystania inkrementacji nie ma
    większego znaczenia, z którego rodzaju korzystamy, tj. w miejscach,
    gdzie w linii kodu jedyne co wykonujemy to inkrementacja. Jeżeli jednak
    wykorzystujemy od razu wartość zwracaną po operacji inkrementacji - różnica
    czy korzystamy z post- czy pre- inkrementacji jest bardzo istotna, np.
	int x = 10;
	int value_post = x++; // value_post = 10
	int value_pre = ++x; // value_post = 12
	*/
	
/*	Analogicznie działa operacja (pre- i post-) dekrementacji,
    która zmiejsza wartość przechowywaną w zmiennej o dokładnie 1.
	*/
    cout << "secondNumber before decrementation is equal " << secondNumber << endl;
    --secondNumber;
    cout << "secondNumber after decrementation is equal " << secondNumber << endl;
	
/*	===========================
	7. OPERATORY LOGICZNE
	===========================	
	
	Przy tworzeniu warunków (np. w instrukcji warunkowej) bardzo 
	przydatne są operatory logiczne:
		- and 	(&&)
		- or 	(||)
		- not 	(!)
	
	Umożliwiają one łączenie kilku warunków w jeden.
	*/
    
    if((color == 'w') and (fuelConsumption < 6)) {
        cout << "I like this white car with fuel consumption less than 6 l/100km!" << endl;
    }
	
/*	Należy uważać na stosunkowo łatwy do popełnienia błąd, gdzie zamiast
	operatorów && lub || stosujemy & lub |. Są to operatory bitowe, które
	działają w inny sposób. Ich opis działania pojawi się na dalszych
    zajęciach.
 
    Ponadto wymienić należy logiczne operatory relacji:
    - < mniejszy
    - <= mniejszy lub równy
    - > większy
    - >= większy lub równy
    */
	
/*	===========================
	8. ROZMIAR ZMIENNEJ
	===========================	
	
	Możemy sprawdzić rozmiar zmiennej w pamięci za pomocą funkcji sizeof().
	*/
	
    cout << "Size of an int is equal " << sizeof(firstNumber) << "." << endl;
    cout << "Size of a float is equal " << sizeof(fuelConsumption) << "." << endl;
    
/*  Wynik jest wyświetlany w bajtach. Warto zwrócić uwagę na to, że 
	ilość pamięci zajmowana przez dany typ zmiennej może zależeć
	od kompilatora, systemu operacyjnego i architektury komputera.
    Uruchamiająć ten sam kod za pomocą np. DevCpp, VisualStudio, itd.
    możemy uzyskać inne wyniki.
	*/
	
/*	===========================
	9. PRZEPEŁNIENIE
	===========================	
	
	Przepełnieniem nazywamy sytuacje, gdy podejmujemy próbę zapisania 
	liczby spoza zakresu obsługiwanego przez dany typ zmiennej.
	
	Przykład:
	Zmienna int jest w stanie zapisać liczbę z przedziału:
	od -2147483648 do 2147483647
	Wykraczając poza ten zakres (w wyniku celowego działania lub 
	wyniku operacji matematycznej) tracimy część informacji, która 
	po prostu nie ma "gdzie" być zapisana.
	*/
	
    firstNumber =  2147483647;
    cout << "1. The first number is equal " << firstNumber << endl;
    firstNumber =  -2147483648;
    cout << "2. The first number is equal " << firstNumber << endl;  
	
    return 0;
}
