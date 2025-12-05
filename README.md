# Projet Automate Cellulaire (Jeu de la Vie)

Ce projet implémente le célèbre **Jeu de la Vie de Conway** en C++, en utilisant la bibliothèque **SFML** pour l'affichage graphique. L'architecture du code suit les principes de la **Programmation Orientée Objet (POO)** pour garantir une bonne séparation des responsabilités et une gestion claire du projet.

## 1. Architecture POO

Le projet est organisé selon un modèle orienté objet avec les classes suivantes :

* **Logique de l'Automate** : Classes `Cellule`, `Grille`, `IRegle`, `RegleStandard`.
* **Affichage** : Interface `IRendu` avec ses implémentations `RenduGraphiqueSFML` et `RenduConsole`.
* **Contrôle** : Classes `Jeu` (modèle) et `ControleurGraphique` (gère la boucle principale et les événements).

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

.
├── src/                 # Contient les fichiers sources du projet
│   ├── main.cpp         # Point d'entrée du programme
│   ├── Jeu.cpp          # Logique du jeu (modèle)
│   ├── Grille.cpp       # Gestion de la grille du Jeu de la Vie
│   ├── Cellule.cpp      # Classe Cellule
│   ├── RegleStandard.cpp# Règles d'évolution (Conway)
│   ├── RenduGraphiqueSFML.cpp  # Affichage graphique avec SFML
│   └── RenduConsole.cpp # Affichage en console
├── include/             # Contient les fichiers d'en-tête
│   ├── Jeu.h            # Définition de la classe Jeu
│   ├── Grille.h         # Définition de la classe Grille
│   ├── Cellule.h        # Définition de la classe Cellule
│   ├── RegleStandard.h  # Définition des règles d'évolution
│   ├── IRendu.h         # Interface pour l'affichage
│   └── RenduGraphiqueSFML.h # Définition de l'interface graphique SFML
├── build/               # Répertoire de compilation généré par CMake
├── CMakeLists.txt       # Fichier de configuration pour CMake
└── Makefile             # Makefile pour simplifier la compilation


5. Prérequis
Installation de SFML

Pour compiler et exécuter ce projet, vous devez avoir installé :

    Un compilateur C++ (Clang++ ou g++).

    La bibliothèque SFML.

Installation de SFML (sur systèmes Debian/Ubuntu) :

sudo apt-get install libsfml-d
