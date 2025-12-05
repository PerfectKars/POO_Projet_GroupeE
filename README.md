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

3. Tests Unitaires

Le projet inclut des tests unitaires pour valider la logique d'évolution de l'automate, en particulier la classe RegleStandard. Les tests sont définis dans TestsUnitaires.cpp.

    Les tests sont exécutés automatiquement au lancement du programme.

    Ils vérifient les règles de Survie, Naissance et Mort (sous-population/surpopulation).

4. Nettoyage

Pour supprimer les fichiers générés (main et fichiers de debug) :

make clean

5. Prérequis
Installation de SFML

Pour compiler et exécuter ce projet, vous devez avoir installé :

    Un compilateur C++ (Clang++ ou g++).

    La bibliothèque SFML.

Installation de SFML (sur systèmes Debian/Ubuntu) :

sudo apt-get install libsfml-dev

6. Auteur

Votre nom - [Lien vers votre profil GitHub ou autre]


Ce README contient toutes les instructions nécessaires pour cloner, compiler, et exécuter le projet, 
