// HomeTask11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    /*int size_1, size_2,size_3;
    int k = 0, l=0;
    cin >> size_1 >> size_2;
    if (size_1 > size_2)
    {
        size_3 = size_1;
    }
    else
        size_3 = size_2;
    

    int* array = new int [size_1];
    int* array_2 = new int[size_2];
    int* array_3 = new int[size_3];
    srand(time(0));
    for (size_t i = 0; i < size_1; i++)
    {
        array[i] = rand() % 100;
    }
    for (size_t i = 0; i < size_1; i++)
    {
        cout<<array[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < size_1; i++)
    {
        array_2[i] = rand() % 100;
    }
    for (size_t i = 0; i < size_1; i++)
    {
        cout << array_2[i] << " ";
    }
    cout << endl;




    for (size_t i = 0; i < size_1; i++)
    {
        bool tnp = false;
        for (size_t j = 0; j < size_2; j++)
        {
            if (array[i]==array_2[j])
            {
                tnp = true;
                break;
            }
        }
        if (tnp==false)
            array_3[k] = array[i];
            ++k;

    }
    
    for (size_t i = 0; i < size_3; i++)
    {
        cout << array_3[i] << " ";
    }

    delete[]array;
    delete[]array_2;
    delete[]array_3;*/

    int size_1, size_2,size_3;
    int k = 0;
    cin >> size_1 >> size_2;
    if (size_1 > size_2)
    {
        size_3 = size_1;
    }
    else
        size_3 = size_2;


    int* array = new int [size_1];
    int* array_2 = new int[size_2];
    int* array_3 = new int[size_3];
    int s = 0;
    srand(time(0));
    for (size_t i = 0; i < size_1; i++)
    {
        array[i] = rand() % 10;
    }
    for (size_t i = 0; i < size_1; i++)
    {
        cout<<array[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < size_1; i++)
    {
        array_2[i] = rand() % 10;
    }
    for (size_t i = 0; i < size_1; i++)
    {
        cout << array_2[i] << " ";
    }
    cout << endl;

    
    for (size_t i = 0; i < size_1; i++)
    {
        for (size_t j = 0; i < size_2; i++)
        {
            bool tnp = false;
            if (array[i]==array_2[j])
            {
                tnp = true;
                break;
            }
            if (tnp==false)
            {
                array_3[s] = array[i];
                ++s;
            }
        }
    }

    for (size_t i = 0; i < size_2; i++)
    {
        for (size_t j = 0; i < size_1; i++)
        {
            bool tnp = false;
            if (array_2[i] == array[j])
            {
                tnp = true;
                break;
            }
            if (tnp == false)
            {
                array_3[s] = array_2[i];
                ++s;
            }
        }
    }
    for (size_t i = 0; i < size_3; i++)
    {
        cout << array_3[i] << " ";
    }
    cout << endl;


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
