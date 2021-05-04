#BIN = FahrCel.exe
#OBJ = FahrCel.o Conversion.o
#CC = gcc
#CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)
# LDFLAGS = -static-libgcc
#INCS = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/
#include"
#LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
#RM = rm -f



#$(BIN): $(OBJ)
# $(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDFLAGS) $(LDLIBS)
#FahrCel.o: FahrCel.c Conversion.h
 #$(CC) -c FahrCel.c -o FahrCel.o $(CFLAGS)
#Conversion.o: Conversion.h Conversion.c
# $(CC) -c Conversion.c -o Conversion.o $(CFLAGS)
#.PHONY: clean
#clean:
 #$(RM) $(OBJ) $(BIN),

Todo: ConversionTest TablasDeConversion
	make ConversionTest TablasDeConversion

ConversionTest: ConversionTest.c Conversion.c TablasDeConversion.c
	gcc ConversionTest.c Conversion.c -o ConversionTest

TablasDeConversion: TablasDeConversion.c Conversion.c
	gcc TablasDeConversion.c Conversion.c -o TablasDeConversion



clean:
	 rm -f TablasDeConversion.exe ConversionTest.exe