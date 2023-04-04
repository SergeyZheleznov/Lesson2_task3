
#include <iostream>

struct Address {
    std::string city;
    std::string street;
    int house_number;
    int flat_number;
    int index;
};

int print(Address* p) {
    std::cout << "Город: " << p->city << std::endl;
    std::cout << "Улица: " << p->street << std::endl;
    std::cout << "Номер дома: " << p->house_number << std::endl;
    std::cout << "Номер квартиры: " << p->flat_number << std::endl;
    std::cout << "Индекс: " << p->index << std::endl;

    return (0);
}
int main()
{
    setlocale(LC_ALL, "");

    Address* address_array = new Address[20]; // создали массив экземпляров структуры
    std::cout << "Если хотите ввести с клавиатуры адрес, то наберите цифру 1 и нажмите клавишу Enter, если не хотите вводить новый адрес, то наберите цифру 0 и нажмите клавишу Enter" << std::endl;
    int a;
    std::cin >> a;
    if (a == 1) {

        std::cout << "Введите количество адресов, которые Вы будут вводить, для этого просто наберите нужное число и нажать клавишу Enter" << std::endl;
        int i = 0;
        std::cin >> i;
        Address* address_array = new Address[i]; // создали массив экземпляров структуры
        for (int j = 0; j < i; j++) {
            std::cout << "" << std::endl;
            std::cout << "Начинайте вводить адрес!" << std::endl;

            std::cout << "Введите название города: ";
            std::cin >> address_array[j].city;
            std::cout << "Введите название улицы: ";
            std::cin >> address_array[j].street;
            std::cout << "Введите номер дома: ";
            std::cin >> address_array[j].house_number;
            std::cout << "Введите номер квартиры: ";
            std::cin >> address_array[j].flat_number;
            std::cout << "Введите индекс: ";
            std::cin >> address_array[j].index;
            std::cout << "" << std::endl;
            print(&address_array[j]);
        }
    }
    else if ( a == 0) {
        std::cout << "Вы откзались вводить адреса, до свиданья. ";
    }
    delete[] address_array;
    return 0;
}

