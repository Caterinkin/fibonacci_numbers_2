#include <iostream>

// Рекурсивная функция для вычисления n-го числа Фибоначчи
long long fibonacci(int n)
{
    // Базовый случай: если n равно 0 или 1, возвращаем n
    if (n <= 1)
    {
        return n;
    }
    // Рекурсивный случай: возвращаем сумму двух предыдущих чисел Фибоначчи
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    // Вычисляем и выводим результат
    std::cout << "Число Фибоначчи под номером " << n << " равно " << fibonacci(n) << std::endl;

    return EXIT_SUCCESS;
}