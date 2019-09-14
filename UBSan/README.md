# UndefinedBehaviourSanitizer

[UndefinedBehaviorSanitizer (UBSan)](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html)
это runtime checker на undefined behavior, которое является результатом
любой операции с неспецифицированной семантикой, например:

- деление на 0,
- null pointer dereference,
- usage of an uninitialized non-static variable.

UBSan отлавливает [различные виды undefined behavior](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#ubsan-checks).
Можно включать проверки по одной или группами ```-fsanitize=undefined```,
```-fsanitize=integer```, и ```-fsanitize=nullability```.

Чтобы программа завершила выполнение из-за результатов диагностики UBSan
нужно использовать флаг ```-fno-sanitize-recover```.
