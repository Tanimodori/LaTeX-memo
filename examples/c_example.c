int main(int argv, char* argc[]) {
    for (int j = 0; j < 200; ++j) {
        int t, p, found;
        fscanf(input, "(%d,%d) ", &t, &p);
        found = mem_find(p);
        if (found != -1) {
            ++hit;
            fprintf(output, "%c", mem[found].data[t]);
        } else {
            found = mem_find_empty();
            mem_load(&mem[found], disk, p);
            fprintf(output, "%c", mem[found].data[t]);
        }
    }
    return 0;
}