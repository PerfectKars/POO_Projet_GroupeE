# Projet Automate Cellulaire (Jeu de la Vie)

Ce projet est une implémentation du célèbre **Jeu de la Vie de Conway** en C++, en utilisant la bibliothèque **SFML** pour l'interface graphique. L'architecture du code a été conçue selon les principes de la **Programmation Orientée Objet (POO)** pour répondre aux exigences du projet.

## 1. Architecture POO

Le code est structuré autour des classes définies dans le Diagramme de Classes UML, garantissant une bonne séparation des responsabilités :

*   **Logique de l'Automate :** Classes `Cellule`, `Grille`, `IRegle`, `RegleStandard`.
*   **Affichage :** Interfaces `IRendu` et ses implémentations `RenduGraphiqueSFML` et `RenduConsole`.
*   **Contrôle :** Classe `Jeu` (modèle) et `ControleurGraphique` (boucle principale et événements).

## 2. Prérequis

Pour compiler et exécuter ce projet, vous devez avoir installé :

*   Un compilateur C++ (Clang++ est utilisé dans le `Makefile`).
*   La bibliothèque **SFML** (Simple and Fast Multimedia Library).

**Installation de SFML (sur systèmes Debian/Ubuntu) :**
```bash
sudo apt-get install libsfml-dev
```

## 3. Compilation et Exécution

Le projet utilise un `Makefile` pour simplifier la compilation.

1.  **Compiler le projet :**
    ```bash
    make
    ```
    Ceci génère l'exécutable nommé `main`.

2.  **Exécuter le programme :**
    ```bash
    ./main
    ```

## 4. Tests Unitaires

Le projet inclut une fonction de tests unitaires pour valider la logique d'évolution de l'automate (la `RegleStandard`).

*   Les tests sont définis dans `TestsUnitaires.cpp`.
*   Ils sont exécutés automatiquement au lancement du programme (voir `main.cpp`).
*   Les tests vérifient les règles de **Survie**, **Naissance** et **Mort** (sous-population/surpopulation).

## 5. Nettoyage

Pour supprimer les fichiers compilés (`main` et `main-debug`) :
```bash
make clean
```
