7.3.1. Secuencia de Pasos

1. Preprocesador 

a. Escribo el programa hello2.c


"![image](https://user-images.githubusercontent.com/82007207/118595936-b6c59b80-b781-11eb-803c-454cd24ad7a5.png)"

b. Preprocesamiento de hello2.c

![image](https://user-images.githubusercontent.com/82007207/118596706-1e7be680-b782-11eb-8cba-d9f262fcbb8f.png)

Con este comando se le indica al compilador que solamente preprocese y genere el archivo preprocesado hello2.i

![image](https://user-images.githubusercontent.com/82007207/118596764-2cca0280-b782-11eb-8807-8a0dd6d634ce.png)

El archivo preprocesado reemplaza el header por las funciones que este tiene y sustituye los comentarios por espacios:

![image](https://user-images.githubusercontent.com/82007207/118596880-58e58380-b782-11eb-95bd-e51d550f8931.png)

![image](https://user-images.githubusercontent.com/82007207/118596898-5d11a100-b782-11eb-845c-f3ea938996ec.png)

La conclusión que saco viendo el hello2.i es que todo ese código extra surge de que el compilador preproceso nuestro hello2.c e interpreto nuestro header, #include<stdio.h>. También cabe destacar que nuestro programa tiene algunos problemas como que le falta la llave del final y también pareciera que estamos queriendo llamar a printf pero se escribió prontf.

c. Escribo la nueva variante, hello3.c

![image](https://user-images.githubusercontent.com/82007207/118596952-70bd0780-b782-11eb-9eea-949afee9fb8d.png)

d. Investigar e indicar la semántica de la primera línea

En la primera línea vemos la declaración de la función printf y va a mostrar una cadena con el formato “restrict s” y todo lo que está después de la “,” sería el contenido de la cadena.

e.	. Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.i.

  Preprocesamiento de hello3.c
  
![image](https://user-images.githubusercontent.com/82007207/118597079-9518e400-b782-11eb-94d9-7b6ce70ba2c6.png)
![image](https://user-images.githubusercontent.com/82007207/118597092-99450180-b782-11eb-8167-9899808c56c8.png)

Diferencias entre hello3.c y hello3.i :

![image](https://user-images.githubusercontent.com/82007207/118597215-c72a4600-b782-11eb-8bec-eadfa0f02f64.png)
![image](https://user-images.githubusercontent.com/82007207/118597236-cd202700-b782-11eb-81f9-4796da6eb4a4.png)

Lo que se puede notar es que el código en el archivo hello3.i no tiene un monton de código adicional como en el hello2.i, y esto se debe a que en el hello2.c se incluye la cabecera #include<stdio.h> la cual fue reemplazada por su código equivalente en el preprocesado.
En este caso no se incluye ningún header por lo que solamente se agregan esas 4 líneas de código que vemos en la segunda imagen.

2. Compilación 
a.	Compilar el resultado y generar hello3.s, no ensamblar.
  ![image](https://user-images.githubusercontent.com/82007207/118597364-f8a31180-b782-11eb-9130-c7a533d94d7d.png)
  
b.	 Corregir sólo los errores, no los warnings, en el nuevo archivo hello4.c y empezar de nuevo, generar hello4.s, no ensamblar.
![image](https://user-images.githubusercontent.com/82007207/118597428-08baf100-b783-11eb-9643-67b7dae2e4c7.png)
![image](https://user-images.githubusercontent.com/82007207/118597433-0b1d4b00-b783-11eb-88ec-a0ae124b4a20.png)

c.	Leer hello4.s, investigar sobre lenguaje ensamblador,e indicar de forma sintética cuál es el objetivo de ese código

El lenguaje assembler sirve para darle instrucciones a las computadoras y comunicarse con ellas de una forma más real ya que tiene una relación directa con el código binario.

d.	 Ensamblar hello4.s en hello4.o, no vincular.

Primero me tiro estos errores

![image](https://user-images.githubusercontent.com/82007207/118597541-31db8180-b783-11eb-8e4d-3ee4a8a61977.png)

Por lo que probé cambiando el prontf por printf, ya que al estar definida la función printf entonces esta podría ser reconocida. 
Después lo pude ensamblar pero usando hello4.i

![image](https://user-images.githubusercontent.com/82007207/118597638-53d50400-b783-11eb-8d56-e41f1e1fc390.png)
![image](https://user-images.githubusercontent.com/82007207/118597650-56375e00-b783-11eb-9718-2103d689f764.png)

3. Vinculación
a.	Vincular el hello4.o con la biblioteca estándar y generar el ejecutable.

Al intentar generar el ejecutable me tiro estos mensajes de error.

![image](https://user-images.githubusercontent.com/82007207/118597706-6d764b80-b783-11eb-8170-ccbbcac52a65.png)

b.	 Corregir en hello5.c y generar el ejecutable. Solo corregir lo necesario para que vincule.

Intente generar el ejecutable de estas formas pero no funciono

![image](https://user-images.githubusercontent.com/82007207/118597751-82eb7580-b783-11eb-8106-740ba75a988a.png)
![image](https://user-images.githubusercontent.com/82007207/118597767-88e15680-b783-11eb-8250-67b68e7a7e51.png)

Así que tuve que generarlo desde el .i 

![image](https://user-images.githubusercontent.com/82007207/118597807-9696dc00-b783-11eb-8eeb-2a824ca1f284.png)
![image](https://user-images.githubusercontent.com/82007207/118597817-9991cc80-b783-11eb-908d-1f4909ded05f.png)

c.	 Ejecutar y analizar el resultado.

Al iniciar el ejecutable no se me abría.

4. Corrección de Bug
a.	 Corregir en hello6.c y empezar de nuevo; verificar que funciona como se espera. 
![image](https://user-images.githubusercontent.com/82007207/118597893-bb8b4f00-b783-11eb-9ea7-ff13e0803138.png)
Pude corregirlo agregando system(“pause”);

5.  Remoción de prototipo

a.	 Escribir hello7.c, una nueva variante:
![image](https://user-images.githubusercontent.com/82007207/118597951-ccd45b80-b783-11eb-983c-9704cceea60a.png)
![image](https://user-images.githubusercontent.com/82007207/118597968-d1007900-b783-11eb-85d6-46ac58b7eab3.png)

b.	Explicar porqué funciona.

Basandome en los mensajes de la terminal, en el proceso de vinculación se tuve que dar cuenta que printf no estaba declarada por lo que incluyo la libreria stdio.h automáticamente

6. Compilación Separada: Contratos y Módulos
a.	Escribir studio1.c (sí, studio1, no stdio) y hello8.c.

![image](https://user-images.githubusercontent.com/82007207/118598021-e1b0ef00-b783-11eb-8154-a1352426b519.png)
![image](https://user-images.githubusercontent.com/82007207/118598039-e70e3980-b783-11eb-9356-bbf15f0fc9b2.png)

b.	 Investigar como en su entorno de desarrollo puede generar un programa ejecutable que se base en las dos unidades de traducción (i.e., archivos fuente, archivos con extensión .c). Luego generar ese ejecutable y probarlo

Para generar un ejecutable en base a 2 unidades de traducción o archivos fuente hay que usar el comando:

gcc archivo1.c archivo2.c - nombreEjecutable

![image](https://user-images.githubusercontent.com/82007207/118598109-fc836380-b783-11eb-9bd4-13718b1fba61.png)

c.	 Responder ¿qué ocurre si eliminamos o agregamos argumentos a la invocación de prontf? Justifique.
Se va a romper el programa ya que prontf es un printf que admite solo 2 argumentos.

d.	 Revisitar el punto anterior, esta vez utilizando un contrato de interfaz en un archivo header.
 i) Escribir el contrato en studio.h
 
 ![image](https://user-images.githubusercontent.com/82007207/118598297-38b6c400-b784-11eb-8cb4-cdfe29744f80.png)
 
 ii)Escribir hello9.c, un cliente que sí incluye el contrato.
 
![image](https://user-images.githubusercontent.com/82007207/118598327-45d3b300-b784-11eb-951d-41d9c40ead50.png)

iii) Escribir studio2.c, el proveedor que sí incluye el contrato.

![image](https://user-images.githubusercontent.com/82007207/118598375-55eb9280-b784-11eb-8716-edf56555a30b.png)

iv. Responder: ¿Qué ventaja da incluir el contrato en los clientes y en el proveedor. 

La ventaja que me da es que si no incluiría el contrato en el proveedor, entonces no se podría exportar la función al header/interfaz. Por otro lado, si yo no incluyo la interfaz en el cliente entonces no se podría importar prontf.
Prácticamente lo que te permite es tener un cierto orden y en el caso de tener que reutilizar funciones en otros programas, esto nos daría una mano.


 
 

 
