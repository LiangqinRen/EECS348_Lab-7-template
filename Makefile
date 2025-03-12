CC := gcc

football.exe: football.c football_main.c
	$(CC) football.c football_main.c -o football.exe

report.exe: # fill in files here
	# fill in commands here