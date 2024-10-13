#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "BubbleSort.h"


TEST_CASE() {
	int Array[5] = { 2, 6, 5, 3, 9 };
	int c = 5;
	BubbleSort(Array, c);
	for (int i = 0; i < c - 1; i++) {
		REQUIRE(Array[i] <= Array[i + 1]);
	}
	int Array2[5] = {};
	BubbleSort(Array2, c);
	for (int i = 0; i < c - 1; i++) {
		REQUIRE(Array2[i] <= Array2[i + 1]);
	}
	double Array3[5] = { 2.3, 5, -1, 8, -20 };
	BubbleSort(Array3, c);
	for (int i = 0; i < c - 1; i++) {
		REQUIRE(Array3[i] <= Array3[i + 1]);
	}

}
int main(int argc, char* argv[]) {
	// Настройка тестов, если нужно
	Catch::Session session;  // Создаем сессию для управления тестами

	// Обрабатываем аргументы командной строки, если требуется
	int returnCode = session.applyCommandLine(argc, argv);
	if (returnCode != 0) {  // Если аргументы неправильные
		return returnCode;
	}

	// Запускаем тесты
	int result = session.run();

	// Возвращаем код выполнения тестов
	return result;
}