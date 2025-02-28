#include <iostream>

// ����������� ������� ��� ���������� n-�� ����� ���������
long long fibonacci(int n)
{
    // ������� ������: ���� n ����� 0 ��� 1, ���������� n
    if (n <= 1)
    {
        return n;
    }
    // ����������� ������: ���������� ����� ���� ���������� ����� ���������
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    std::cout << "������� ����� ����� ���������: ";
    std::cin >> n;

    // ��������� � ������� ���������
    std::cout << "����� ��������� ��� ������� " << n << " ����� " << fibonacci(n) << std::endl;

    return EXIT_SUCCESS;
}