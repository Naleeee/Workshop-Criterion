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

tests_run:

coverage:

html:

clean:
	$(RM) $(NAME)

tclean:
	$(RM) *.html
	$(RM) *.css
	$(RM) *.gc*

fclean:	clean	tclean
	$(RM) $(OBJ)
	$(RM) $(OBJ_MAIN)
	$(RM) vgcore*

re: fclean all

.PHONY: re fclean tclean clean html coverage tests_run all
