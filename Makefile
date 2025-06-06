#!/bin/bash
CC = gcc
CF = -c -Wall
DF = -DDEBUG

BST: main.o mainMenu.o init.o exitProgram.o createBST.o addNode.o deleteNode.o displayBST.o deleteBST.o createNode.o
	${CC} -o BST main.o mainMenu.o init.o exitProgram.o createBST.o addNode.o deleteNode.o displayBST.o deleteBST.o createNode.o
main.o: main.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} main.c 
mainMenu.o: mainMenu.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} mainMenu.c 
init.o: init.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} init.c 
exitProgram.o: exitProgram.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} exitProgram.c 
createBST.o: createBST.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} createBST.c 
addNode.o: addNode.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} addNode.c 
deleteNode.o: deleteNode.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} deleteNode.c 
displayBST.o: displayBST.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} displayBST.c 
deleteBST.o: deleteBST.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} deleteBST.c 
createNode.o: createNode.c headers.h dataStructures.h declarations.h
	${CC} ${CF} ${DF} createNode.c 

clean:
	rm -f BST
	rm *.o
