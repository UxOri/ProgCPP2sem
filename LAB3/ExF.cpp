int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new) {
    if (n_new == 0) return NULL;
    int* data = new int[n_new];
    for (signed int i = 0; i < n_old and i < n_new; i++) {
        data[i] = source[i];
    }
    if (source != NULL) delete []source;
    return data;
}
