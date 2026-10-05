# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

Llena cada espacio conforme avances en las fases de [PRACTICA.md](PRACTICA.md).

## Fase 1. Entender el problema

**1.1 El problema con mis propias palabras**

Una app de musica organiza las playlists con musica y podcats, una playlist tiene su nombre, cada pista con su titulo y organizacion, las canciones luego se clasifican por artistas y genero, luego los podcasts se clasifican por anfitrion y  numero de episodios



**1.2 Sustantivos (posibles clases) y verbos (posibles métodos)**

Sustantivos: Cancion, Podcast, PLaylist, Pista,

Verbos: Titulo, Nombre,Artista, Genero , Anfitrion y numero de episodios

**1.3 Relaciones** (completa con "es un", "tiene un" o "usa un")

*   Una canción es una pista.
*   Un podcast es una pista.
*   Una pista tiene una duración.
*   Una playlist usa una canción.

## Fase 2. Diseñar la solución

**2.1 Diagrama de clases**

![Diagrama de clases](diseno_solucion.png)

**2.2 Justificación de cada relación**

| Relación | Tipo | ¿Por qué? |
| --- | --- | --- |
| Cancion - Pista | __Es una__ | _Es algo que se puede reproducir___ |
| Podcast - Pista | ___Es una_ | __Es algo que se puede reproducir__ |
| Pista - Duracion | ___Tiene una__ | __Info_ |
| Playlist - Cancion | __Usa__ | ___Almacena las canciones__ |
| Playlist - Podcast | __Usa__ | ___Almacena los podcasts__ |

## Fase 3. Implementar

**3.1 Bitácora de dudas**

| # | Duda | Cómo la resolví | Fuente |
| --- | --- | --- | --- |
| 1 | ___el formato para el tiempo__ | ___con un poco de investigacion__ | __https://www.geeksforgeeks.org/cpp/iomanip-in-cpp/___ |
| 2 | ____Intentar no modificar la variable en la clase_ | _this->____ | ___https://www.geeksforgeeks.org/cpp/this-pointer-in-c/__ |
| 3 | _____ | _____ | _____ |

**3.2 Experimentos guiados**

Experimento 1, orden de construcción y destrucción: _se coonstruye Duracion -> Pista -> Cancion
se destruye Cancion -> Pista-> Duracion->

Experimento 2, ¿quién es dueño de quién?: __cancion es su propio dueno, no se destruira___

Experimento 3, un objeto en dos playlists: el titulo cambia en ambos__si_

## Fase 4. Probar y mejorar

**4.1 Tabla de pruebas**

| # | Caso | Resultado esperado | Resultado obtenido | ¿Pasa? |
| --- | --- | --- | --- | --- |
| 1 | Duración normal `Duracion(3, 45)` | 3:45 | __3:45__ | __sucede como esperado__ |
| 2 | Segundos mayores a 59 `Duracion(0, 75)` | 1:15 | __1:15___ | __sucede como esperado_ |
| 3 | Valores negativos `Duracion(-2, 10)` | 0:00 | ___0:00__ | __aparece como si no tuviera duracion___ |
| 4 | Título vacío | "Sin título" | ___"sin titulo"__ | ___aparece como si no tuviera titulo__ |
| 5 | Playlist vacía | 0:00 y 0 pistas | __0:00___ | ___no aparece nada__ |
| 6 | Canción duplicada | La segunda vez devuelve `false` | false_____ | ___no se agrega la segunda vez__ |
| 7 | Puntero nulo | Devuelve `false` | __false___ | ___no apunta a nada__ |
| 8 | Total con 2 canciones y 1 podcast | Suma correcta en m:ss | __13.39__ | ____se suman correctamente_ |

**4.2 Bitácora de mejoras**

| # | Falla o mejora detectada | Qué cambié | Por qué |
| --- | --- | --- | --- |
| 1 | ___no detectaba el playlist.h__ | __cambiarlo a .../include/playlist.h___ | _____ |
| 2 | _____ | _____ | _____ |

Retos opcionales que intenté: _____

## Fase 5. Publicar en GitHub

**5.1 Enlace a mi fork**

[Inserta aquí el enlace a tu fork]

## Cierre y reflexión

**6.1 ¿Qué aprendiste en esta práctica?**

como usar la herencia

**6.2 ¿Qué cambiarías de tu proceso la próxima vez?**

el tiempo que tarde
