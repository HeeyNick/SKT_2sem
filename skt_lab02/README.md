## Сборка и запуск проект
cd build || { mkdir build && cd build; }
cmake --build . --target clean
cmake .. && make || { echo "Ошибка сборки"; exit 1; }
./SKT_Lab02