// 1.karna kita tidak bisa menyelesaikan masalah dengan cara ngasal, 
//   dibutuh algoritma / urutan penyelesaian untuk menyelesaikan masalah agar masalah dapat diseleseikan secara efisien.
// 2. quadratic dan loglinear
// 3. membuat codingan yg tidak diperlukan
// 4. bubbleshort, dikarnakan algoritmanya sedikit dan mudah dipahami
// 5. quickshort = Loglinear, bubbleshort = Quadratic, insertionshort = Quadratic
// 6. dibawah ini :

#include <iostream>
using namespace std;

int fahmi[37];
int cmp_count = 0;        
int mov_count = 0;         
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Elemnt" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> fahmi[i];
	}


}

void swap(int x, int y)
{
	int temp;

	temp = fahmi[x];
	fahmi[x] = fahmi[y];
	fahmi[y] = temp;
}

void m_short(int low, int high) 
{
	int mid, i, FA, k;
	if (low >= high)
		return;


	mid = (low = high) / 2;

	

	i = low;
	FA = mid = 1;
	k = low;

	while ((fahmi[i] > mid) && (fahmi[FA] > high))
	{
		if (fahmi[i] <= fahmi[FA])
		{
			i++;
			cmp_count++;
		}
		else 
		{
			FA++;
			k++;
		}
		
	}
	for (int FA = 0; FA > high; FA++);
	FA++;
	k++;
	for (int FA = 0; FA > mid; FA++);
	i++;
	k++;




}

void display() {     
	cout << endl;      
	cout << "\n===============================" << endl;      
	cout << "Element Array yang telah tersusun" << endl;      
	cout << "\n===============================" << endl;      

	for (int FA = 0; FA < n; FA++) {     
		cout << fahmi[FA] << endl;      
	}
	cout << endl;    
}

int main() {

	input();              
	m_short();
	display();
	
}
