# AddressSanitizer

[AddressSanitizer (ASan)](https://github.com/google/sanitizers/wiki/AddressSanitizer) -
детектор порчи памяти. Может находить следующие типы ошибок:

- Heap-, stack-, and global buffer overflow
- Use-after-free (dangling pointer dereference)
- Use-after-scope ```-fsanitize-address-use-after-scope```
- Use-after-return (pass ```detect_stack_use_after_return=1``` to ```ASAN_OPTIONS```)
- Double free, invalid free
- Initialization order bugs

ASan приостанавливается на первой обнаруженной ошибке.
Чтобы изменить это поведение нужно добавить флаг компиляции ```-fsanitize-recover=address```
и ```halt_on_error=false``` в ```ASAN_OPTIONS```.
