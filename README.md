# python_cpp
Exemple d'utilisation d'un composant en python
Utilise pybind11
apres git clone, faire:
```
cd python_cpp
git submodule init
git submodule update
```

Pour compiler

```
cd hello
make
```

Pour utiliser
```
python3
>>> import hello_component
>>> hello_component.greet()
'hello, world'
>>> hello_component.getVersion()
'1.0'
>>> 
```
# Exemple d'une class C++ ( class Room)
```
>>> import Room_component
>>> Room_component.getVersion()
'1.0'
>>> from Room_component import Room
>>> room1=Room(7,8,10)
>>> room1.getLength()
7.0
>>> room1.getHeigh()
10.0
>>> room1.getBreadth()
8.0
>>> room1.calculateVolume()
560.0
>>> room1.calculateArea()
56.0
>>> 
```
