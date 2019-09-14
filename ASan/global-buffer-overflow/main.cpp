int global_array[100] = { -1 };

int main(int argc, const char * argv[]) {
    return global_array[argc + 100];  // global buffer overflow
}
