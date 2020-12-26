#include <cstdio>

int main(int argc, char **argv, char **envp){

    for (char **env = envp; *env != nullptr; env++)
    {
        char *thisEnv = *env;
        printf("%s\n", thisEnv);
    }
    // ASAN_OPTIONS=detect_stack_use_after_return=false detect_leaks=1 log_path='/private/var/folders/bf/hl0zd5p1415cjtdykb_xkg4r0000gn/T/clion-sanitizers8cdf0f7c-a02f-4d3b-9c73-363f32a33310/54772963-aa8b-4f81-8f97-34087b9416e8' stack_trace_format='pc_%p###func_%f###file_%s###line_%l###obj_%M' print_summary='true'

    int *x = new int(10);
    return 0;
}
