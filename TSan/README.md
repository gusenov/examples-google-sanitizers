# ThreadSanitizer

[ThreadSanitizer (TSan)](https://github.com/google/sanitizers/wiki/ThreadSanitizerCppManual)
позволяет обнаруживать состояние гонки (data race). Такое происходит, когда
несколько потоков получают доступ к одной памяти без синхронизации и как
минимум один доступ это запись.

[Формат отчета TSan](https://github.com/google/sanitizers/wiki/ThreadSanitizerReportFormat).
