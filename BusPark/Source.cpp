#include "Bus.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Enter task num:";
	cin >> n;
	switch (n) {
	case 1: {
		set<Bus, cmpBusNo> b;
		b.insert(Bus(3, "Ivan", "Ivanov", 127, 50));
		b.insert(Bus(7, "Ivan", "Ivanov", 128, 50));
		b.insert(Bus(4, "Ivan", "Ivanov", 11, 50));
		b.insert(Bus(9, "Ivan", "Ivanov", 65, 50));
		b.insert(Bus(12, "Ivan", "Ivanov", 38, 50));
		for (set<Bus>::iterator it = b.begin();it != b.end();it++)
			cout << *it << endl;

		ofstream fout("out.txt");
		if (fout.is_open()) {
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				fout << *it << endl;
		}
		else {
			cout << "file not open" << endl;
		}
		fout.close();
	}break;

	case 2: {
		set<Bus, cmpRouteNo> b;
		b.insert(Bus(3, "Ivan", "Ivanov", 127, 50));
		b.insert(Bus(7, "Petr", "Petrov", 128, 50));
		b.insert(Bus(4, "Asan", "Aman", 11, 50));
		b.insert(Bus(9, "Ifar", "Murat", 65, 50));
		b.insert(Bus(12, "Sergei", "Sergeev", 38, 50));
		for (set<Bus>::iterator it = b.begin();it != b.end();it++)
			cout << *it << endl;

		ofstream fout("out.txt");
		if (fout.is_open()) {
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				fout << *it << endl;
		}
		else {
			cout << "file not open" << endl;
		}
		fout.close();
	}break;
	case 3: {
		set<Bus, cmpRouteNo> b;
		b.insert(Bus(3, "Ivan", "Ivanov", 127, 50));
		b.insert(Bus(7, "Petr", "Petrov", 128, 30));
		b.insert(Bus(4, "Asan", "Aman", 11, 70));
		b.insert(Bus(9, "Ifar", "Murat", 65, 20));
		b.insert(Bus(12, "Sergei", "Sergeev", 38, 10));
		int k;
		cout << "¬ыберите по какому ключу сделать поиск:" << endl;
		cout << "1- по номеру автобуса" << endl;
		cout << "2- по имени" << endl;
		cout << "3- по фамилии" << endl;
		cout << "4- по номеру маршрута" << endl;
		cout << "5- по кол-ву мест: ";
		cin >> k;
		switch (k) {
		case 1: {
			int bNo;
			cout << "¬ведите номер автобуса:";
			cin >> bNo;
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				if (it->getBusNo() == bNo)
					cout << *it << endl;
		}break;
		case 2: {
			string name;
			cout << "¬ведите им€:";
			cin >> name;
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				if (it->getName() == name)
					cout << *it << endl;
		}break;
			case 3: {
				string sname;
				cout << "¬ведите им€:";
				cin >> sname;
				for (set<Bus>::iterator it = b.begin();it != b.end();it++)
					if (it->getSname() == sname)
						cout << *it << endl;
			}break;
			case 4: {
				int rNo;
				cout << "¬ведите номер автобуса:";
				cin >> rNo;
				for (set<Bus>::iterator it = b.begin();it != b.end();it++)
					if (it->getRouteNo()== rNo)
						cout << *it << endl;
			}break;
			case 5: {
				int count;
				cout << "¬ведите кол-во мест:";
				cin >> count;
				for (set<Bus>::iterator it = b.begin();it != b.end();it++)
					if (it->getCountPl() == count)
						cout << *it << endl;
			}break;

			
		}
	}break;

		//считывание с файла и запись в файл
	case 4: {
		set<Bus, cmpRouteNo> b;
		ifstream in_file("bus.txt");

		Bus bus;
		while (!in_file.eof()) {
			in_file >> bus;
			b.emplace(bus);			
		}
		for (set<Bus>::iterator it = b.begin();it != b.end();it++)
						cout << *it << endl;

		cout << "-----------------------------------------------------------" << endl;

		int k;
		cout << "¬ыберите по какому ключу сделать поиск:" << endl;
		cout << "1- по номеру автобуса" << endl;
		cout << "2- по имени" << endl;
		cout << "3- по фамилии" << endl;
		cout << "4- по номеру маршрута" << endl;
		cout << "5- по кол-ву мест: ";
		cin >> k;
		switch (k) {
		case 1: {
			ofstream fout("out.txt");
			int bNo;
			cout << "¬ведите номер автобуса:";
			cin >> bNo;
			if (fout.is_open()) {
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				if (it->getBusNo() == bNo)
				{
					cout << *it << endl;
					fout << *it << endl;
				}
			}
			else {
				cout << "file not open" << endl;
			}
			fout.close();
		}break;
		case 2: {
			ofstream fout("out.txt");
			string name;
			cout << "¬ведите им€:";
			cin >> name;
			if (fout.is_open()) {
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				if (it->getName() == name)
				{
					cout << *it << endl;
					fout << *it << endl;
				}
			}
			else {
				cout << "file not open" << endl;
			}
			fout.close();
		}break;
		case 3: {
			ofstream fout("out.txt");
			string sname;
			cout << "¬ведите им€:";
			cin >> sname;
			if (fout.is_open()) {
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				if (it->getSname() == sname)
				{
					cout << *it << endl;
					fout << *it << endl;
				}
			}
			else {
				cout << "file not open" << endl;
			}
			fout.close();

		}break;
		case 4: {
			ofstream fout("out.txt");
			int rNo;
			cout << "¬ведите номер автобуса:";
			cin >> rNo;
			if (fout.is_open()) {
				for (set<Bus>::iterator it = b.begin();it != b.end();it++)
					if (it->getRouteNo() == rNo)
					{
						cout << *it << endl;
						fout << *it << endl;
					}
			}
			else {
				cout << "file not open" << endl;
			}
			fout.close();
		}break;
		case 5: {
			ofstream fout("out.txt");
			int count;
			cout << "¬ведите кол-во мест:";
			cin >> count;
			if (fout.is_open()) {
			for (set<Bus>::iterator it = b.begin();it != b.end();it++)
				if (it->getCountPl() == count)
				{
					cout << *it << endl;
					fout << *it << endl;
				}
			}
			else {
				cout << "file not open" << endl;
			}
			fout.close();
		}break;
		}
	}break;
	}
	system("pause");
	return 0;
}