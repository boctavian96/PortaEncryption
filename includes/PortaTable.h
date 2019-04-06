#ifndef PORTATABLE_H
#define PORTATABLE_H 

class PortaTable
{ 
	public: 
		PortaTable();
		virtual ~PortaTable();
        bool isKey(char key);
	protected:
	private:
        char m_pk1;
        char m_pk2;
        map<const char key, char element> m_elements;
};

#endif // PORTATABLE_H
