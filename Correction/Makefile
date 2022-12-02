# Sources Related Stuff
SRC	=	src/CinemaFunctions.c	\
		src/StoryFunctions.c	\

OBJ	=	$(SRC:.c=.o)

NAME	= workshopCriterion


# Main Related Stuff
SRC_MAIN	=	main.c

OBJ_MAIN	=	 $(SRC_MAIN:.c=.o)


# Global Stuff
CFLAGS	+=	-W -Wall -Wextra

CFLAGS	+=	-Iinclude

RM	=	rm -f


# Unit Tests Related Stuff
TESTS	=	tests/testExercise1.c 	\
			tests/testExercise2.c 	\

UNAME	=	unit_tests

CRITFLAGS	=	-lcriterion --coverage

HTMLFLAGS	=	--html --html-details -o website_test.html
HTMLFLAGS	+=	--html-title "Test Criterion"

PATH_COVERAGE	=	coverage/


# Rules
%.o: %.c
	gcc -c -o $@ $< $(CFLAGS)

all:	$(NAME)

$(NAME):	$(OBJ)	$(OBJ_MAIN)
	gcc -o $(NAME) $(OBJ) $(OBJ_MAIN)

tests_run:	all
	mkdir -p $(PATH_COVERAGE)
	gcc -o $(UNAME) $(SRC) $(TESTS) $(CRITFLAGS) $(CFLAGS)
	./$(UNAME) -S --verbose
	mv *.gc* $(PATH_COVERAGE)
	$(RM) $(UNAME)

coverage:	tests_run
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

html:	tests_run
	gcovr $(HTMLFLAGS) -r ./ --exclude tests/
	mv *.html $(PATH_COVERAGE)
	mv *.css $(PATH_COVERAGE)
	/usr/bin/google-chrome-stable $(PATH_COVERAGE)/website_test.html

clean:
	$(RM) $(NAME)

tclean:
	$(RM) $(PATH_COVERAGE)*

fclean:	clean	tclean
	$(RM) $(OBJ)
	$(RM) $(OBJ_MAIN)
	$(RM) vgcore*
	$(RM) *.gc*

re: fclean all

.PHONY: re fclean tclean clean html coverage tests_run all

