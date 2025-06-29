// MultiplicateMatrixLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "MultiplicateMatrix.h"

// TODO: Это пример библиотечной функции.

    int** MultiplicateMatrixLib(int** matrix, int columns, int rows, int multi)
    {
        if (!matrix || columns <= 0 || rows <= 0) return nullptr; // Проверка входных данных

        int** result = new int* [rows]; // Выделяем память под строки
        for (int i = 0; i < rows; ++i) {
            result[i] = new int[columns]; // Выделяем память под столбцы
            for (int j = 0; j < columns; ++j) {
                result[i][j] = matrix[i][j] * multi; // Умножаем элементы
            }
        }
        return result;
    }

