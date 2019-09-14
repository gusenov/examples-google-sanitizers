# LeakSanitizer

[LeakSanitizer (LSan)](https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer)
детектор утечек памяти. В stand-alone режиме это run-time инструмент
не требующий инструментов компиляции. LSan интегрирован в AddressSanitizer
поэтому можно их совместить для обнаружения ошибок памяти и утечек памяти.

Чтобы включить LeakSanitizer как часть AddressSanitizer нужно передать
```detect_leaks=1``` в переменную ```ASAN_OPTIONS```. Чтобы выключить
```detect_leaks=0```.

Чтобы запустить только LSan нужно использовать ```-fsanitize=leak``` вместо
```-fsanitize=address```.
