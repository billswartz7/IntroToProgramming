
SOURCES = f1.c f2.c f3.c f4.c f5.cpp
PROGRAMS = f1 f2 f3 f4 f5
CFLAGS = -g

all: $(PROGRAMS)
	@for src in $(SOURCES); do \
          echo "Contents of file $$src"; \
	  cat $$src; \
	  pname="$${src%.*}" ; \
	  echo "Program name: $$pname" ; \
	  "./$$pname" ; \
	  echo "#########################" ; \
	done

f1 : f1.o
	$(CC) $(CFLAGS) -o f1 f1.o

clean:
	rm -f *.o $(PROGRAMS)
