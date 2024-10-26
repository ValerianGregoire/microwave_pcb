# Variables
CC = gcc
CFLAGS = -lm
SRCS = main.c led_display.c i2c.c

# Règle par défaut
cmd:
	$(CC) $(SRCS) $(CFLAGS) -o main.exe
	./main.exe

clean:
	rm main.exe
