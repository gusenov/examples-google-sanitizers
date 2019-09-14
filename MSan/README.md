# MemorySanitizer

[MemorySanitizer (MSan)](https://github.com/google/sanitizers/wiki/MemorySanitizer)
обнаруживает чтения неинициализированной памяти. Ищутся случаи, когда
stack- или heap-allocated память читается перед записью. MSan может также
отслеживать неинициализированные биты в bitfield.

**MSan доступен только в Clang для Linux x86_64 targets.**

MSan может отследить происхождение неинициализированного значения в том месте,
где оно было создано, и сообщить эту информацию.
Флаг ```-fsanitize-memory-track-origins``` включает эту функциональность.
