#include "pch.h"
#include "MultiplicateMatrix.h"

TEST(zadanie1StaticTest, validzadanie1Static) {
	const int rows = 2;
	const int columns = 3;


	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[columns];
		for (int j = 0; j < columns; ++j)
		{
			matrix[i][j] = i + j + 1;
		}

	}
}
TEST(MatrixTest, MultiplicateValidMatrix) {
	// Создаём тестовую матрицу 2x2
	int** matrix = new int* [2];
	matrix[0] = new int[2]{ 1, 2 };
	matrix[1] = new int[2]{ 3, 4 };
};
/*
TEST(MatrixTest, NullInput) {
	int** result = MultiplicateMatrixLib(nullptr, 2, 2, 5);
	EXPECT_EQ(result, nullptr);
	*/