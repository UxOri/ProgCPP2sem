
int* now_get_me_some_bytes (unsigned int size) {
    int* data = new int[size];
    return data;
}

void now_free_some_bytes (int* data) {
    delete []data;
}

