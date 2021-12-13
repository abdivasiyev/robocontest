run:
	g++ $(name).cpp -o output
	./output

.DEFAULT_GOAL:=run