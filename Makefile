run:
	clang $(name).cpp -o output
	./output

.DEFAULT_GOAL:=run