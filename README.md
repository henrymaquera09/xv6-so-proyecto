# Proyecto XV6 – Instrumentación y comandos del sistema

## Integrantes
- Edgar Jampier Leyva Garcia – 2023-119028
- Heny Mark Maquera Mamani – 2023-119038

## Descripcion del proyecto
Este proyecto consiste en la modificacion del sistema operativo educativo XV6, con el objetivo de instrumentar llamadas al sistema, implementar nuevos comandos de usuario y desarrollar un contador de invocaciones por syscall. El trabajo se realizo como parte de la Unidad II del curso de Sistemas Operativos.

Se desarrollaron tres entregables principales:
- Instrumentacion de llamadas al sistema mediante la syscall trace.
- Implementacion de comandos de usuario relacionados con procesos y planificacion.
- Desarrollo de un contador de invocaciones por llamada al sistema accesible desde el espacio de usuario.

## Funcionalidades implementadas
- Registro dinamico de llamadas al sistema (trace).
- Comando psinfo para visualizar procesos activos.
- Contador global de invocaciones por syscall.
- Comando syscount para consultar estadisticas de uso de llamadas al sistema.

## Instrucciones de compilacion y ejecucion

### Requisitos
- Sistema Linux
- QEMU
- GCC

### Compilacion
make clean
make

## Ejecucion
make qemu

## Comandos disponibles en XV6
trace 1
trace 0
psinfo
syscount
syscount <id_syscall>
