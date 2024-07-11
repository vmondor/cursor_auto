linux :
	cc -lX11 cursor_linux.c -o cursor
	./cursor

windows :
	gcc -lgdi32 -o cursor
	./cursor

fclean :
	rm cursor