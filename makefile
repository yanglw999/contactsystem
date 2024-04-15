objects = main.o addContact.o cleanContact.o deleteContact.o showMenu.o \
          isExist.o keyInput.o modifyContact.o reshowMenu.o searchContact.o \
		  selectMenu.o showContact.o

main : $(objects)
	g++ $(objects) -o main

.PHONY : clean
.PHONY : exe

%.o : %.cpp
	g++ -c $<

clean:
	rm *.o
	rm main
exe:
	./main