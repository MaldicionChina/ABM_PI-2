cmake_minimum_required(VERSION 3.3)
project(ABM_Wall-E)
# Sentencia para realizar debugging detallado
#set(CMAKE_VERBOSE_MAKEFILE on)
# Se especifican banderas de compilación
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fpermissive")

# Se especifica el lugar dónde se "instalaran" los archivos generados
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
    #Liberías
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
    #Ejecutables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Se añade las fuentes de la librería Agent
add_library(agent SHARED ${CMAKE_SOURCE_DIR}/src/Agent.cpp)

# Se añade las fuentes de la librería Agent
add_library(population SHARED ${CMAKE_SOURCE_DIR}/src/Population.cpp)

## Se añade las fuentes de la librería Agent
#add_library(comunication SHARED ${CMAKE_SOURCE_DIR}/src/Agent.cpp)

link_directories(${CMAKE_SOURCE_DIR}/lib/fl/)

# Se incluye headers de la librerias
include_directories("${CMAKE_SOURCE_DIR}/inc")

include_directories("${CMAKE_SOURCE_DIR}/inc/fl")

# Se incluye el archivo correspondiente al programa principal
set(SOURCE_FILES src/main.cpp)

add_executable(ABM_Wall-E ${SOURCE_FILES})

target_link_libraries(ABM_Wall-E agent population fuzzylite)