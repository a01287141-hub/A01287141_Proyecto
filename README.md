# Unidad de Combate

Clase que representa base de unidad para personajes para juego

## UML

```mermaid
classDiagram

class Unidad{
-int vida
-int salud
-int ataque
-int nivel
+porcentajeSalud() int
+imprimeBarra() void
+calculaAtaque(Unidad&) int
+recibeAtaque(int) void
+atacar(Unidad&) void
+imprimir() void
}

class Guerrero{
-int fuerza
+calculaAtaque(Unidad&) int
+recibeAtaque(int) void
+imprimir() void
}

class Arquero{
-float precision
+calculaAtaque(Unidad&) int
+imprimir() void
}

class Mago{
-int mana
+calculaAtaque(Unidad&) int
+recibeAtaque(int) void
+imprimir() void
}

Unidad <|-- Guerrero
Unidad <|-- Arquero
Unidad <|-- Mago
```