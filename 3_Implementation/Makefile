# Name of the project
PROJECT_NAME = hangmanmain

# Output directory
BUILD = build

UNI=unity/unity.c

# All source code files
SRC = src/hangmanmain.c\
src/drawHangman.c\
src/replay.c\
src/startGame.c

# All test source files
TEST_SRC = test/test_Hangman.c\
unity/unity.c 

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Includes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run: $(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

analyze: all memcheck staticcheck coverage sanitize_check

#Coverage
coverage:$(BUILD)
	gcc -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(PROJECT_OUTPUT)
	./$(PROJECT_OUTPUT)

staticcheck:
	cppcheck --enable=all .

memcheck:
	valgrind $(BUILD)/$(PROJECT_NAME).$(EXEC)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer -o $(PROJECT_OUTPUT) 
	./$(PROJECT_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build