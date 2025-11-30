# CC = gcc
# CFLAGS = -Wall
# TARGET = combined_app
# SOURCES = cli_calculator.c ../Day_02/calc.c ../Day_02/fact.c

# $(TARGET): $(SOURCES)
# 	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

# clean:
# 	rm -f $(TARGET)

# run: $(TARGET)
# 	./$(TARGET)

# .PHONY: clean run

CC = gcc
CFLAGS = -Wall
TARGET = combined_app
SOURCES = cli_calculator.c ../Day_02/calc.c ../Day_02/fact.c ../Day_02/sqrt_x.c ../Day_04/f_ispowerof2.c ../Day_06/is_powerof3.c
INCLUDE_PATHS = -I. -I../Day_02

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDE_PATHS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run