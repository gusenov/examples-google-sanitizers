# Флаги компилятора в *CMakeLists.txt*

```
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=[sanitizer_name] [additional_options] [-g] [-OX]")
```

Для C-проектов используется ```CMAKE_C_FLAGS``` вместо ```CMAKE_CXX_FLAGS```.
Для ```[sanitizer_name]``` используется один из следующих вариантов:

- address для AddressSanitizer
- leak для LeakSanitizer
- thread для ThreadSanitizer
- undefined для UndefinedBehaviorSanitizer (есть еще другие опции)
- memory для MemorySanitizer

```[Additional_flags]``` - это другие флаги компиляции, например:

- ```-fno-omit-frame-pointer```,
- ```fsanitize-recover/fno-sanitize-recover```,
- ```-fsanitize-blacklist```,
- и пр.

```[-g]``` используется чтобы в предупреждающих сообщениях были имена файлов и
номера строк.

Уровень оптимизации ```[-OX]``` задается для получения производительности.
