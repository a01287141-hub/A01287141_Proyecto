# Unidad de Combate

Clase que representa base de unidad para personajes para juego

## UML

```mermaid
classDiagram

class Unidad{

- int vida
- int salud
- int ataque
- int nivel

+ porcentajeSalud() int
+ imprimeBarra() void
+ calculaAtaque(Unidad&) int
+ recibeAtaque(int) void
+ atacar(Unidad&) void
+ imprimir() void

}
```


