Cat* get_home_for_a_cats_pride(unsigned int n) {
    char** names = new char*[n];
    for (unsigned int i = 0; i < n; i++) {
        names[i] = new char[10];
    }

    Cat* data = new Cat[n];
    for (unsigned int i = 0; i < n; i++) {
        data[i].name = names[i];
    }
    return data;
}

void clear_home_of_a_cats_pride(Cat *cats, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        delete []cats[i].name;
    }
    delete []cats;
}
