all: main

main:
	 g++ *.cpp -o URL

run:
	 ./URL

clean:
	 rm URL