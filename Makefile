run:
	c++-11 -std=c++11 $(name).cpp -o output
	./output

.DEFAULT_GOAL:=run