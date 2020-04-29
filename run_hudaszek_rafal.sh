#!/bin/bash

command=$1

#clone
if [ "$command" = "clone" ]; then
    echo [CLONE] Klonowanie repozytorium
    git clone https://github.com/rafalhudaszek/system_calls
    cd system_calls
    chmod +x run_hudaszek_rafal.sh
fi

if [ "$command" = "run" ]; then
    echo [RUN]: tresci zadan znajduja sie w pliku strace.pdf
    echo [RUN]: pliki potrzebne do rozwiazania zadań znajduja sie w plikach zad1 i zad2
    echo [RUN]: nastepuje instalacja strace
    sudo apt-get install strace
fi


if [ "$command" = "clean" ]; then
    if [[ ! -d "system_calls" ]]
    then
        echo [CLEAN]: Obecny katalog to system_calls
        cd .. 
    fi
    echo [CLEAN]: Odinstalowanie strace
    sudo apt-get remove strace
    echo [CLEAN]: usuwanie katalogu system_calls
    rm -rf system_calls
fi

