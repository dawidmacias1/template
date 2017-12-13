template: template.o
	g++ -g -Wall -pedantic -fno-elide-constructors $^ -o $@

template.o: testmap.cpp employee.h map_template.h
	g++ -g -c -Wall -pedantic -fno-elide-constructors $< -o $@

.PHONY: clean

clean:
	-rm template.o template
