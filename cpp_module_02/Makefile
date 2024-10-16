NAME = a.out

SRCS = ASpell.cpp ATarget.cpp BrickWall.cpp Dummy.cpp Fireball.cpp Fwoosh.cpp main.cpp Polymorph.cpp SpellBook.cpp TargetGenerator.cpp Warlock.cpp 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(SRCS) -o $(NAME)

f:
	rm -rf $(OBJS)
	rm -rf $(NAME)

r: f all

.PHONY: r f all