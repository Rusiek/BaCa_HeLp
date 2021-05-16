# BaCa_HeLp

Instrukcja:
Obsługa testerki do zadań ze strony BaCa (i nie tylko) jest prosta. Po napisaniu programu i utworzeniu odpowiedniego pliku należy uruchomić skrypt testerki podając za pierwszy argument nazwę programu, a za drugi nazwę katalogu z testami. W przypadku gdy wyjście programu będzie identyczne z plikiem .out odpowiedniego pliku .in dostaniemy informację zwrotną że program działa prawidłowo oraz wyświetli się czas wykonania kompilacji programu oraz jego wykonania. W przypadku gdy program nie będzie działał prawidłowo dostaniemy informację że wyjście programu jest niepoprawne. Skrypt nie sprawdza czy wyjście jest poprawnie sformatowane. Własne testy można prosto pisać tworząc dwa pliki o tej samej nazwie, pierwszy z rozszerzeniem .in, drugi z rozszerzeniem .out.

Możliwa ścieżka dostępu do plików dla Ubuntu zainstalowanego na Windowsie z ustawieniami domyślnymi:
  C:/Users/{User_Name}/AppData/Local/Packages/CanonicalGroupLimited.Ubuntu20.04onWindows_79rhkp1fndgsc/LocalState/rootfs/home/...
  
Przykładowa komenda nadania uprawnień wszystkim plikom testowym:
  chmod -R 777 {nazwa katalogu z testami}
  
Komenda wywołania skryptu (Linux):
  Testerka.sh {Program} {Nazwa katalogu z testami}
  
Komenda wywołania skryptu (Windows):
  bash Testerka.sh {Program} {Nazwa katalogu z testami}
  
Przykładowo, aby sprawdzić zgodność wyjścia programu o nazwie "BaCa_B.exe" z plikami w katalogu o nazwie "test" należy wpisać komendę:
  Testerka.sh BaCa_temp.exe test

Tworzenie pliku exe w CLion:
  https://plugins.jetbrains.com/plugin/8352-c-c--single-file-execution

Należy również dodać poniższą linijkę do pliku "CMakeLists.txt":
  set(CMAKE_EXE_LINKER_FLAGS "-static")
  
Poprawna instalacja kompilatora w Code::Blocks: https://cpp0x.pl/kursy/FAQ/Program-nie-uruchamia-sie-z-exe-brak-libgcc_s_dw2-1-dll-libstdc++-6-dll/584
  
# Przykładowe pliki testowe

Zadanie programu: Wypisać wszystkie liczby pierwsze od n-tej najmniejszej do m-tej największej włącznie posortowane rosnąco.

Zawartość pliku .in: 3 7

Zawartość pliku .out: 5 7 11 13 17
