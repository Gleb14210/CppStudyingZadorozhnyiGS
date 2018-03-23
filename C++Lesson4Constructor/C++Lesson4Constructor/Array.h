class Array {
private:
	int m_size;
	int m_index;
	int* m_pArr;
	int* m_copy;
public:
	Array(); // Init counstructor
	Array(int size);
	Array(const Array& object); // Copy constructor
	~Array();
	Array& operator= (const Array& object);
	Array& operator+ (const Array& object);
	Array& operator+= (const Array& object);

	void Show();
};