linux :
	cc cursor_linux.c -o cursor -lX11
	./cursor

windows :
	gcc -o cursor -lgdi32
	./cursor

fclean :
	rm cursor