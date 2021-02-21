int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new) {
    if (n_new == 0) return nullptr;
    int* data = new int[n_new];
    for (int i = 0; i < n_old and i < n_new; i++) {
        data[i] = source[i];
    }
    delete []source;
    return data;
}
