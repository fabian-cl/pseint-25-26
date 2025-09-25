Algoritmo SintaxisYBucles
	Definir text Como Texto
	Definir max_it Como Entero
	max_it<-50
	text<-"Hello World"
	
	Para it<-1 Hasta max_it Hacer
		Escribir "Hola ", it
	FinPara
	
	// Segunda variacion
	Para it<-1 Hasta max_it Con Paso 1 Hacer
		Escribir "Hola ", it
	FinPara
	
	// Introducir un numero hasta que lea cero
	Definir numero Como Entero
	Repetir
		Escribir "Introduzca numero"
		Leer numero
	Hasta Que numero == 0
	
	Definir aux Como Texto
	Para i<-1 Hasta 5 Hacer
		aux<-""
		Para j<-1 Hasta 5 Hacer
			aux<-aux + "* "
		FinPara
		aux<-aux + "*"
		Escribir aux
	FinPara
	
FinAlgoritmo
