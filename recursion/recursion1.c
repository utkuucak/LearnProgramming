void count_to_ten (int count) {
    /* We only keep counting if we have a value less than ten */
    if (count < 10) {
        count_to_ten (count + 1);
    }
}
int main () {
    count_to_ten (0);
}
