# Projet Automate Cellulaire (Jeu de la Vie)

Ce projet implémente le célèbre **Jeu de la Vie de Conway** en C++, en utilisant la bibliothèque **SFML** pour l'affichage graphique. L'architecture du code suit les principes de la **Programmation Orientée Objet (POO)** pour garantir une bonne séparation des responsabilités et une gestion claire du projet.

## 1. Architecture POO

Le projet est organisé selon un modèle orienté objet avec les classes suivantes :

* **Logique de l'Automate** : Classes `Cellule`, `Grille`, `IRegle`, `RegleStandard`.
* **Affichage** : Interface `IRendu` avec ses implémentations `RenduGraphiqueSFML` et `RenduConsole`.
* **Contrôle** : Classes `Jeu` (modèle)

## 2. Compilation et Exécution

### Étapes :

1. **Clonez le dépôt :**
   ```bash
   git clone https://votre-repository-url.git
   cd votre-dossier-de-projet

    Créez un répertoire build pour la compilation :

mkdir build
cd build

Générez les fichiers de build avec CMake :

cmake ..

Compilez le projet avec Make :

make

Exécutez le programme :

    ./main

3. Nettoyage

Pour supprimer les fichiers générés (main et fichiers de debug) :

make clean

4. Structure du Projet

Voici la structure des dossiers et fichiers du projet :

   - src/ : Contient le code source du projet, incluant la logique du jeu, les règles, et les affichages.

   - include/ : Contient les fichiers d'en-tête qui définissent les interfaces et les structures de données.

   - build/ : Ce dossier est généré automatiquement lors de la compilation et contient les fichiers de build.

   - .vscode/ : Répertoire contenant la configuration de VSCode pour l'éditeur, incluant les tâches de compilation, le débogage et les paramètres de l'environnement de développement.

   - CMakeLists.txt : Fichier de configuration pour CMake, utilisé pour générer les fichiers de build.

   - Makefile : Pour simplifier la compilation (utilisé en parallèle avec CMake).

5. Prérequis
Installation de SFML

Pour compiler et exécuter ce projet, vous devez avoir installé :

    Un compilateur C++ (Clang++ ou g++).

    La bibliothèque SFML.

Installation de SFML (sur systèmes Debian/Ubuntu) :

sudo apt-get install libsfml-d
