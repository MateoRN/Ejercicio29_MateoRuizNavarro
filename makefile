grafica py: datos.dat
	python grafica.py
datos.dat: difucion.x
	difucion.x > datos.dat
difucion.x : Difucion.cpp
	c++ Difucion.cpp -o difucion.x
