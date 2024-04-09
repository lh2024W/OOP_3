// OOP_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Elektric_Kettle {
    string brand;//бренд
    string model;//модель
    string color;//цвет
    int price;//цена

public:
    void SetBrand(string brand) {
       this -> brand = brand;
    }

    void SetModel(string model) {
        this -> model = model;
    }

    void SetColor(string color) {
        this -> color = color;
    }

    void SetPrice(int price) {
        if (price != 0)
            this -> price = price;
    }

    string GetBrand() const{
        return brand;
    }

    string GetModel() const {
        return model;
    }

    string GetColor() const {
        return color;
    }

    int GetPrice() const {
        return price;
    }

    void PrintPriceColor(int price, string color) const {
        cout << "Price: " << price << "\nColor: " << color << "\n\n";
    }

    void PrintBrandModel(string brand, string model) const {
        cout << "Brand: " << brand << "\nModel: " << model << "\n\n";
    }

    void Price(int price) const {
        if (price < 3000) {
            cout << "Cheap kettle!" << price << "\n\n";
        }
        else
            cout << "Expensive kettle!" << price << "\n\n";
    }
};

class Book {
    string author;//автор
    string name;//название книги
    string genre;//жанр
    int year;//год выпуска
    int count_page;//количество страниц

public:
    void SetAuthor(string author) {
        this -> author = author;
    }

    void SetName(string name) {
        this -> name = name;
    }

    void SetGenre(string genre) {
        this -> genre = genre;
    }

    void SetYear(int year) {
        if (year != 0 && year < 2025)
            this -> year = year;
    }

    void SetCount_page(int count_page) {
        if (count_page != 0)
            this -> count_page = count_page;
    }

    string GetAuthor() const {
        return author;
    }

    string GetName() const {
        return name;
    }

    string GetGenre() const {
        return genre;
    }

    int GetYear() const {
        return year;
    }

    int GetCount_page() const {
        return count_page;
    }
    void PrintBook(string author, string name, string genre) const {
        cout << "Author: " << author << "\nName: " << name << "\nGenre: " << genre << "\n\n";
    }

    void PrintCountPageYear(string name, int count_page, int year) const {
        cout << "Name: " << name << "\nCount page: " << count_page << "\nYear: " << year << "\n\n";
    }

    void Year(int year) const {
        if (year > 2000) {
            cout << "New book!" << year << "\n\n";
        }
        else
            cout << "Old book!" << year << "\n\n";
    }
};

class Pen {
    string color;//цвет
    string brand;//бренд
    bool write;//пишет? да\нет

public:
    void SetColor(string color) {
        if (color != "White")
            this -> color = color;
    }

    void SetBrand(string brand) {
        this -> brand = brand;
    }

    void SetWrite(bool write) {
        this -> write = write;
    }

    string GetColor() const {
        return color;
    }

    string GetBrand() const {
        return brand;
    }

    bool GetWrite() const {
        return write;
    }
    void LeaveOrThrowAway(bool write) const {
        if (write = true) {
            cout << "Leave this pen!" << "\n\n";
        }
        else
            cout << "Throw away this pen!" << "\n\n";
    }

    void Print() const {
        cout << brand << " " << color << "\n\n";
    }
};

class Banknote {
    int denomination;//номинал купюры
    string year;//год выпуска
    bool old_new;//потрепанная да\нет

public:
    void SetDenomination(int denomination) {
        if (denomination != 0)
            this -> denomination = denomination;
    }

    void SetYear(string year) {
        this -> year = year;
    }

    void SetOld_new(bool old_new) {
        this->old_new = old_new;
    }

    int GetDenomination() const {
        return denomination;
    }

    string GetYear() const {
        return year;
    }

    bool GetOld_new() const {
        return old_new;
    }
    void Print() const {
        cout << "Banknote: " << denomination << " grn." << "\n" << year << "Year of release" << "\n\n";
    }

