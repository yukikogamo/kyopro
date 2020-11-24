int main(void) {
	int n, h, m, t;
	cin >> n >> h >> m >> t;

	m += (n-1)*t;
	h += m/60;
    h = h%24;
    m = m%60;

    cout << h << endl << m << endl;
    
	return 0;
}