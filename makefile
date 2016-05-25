SRCS=m1-str1.cpp Engine/Engine.cpp
OBJSFOLDER=obj/
OBJS=$(OBJSFOLDER)m1-str1.o $(OBJSFOLDER)m1-eng1.o
SFMLFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
APPNAME=INFOEDUCATIE

all: m1-str1.o m1-eng1.o
	g++ $(OBJS) -o $(APPNAME) $(SFMLFLAGS)

m1-str1.o:
	g++ -c m1-str1.cpp -o $(OBJSFOLDER)$@

m1-eng1.o:
	g++ -c Engine/Engine.cpp -o $(OBJSFOLDER)$@

clean:
	rm -rf obj
	mkdir -p obj
