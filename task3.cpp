
#include <iostream>

struct Address {
    std::string city;
    std::string street;
    int house_number;
    int flat_number;
    int index;
};

int print(Address* p) {
    std::cout << "�����: " << p->city << std::endl;
    std::cout << "�����: " << p->street << std::endl;
    std::cout << "����� ����: " << p->house_number << std::endl;
    std::cout << "����� ��������: " << p->flat_number << std::endl;
    std::cout << "������: " << p->index << std::endl;

    return (0);
}
int main()
{
    setlocale(LC_ALL, "");

    Address* address_array = new Address[20]; // ������� ������ ����������� ���������
    std::cout << "���� ������ ������ � ���������� �����, �� �������� ����� 1 � ������� ������� Enter, ���� �� ������ ������� ����� �����, �� �������� ����� 0 � ������� ������� Enter" << std::endl;
    int a;
    std::cin >> a;
    if (a == 1) {

        std::cout << "������� ���������� �������, ������� �� ����� �������, ��� ����� ������ �������� ������ ����� � ������ ������� Enter" << std::endl;
        int i = 0;
        std::cin >> i;
        Address* address_array = new Address[i]; // ������� ������ ����������� ���������
        for (int j = 0; j < i; j++) {
            std::cout << "" << std::endl;
            std::cout << "��������� ������� �����!" << std::endl;

            std::cout << "������� �������� ������: ";
            std::cin >> address_array[j].city;
            std::cout << "������� �������� �����: ";
            std::cin >> address_array[j].street;
            std::cout << "������� ����� ����: ";
            std::cin >> address_array[j].house_number;
            std::cout << "������� ����� ��������: ";
            std::cin >> address_array[j].flat_number;
            std::cout << "������� ������: ";
            std::cin >> address_array[j].index;
            std::cout << "" << std::endl;
            print(&address_array[j]);
        }
    }
    else if ( a == 0) {
        std::cout << "�� ��������� ������� ������, �� ��������. ";
    }
    delete[] address_array;
    return 0;
}

