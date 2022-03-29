PROJ_NAME = a.out

SRC = main.c

BUILD_DIR = Build 

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

all:$(SRC)
	gcc $^ -o $(PROJ_NAME)

run: all
	./$(PROJ_NAME)
    
analyze: all memcheck staticcheck coverage codesize sanitize_check

staticcheck:
	cppcheck --enable=all .

memcheck:
	valgrind ./$(PROJ_NAME)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(SRC) -o $(PROJ_NAME)
	./$(PROJ_NAME)

coverage:$(SRC)
	gcc -fprofile-arcs -ftest-coverage $< -o $(PROJ_NAME)
	./$(PROJ_NAME)
	gcov -a $(SRC)

codesize:$(PROJ_NAME)
	size $^

clean:
	rm -rf $(PROJ_NAME) *.gcov *.gcda *.gcno