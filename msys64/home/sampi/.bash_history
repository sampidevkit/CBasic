pacman -Syu
pacman -S make tar unzip
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-gdb
pacman -Syu
pacman -S make tar unzip
pacman -Qqe | xargs echo > /c/packages.txt ; exit
pacman -Sy
pacman --needed -S bash pacman pacman-mirrors msys2-runtime
pacman -S --needed $(cat /c/packages.txt)
pacman -Syu