    void TakeOrChange(bool old_new) const {
        if (old_new = true) {
            cout << "Take this banknote!" << "\n\n";
        }
        else
            cout << "Change this banknote!" << "\n\n";
    }
};

class Wallet {
    string brand;//бренд
    string price;//цена
    string color;//цвет
    bool coin_box;//отдел для монет да\нет
    int count_section;//количество отделений
    int count_card_sections;// количество денег

public:
    void SetBrand(string brand) {
        this->brand = brand;
    }

    void SetPrice(string price) {
        if (price != "0" && price != "00" && price != "000" && price != "0000")
            this->price = price;
    }

    void SetColor(string color) {
        this->color = color;
    }

    void SetCoin_box(bool coin_box) {
        this->coin_box = coin_box;
    }

    void SetCount_section(bool count_section) {
        this->count_section = count_section;
    }

    void SetCount_card_sections(int count_card_sections) {
        if (count_card_sections != 0 && count_card_sections < 10)
            this->count_card_sections = count_card_sections;
    }

    string GetBrand() const {
        return brand;
    }

    string GetPrice() const {
        return price;
    }

    string GetColor() const {
        return color;
    }

    bool GetCoin_box() const {
        return coin_box;
    }

    bool GetCount_section() const {
        return count_section;
    }

    int GetCount_card_sections() const {
        return count_card_sections;
    }

    void Print() const {
        cout << "Wallet \n";
        cout << "Brand: " << brand << "\nColor: " << color << "\nPrice : " << price << "\n\n";
    }

    void BayWallet(int count_card_sections, bool coin_box, string price) const {
        if ((count_card_sections == 3) && (coin_box = true)) {
            cout << "Price: " << price << "\n";
        }
        else
            cout << "This wallet is not available!" << "\n";
    }

};

int main()
{
    Elektric_Kettle k;

    k.SetBrand("Philips");
    k.SetModel("4569tt");
    k.SetColor("White");
    k.SetPrice(3600);

    cout << k.GetBrand() << "\n";
    cout << k.GetModel() << "\n";
    cout << k.GetColor() << "\n";
    cout << k.GetPrice() << "\n";

    k.PrintPriceColor(2500, "blue");
    k.PrintBrandModel("Tefal", "1025R");
    k.Price(3000);


    Book b;

    b.SetAuthor("Theodore Dreiser");
    b.SetCount_page(456);
    b.SetGenre("novel");
    b.SetName("Financier");
    b.SetYear(1912);

    cout << b.GetAuthor() << "\n";
    cout << b.GetCount_page() << "\n";
    cout << b.GetGenre() << "\n";
    cout << b.GetName() << "\n";
    cout << b.GetYear() << "\n";

    b.PrintBook("Stephen Prata", "C++", "Science fiction");
    b.PrintCountPageYear("Three people in the boat, not counting the dog", 250, 1889);
    b.Year(1997);


    Pen p;

    p.SetBrand("Bic");
    p.SetColor("black");
    p.SetWrite(false);

    cout << p.GetBrand() << "\n";
    cout << p.GetColor() << "\n";
    cout << p.GetWrite() << "\n";

    p.LeaveOrThrowAway(true);
    p.Print();


    Banknote B;

    B.SetDenomination(50);
    B.SetOld_new(true);
    B.SetYear("2003");

    cout << B.GetDenomination() << "\n";
    cout << B.GetOld_new() << "\n";
    cout << B.GetYear() << "\n";

    B.Print();
    B.TakeOrChange(true);

    Wallet w;

    w.SetBrand("Wiola");
    w.SetPrice("500");
    w.SetCoin_box(true);
    w.SetColor("red");
    w.SetCount_card_sections(3);
    w.SetCount_section(2);

    cout << w.GetBrand() << "\n";
    cout << w.GetPrice() << "\n";
    cout << w.GetCoin_box() << "\n";
    cout << w.GetColor() << "\n";
    cout << w.GetCount_card_sections() << "\n";
    cout << w.GetCount_section() << "\n";

    w.Print();
    w.BayWallet(3, false, "300");

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
