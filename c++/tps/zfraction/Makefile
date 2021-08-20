all:buildExec
prog=main
dependancy=src/main.cpp  src/ZFraction.cpp
CC=g++

$(prog): $(dependancy)
	@ $(CC) $^ -o $@

reorganize:
	@ mv $(prog) build

buildExec:
	@echo "compilation in progress ..."
	@ make $(prog)
	@ make reorganize
	@ echo "process finished !"