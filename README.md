1) Projet Game of Life

Ce projet implémente le célèbre jeu de la vie de Conway en utilisant le langage C++ et la bibliothèque graphique SFML pour l'affichage. Il est conçu pour être compilé avec C++ (version 11 ou supérieure) et nécessite CMake pour la gestion de la compilation.

2) Compilation et exécution

mkdir build
cd build

Générez les fichiers de build avec CMake :

cmake ..

Compilez le projet avec Make :

make

Exécutez le programme sur VsCode.

3) Structure du projet :

    src/ : Contient le code source du projet.
    include/ : Contient les fichiers d'en-tête.
    build/ : Dossier généré pour la compilation (ne pas modifier).
    CMakeLists.txt : Fichier de configuration pour CMake.
