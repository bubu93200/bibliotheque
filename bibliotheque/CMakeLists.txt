# CMakeList.txt : projet CMake pour bibliotheque, incluez la source et définissez
# la logique spécifique au projet ici.
#
# Version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Bibliotheque C)

# Définir la version du standard C (par exemple, C99)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Inclure le répertoire des entêtes
include_directories(include)

# Récupérer tous les fichiers sources dans ./src
file(GLOB SOURCES "src/*.c")

# Créer l'exécutable
add_executable(bibliotheque ${SOURCES})
