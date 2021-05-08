# BaCa_HeLp

Instrukcja obsługi:
Obsługa testerki do zadań ze strony BaCa (i nie tylko) jest prosta. Po napisaniu programu i utowrzeniu odpowiedniego pliku należy uruchomić skrypt testerki podając za pierwszy argument nazwę programu, a za drugi nazwę katalogu z testami. W przypadku gdy wyjście programu będzie identyczne z plikiem .out odpowiedniego pliku .in dostaniemy informację, że pliki wyjściowe są identyczne oraz dostaniemy czas wykonania kompilacji programu oraz jego wykonania. W przypadku gdy program nie będzie działał prawidłowo dostaniemy informację że wyjście programu jest niepoprawne i będziemy mogli przystąpić do debugowania programu. Spacje na końcu linii oraz puste linie na końcy pliku nie mają wpływu na informację o poprawnośći sprawdzanego programu. Program działa jedynie dla zadań, w których istnieje dokładnie jedna prawidłowa odpowiedź.

Przykładowa ścieżka dostępu do plików dla Ubuntu zainstalowanego na Windowsie:
  C:/Users/{User_Name}/AppData/Local/Packages/CanonicalGroupLimited.Ubuntu20.04onWindows_79rhkp1fndgsc/LocalState/rootfs/home/...
  
Przykładowa komenda nadania uprawnień wszystkim plikom testowym:
  chmod -R 711 {nazwa folderu z testami}
  
Komenda wywołania skryptu:
  ./Testerka.sh {Program} {Nazwa katalogu z testami}
