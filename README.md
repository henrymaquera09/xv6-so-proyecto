# Proyecto XV6 – Instrumentación y comandos del sistema

## Integrantes
- Edgar Jampier Leyva Garcia – 2023-119028
- Heny Mark Maquera Mamani – 2023-119038

## Descripción del proyecto
Este proyecto consiste en la modificación del sistema operativo educativo XV6, con el objetivo de instrumentar llamadas al sistema, implementar nuevos comandos de usuario y desarrollar un contador de invocaciones por syscall. El trabajo se realizó como parte de la Unidad II del curso de Sistemas Operativos.

Se desarrollaron tres entregables principales:
- Instrumentación de llamadas al sistema mediante la syscall trace.
- Implementación de comandos de usuario relacionados con procesos y planificación.
- Desarrollo de un contador de invocaciones por llamada al sistema accesible desde el espacio de usuario.

## Funcionalidades implementadas
- Registro dinámico de llamadas al sistema (trace).
- Comando psinfo para visualizar procesos activos.
- Contador global de invocaciones por syscall.
- Comando syscount para consultar estadísticas de uso de syscalls.

## Instrucciones de compilación y ejecución

### Requisitos
- Sistema Linux
- QEMU
- GCC

### Compilación
```bash
make clean
make
