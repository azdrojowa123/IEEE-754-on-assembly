all: zad5 zad4

zad5: zad5s.s zad5c.c
	gcc -m32 -O3 -Wall zad5s.s zad5c.c -o zad5
zad4: zad1.s zad4s.s zad4c.c
	gcc -m32 -O3 -Wall zad1.s zad4s.s zad4c.c -o zad4
zad3: zad1.s zad3.s zad.c
	gcc -m32 -O3 -Wall zad1.s zad3.s zad.c -o zad3
zad2: zad2.s zad1.s zad2.c 
	gcc -m32 -O3 -Wall zad1.s zad2.c zad2.s -o zad2
zad1: zad1.s zad1c.c 
	gcc -m32 -O3 -Wall zad1.s zad1c.c -o zad1
clean:
	rm zad5 zad4 zad3 zad2 zad1 


