int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int  i = 2; i < n; i++) {
        if (n % i == 0) {
            c = 1;
        }
    }
    if (c == 0) { cout <<  "Prime " << endl;

    } else {
        cout << "Not prime " << endl;
    }
}
