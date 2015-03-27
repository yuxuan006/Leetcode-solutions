//convert int array to string

string int_array_to_string(int a[], int size)
{
    string s;
    for (int i = 0; i < size; ++i) {
        s += to_string(a[i]);
    }
    return s;
}