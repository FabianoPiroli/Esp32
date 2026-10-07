#ifndef PREINCLUDE_H
#define PREINCLUDE_H

// Previne que o IntelliSense no macOS tente carregar cabeçalhos nativos do macOS (Mach-O)
// ao analisar código para o microcontrolador ESP32.
#ifdef __APPLE__
#undef __APPLE__
#endif

#ifdef __MACH__
#undef __MACH__
#endif

#endif // PREINCLUDE_H
