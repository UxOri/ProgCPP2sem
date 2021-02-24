unsigned int count_total_mice_amount(Cat* cats, unsigned int n) {
    unsigned int S = 0;
    for (unsigned int i = 0; i < n; i++){
        S += cats[i].mice_caught;
    }
    return S;
}
