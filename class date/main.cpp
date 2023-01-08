#include <iostream>
#include "date.h"

//#define INCREMENT_AND_DECREMENT_OPERATOR
//#define EQUAL_OPERATOR
//#define NOT_EQUAL_OPERATOR
//#define GREATER_OPERATOR
//#define LESS_OPERATOR
//#define ASSIGNMENT_OPERATORS
//#define PARENTHESIS_OPERATOR

int main()
{
    setlocale(LC_ALL, "rus");


///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР++

#ifdef INCREMENT_AND_DECREMENT_OPERATOR

    std::cout << "###########################" << std::endl << "\tОПЕРАТОРЫ++--\t" << std::endl << "###########################" << std::endl;

    Date date_for_increment_and_decrement_operator_1(14, 12, 2022);
    Date date_for_increment_and_decrement_operator_2(8, 7, 2025);

    std::cout << "Исходная дата один: " << date_for_increment_and_decrement_operator_1;
    std::cout << "Исходная дата два: " << date_for_increment_and_decrement_operator_2 << std::endl;

    std::cout << "Дата один++: " << date_for_increment_and_decrement_operator_1++;
    std::cout << "Дата два--: " << date_for_increment_and_decrement_operator_2--;

    std::cout << "Дата один: " << date_for_increment_and_decrement_operator_1;
    std::cout << "Дата два: " << date_for_increment_and_decrement_operator_2 << std::endl;


    // ++ОПЕРАТОР

    std::cout << "++Дата один: " << ++date_for_increment_and_decrement_operator_1;
    std::cout << "--Дата два: " << --date_for_increment_and_decrement_operator_2 << std::endl;

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР!=

#ifdef NOT_EQUAL_OPERATOR

    std::cout << std::endl << "###########################" << std::endl << "\tОПЕРАТОР!=\t" << std::endl << "###########################" << std::endl;

    Date date_for_not_equal_operator_1(14, 12, 2022);
    Date date_for_not_equal_operator_2(8, 7, 2025);

    std::cout << "Исходная дата один: " << date_for_not_equal_operator_1;
    std::cout << "Исходная дата два: " << date_for_not_equal_operator_2 << std::endl;

    if (date_for_not_equal_operator_1 != date_for_not_equal_operator_2)
    {
        std::cout << "Даты не равны" << std::endl;
    }
    else
    {
        std::cout << "Даты равны" << std::endl;
    }
    std::cout << std::endl;


    Date date_1_copy; 
    date_1_copy = date_for_not_equal_operator_1; // оператор= 


    std::cout << "Исходная дата один: " << date_for_not_equal_operator_1;
    std::cout << "Исходная дата один копия: " << date_1_copy << std::endl;

    if (date_for_not_equal_operator_1 != date_1_copy)
    {
        std::cout << "Даты не равны" << std::endl;
    }
    else
    {
        std::cout << "Даты равны" << std::endl;
    }

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР==

#ifdef EQUAL_OPERATOR

    std::cout << std::endl << "###########################" << std::endl << "\tОПЕРАТОР==\t" << std::endl << "###########################" << std::endl;

    Date date_for_equal_operator_1(14, 12, 2022);
    Date date_for_equal_operator_2(8, 7, 2025);

    std::cout << "Исходная дата один: " << date_for_equal_operator_1;
    std::cout << "Исходная дата два: " << date_for_equal_operator_2 << std::endl;

    if (date_for_equal_operator_1 == date_for_equal_operator_2) // ДАТЫ НЕ РАВНЫ
    {
        std::cout << "Даты равны" << std::endl;
    }
    else
    {
        std::cout << "Даты не равны" << std::endl;
    }
    std::cout << std::endl;


    std::cout << "Исходная дата один: " << date_for_equal_operator_1;
    std::cout << "Исходная дата один копия: " << date_1_copy << std::endl;

    if (date_for_equal_operator_1 != date_1_copy) // ДАТЫ РАВНЫ
    {
        std::cout << "Даты не равны" << std::endl;
    }
    else
    {
        std::cout << "Даты равны" << std::endl;
    }

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР> 

#ifdef GREATER_OPERATOR

    std::cout << std::endl << "###########################" << std::endl << "\tОПЕРАТОР>\t" << std::endl << "###########################" << std::endl;

    Date date_for_greater_operator_1(14, 12, 2022);
    Date date_for_greater_operator_2(8, 7, 2025);

    std::cout << "Исходная дата один: " << date_for_greater_operator_1;
    std::cout << "Исходная дата два: " << date_for_greater_operator_2 << std::endl;

    if (date_for_greater_operator_1 > date_for_greater_operator_2) // ДАТА МЕНЬШЕ
    {
        std::cout << "Дата больше " << std::endl;
    }
    else
    {
        std::cout << "Дата меньше или они равны" << std::endl;
    }
    std::cout << std::endl;


    if (date_for_greater_operator_2 > date_for_greater_operator_1) // ДАТА БОЛЬШЕ
    {
        std::cout << "Дата больше" << std::endl;
    }
    else
    {
        std::cout << "Дата меньше или они равны" << std::endl;
    }
    std::cout << std::endl;

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР<

#ifdef LESS_OPERATOR

    std::cout << std::endl << "###########################" << std::endl << "\tОПЕРАТОР<\t" << std::endl << "###########################" << std::endl;

    Date date_for_less_operator_1(14, 12, 2022);
    Date date_for_less_operator_2(8, 7, 2025);

    std::cout << "Исходная дата один: " << date_for_less_operator_1;
    std::cout << "Исходная дата два: " << date_for_less_operator_2 << std::endl;

    if (date_for_less_operator_1 < date_for_less_operator_2) // ДАТА МЕНЬШЕ
    {
        std::cout << "Дата меньше" << std::endl;
    }
    else
    {
        std::cout << "Дата больше или они равны" << std::endl;
    }
    std::cout << std::endl;


    if (date_for_less_operator_2 < date_for_less_operator_1) // ДАТА БОЛЬШЕ
    {
        std::cout << "Дата меньше" << std::endl;
    }
    else
    {
        std::cout << "Дата больше или они равны" << std::endl;
    }
    std::cout << std::endl;

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР+=

#ifdef ASSIGNMENT_OPERATORS

    std::cout << std::endl << "###########################" << std::endl << "\tОПЕРАТОР+=\t" << std::endl << "###########################" << std::endl;

    Date date_for_addition_and_substraction_assignments_operator_1(14, 12, 2022);
    Date date_for_addition_and_substraction_assignments_operator_2(8, 7, 2025);

    std::cout << "Исходная дата один: " << date_for_addition_and_substraction_assignments_operator_1;
    std::cout << "Исходная дата два: " << date_for_addition_and_substraction_assignments_operator_2;

    Date date_2_copy = date_for_addition_and_substraction_assignments_operator_2; // конструктор копирования
    std::cout << "Дата два копия: " << date_2_copy << std::endl;

    date_2_copy += date_for_addition_and_substraction_assignments_operator_1;
    std::cout << "Дата два копия += дата один: " << date_2_copy;


    // ОПЕРАТОР -=

    date_2_copy -= date_for_addition_and_substraction_assignments_operator_2;
    std::cout << "Дата два копия -= дата два: " << date_2_copy;

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

/*************************************************************/

// ОПЕРАТОР()

#ifdef PARENTHESIS_OPERATOR

    std::cout << std::endl << "###########################" << std::endl << "\tОПЕРАТОР()\t" << std::endl << "###########################" << std::endl;

    Date date(14, 12, 2022);
    std::cout << "Исходная дата: " << date;

    date(8, 1, 2023);
    std::cout << "Изменённая дата: " << date << std::endl;

#endif

/*************************************************************/

///////////////////////////////////////////////////////////////

    
    return 0;
}
