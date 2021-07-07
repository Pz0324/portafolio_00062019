# Manual Tecnico

## Aspectos Generales

**Objetivo General**

Presentar detalladamente el diseño de nuestra aplicación, así como las herramientas utilizadas para la realización de esta, 
como explicación de conceptos claves para comprender de mejor manera el código.

**Descripción General**

Nuestra aplicación ayuda a todas las personas que desean tener una vida más organizada,
en donde podrán escribir notas rápidas, poner recordatorios y un diario en donde pueden expresarse libremente.

**Software Utilizado**
Para la creación de la aplicación se utilizó Android Studio,  para la conexión a la base de datos se utilizó mongo atlas, 
además para la realización de la api se utilizó Javascript, node js, express, e insomnia.

## Nomenclaturas

Para facilitar la lectura de los elementos utilizados en nuestro código se utilizó la siguiente nomenclatura:

<Nomenclatura _ Descripción>

En la siguiente tabla podemos observar las abreviaturas utilizadas en el código:

|  Button |btn   |
| ------  | -----|
| Imagen  |  img |
|  Icono  |  ic  |

## Conceptos Tecnicos

**Implementación de interfaz gráfica**

La interfaz gráfica de nuestra aplicación consiste en un diseño amigable con el usuario, consta de una ventana de login donde el usuario inicia sesión o si no está registrado se registra, la parte de calendario donde el usuario podrá anotar tareas importantes con hora y fecha de acuerdo a cuando la necesite, un diario personal en donde podrá escribir sobre su día a día, una sección de notas rápidas y una sección de curiosidades donde podrá ver datos curiosos aleatorios, por último la parte de configuración donde podrá personalizar la aplicación de acuerdo a sus necesidades.

Todo esto realizado a través de fragmentos utilizamos los siguientes:


* FragmentCalendar.kt
* FragmentCuriosity.kt
* FragmentNotes.kt
* FragmentPersonalDiary.kt
* FragmentSetting.kt
* FragmentTask.kt
* FragmentEmailRecuperation.kt
* FragmentLanding.kt
* FragmentLandingMenu.kt
* FragmentSignUp.kt


Además contamos con archivos .kt de cada uno de ellos para la utilización del modelo viewmodel (MVVM) que es nuestro patrón de diseño utilizado:

* CalendarViewModel.kt
* CuriosityViewModel.kt
* PersonalDairyViewModel.kt
* SettingsViewModel.kt
* TaskViewModel.kt
* ViewModelFactory.kt


## Plataforma Base

En la tabla siguiente se presenta las herramientas utilizadas para el proyecto:

| Sistema Operativo  | Windows 10   |
|--------------------|--------------|
|  Tecnologias    | Android Studio  |
|  Lenguaje       |   Kotlin        |
|   Gestor de BD  |   Mongo Atlas   |




# Usuarios de Prueba

* Nombre: Ricardo Peña
 - Email: ricardo17@gmail.com
  - Contraseña: 384909
  
  
* Nombre: Adonay Cardoza
* Email: adonay90@gmail.com
* Contraseña: 90940


* Nombre: Paula Zepeda
* Email: pau03@gmail.com
* Contraseña: 123456

* Nombre: Daniel morales
* Email: daniel66@gmail.com
* Contraseña: 859599


# Video

