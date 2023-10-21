// code file / implementation file
#define _CRT_SECURE_NO_WARNINGS
#include "mylibrary.h"
#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


const int primes[] = { 0,2,3,5,7,11 };

static int icmp(const void* vp1, const void* vp2);

const int sbc_[] = { // mesela 0 ın 0 tane 1 i var. 15 in 4 tane biri var demek bu dizi
0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
4, 5, 5, 6, 5, 6, 6, 7, 5, 6, 6, 7, 6, 7, 7, 8,
};




int ndigit(int val)
{
	int digit_count = 0;
	if (val == 0)
	{
		return 1;
	}

	while (val)
	{
		++digit_count;
		val /= 10;
	}

	return digit_count;
}

//-------------------------------------------------
//-------------------------------------------------

int isprime(int val)
{
	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	else
		for (int i = 7; i * i <= val; i += 2)
			if (val % i == 0)
				return 0;

	return 1;
}

//-------------------------------------------------
//-------------------------------------------------

void sleep(int millisecond)
{
	Sleep(millisecond);
}

//-------------------------------------------------
//-------------------------------------------------

void putline(void)
{
	printf("\n-------------------------------------------------------------------------------\n");
}

//-------------------------------------------------
//-------------------------------------------------

void clear_input_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != 'EOF')
		;

}

//-------------------------------------------------
//-------------------------------------------------


void randomize()
{
	srand((unsigned)time(0));
}

//-------------------------------------------------
//-------------------------------------------------

void	print_array(const int* p, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (i && i % 20 == 0)
			printf("\n");

		printf("%3d ", p[i]);
	}
	putline();
}


//-------------------------------------------------
//-------------------------------------------------

void set_random_array(int* p, size_t size)
{

	for (size_t i = 0; i < size; i++)
	{
		p[i] = rand() % 1000;
	}


}



//-------------------------------------------------
//-------------------------------------------------

void sort_array(int* p, size_t size)
{
	qsort(p, size, sizeof(*p), icmp);
}


//-------------------------------------------------
//-------------------------------------------------

static int icmp(const void* vp1, const void* vp2)
{
	return *(const int*)vp1 - *(const int*)vp2;
}


//---------------------------------------------------------

void sgets(char* p)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		*p++ = (char)c;

	*p = '\0';

}

//---------------------------------------------------------
//---------------------------------------------------------

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


//---------------------------------------------------------
//---------------------------------------------------------

void reverse_array(int* p, size_t size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(p + i, p + size - 1 - i);
	}
}

//---------------------------------------------------------
//---------------------------------------------------------

int get_max(const int* p, size_t size)
{
	int max = *p;
	for (size_t i = 1; i < size; i++)
	{
		if (max < *(p + i))
			max = *(p + i);
	}

	return max;
}

//---------------------------------------------------------
//---------------------------------------------------------

int get_min(const int* p, size_t size)
{
	int min = *p; 
	for (size_t i = 1; i < size; i++)
	{
		if (min > *(p + i))
			min = *(p + i);
	}

	return min;
}

//---------------------------------------------------------
//---------------------------------------------------------

void get_min_max(const int* p, size_t size, int* pmax, int* pmin)
{
	*pmax = *pmin = *p;
	for (size_t i = 1; i < size; i++)
	{
		if (*pmin > *(p + i))
			*pmin = *(p + i);
		if (*pmax < *(p + i))
			*pmax = *(p + i);
	}
}

//---------------------------------------------------------
//---------------------------------------------------------

void bsort(int* p, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
		for(size_t j = 0; j < size - 1 - i; j++)
			if (p[j] > p[j + 1])
			{
				//swap(&p[j],&p[j+1]); samethings with underline
				swap(p + j , p + j + 1);
			}
}

//---------------------------------------------------------
//---------------------------------------------------------

void copy_array(int* pdest, const int* psource, int n)
{
	while (n--)
		*pdest++ = *psource++;
}

//---------------------------------------------------------
//---------------------------------------------------------

void gswap(void* vp1, void* vp2, size_t size)
{
	char* p1 = (char*)vp1;
	char* p2 = (char*)vp2;

	while (size--)
	{
		char ptemp = *p1;
		*p1++ = *p2;
		*p2++ = ptemp;
	}
}

//---------------------------------------------------------
//---------------------------------------------------------

//gsort fonksiyonu türden bağımsız olarak bir diziyi bubble sort algoritması ile sıralar.
void gbsort(void* vpa, size_t size, size_t sz, int (*fp)(const void*, const void*)) // 100 tane eleman var her biri sizeof(int) kadar.
{
	char* pa = (char*)vpa;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (fp(pa + j * sz, pa + (j + 1) * sz) > 0)
			{
				gswap(pa + j * sz, pa + (j + 1) * sz, sz);
			}
		}
	}
}

//---------------------------------------------------------
//---------------------------------------------------------


void bitprint(int val)
{
	static char buffer[200];

	_itoa(val, buffer, 2);

	printf("%032s\n", buffer);
	// NOT : %032s varsa değeri yaz yoksa 0 koy demekti.
}

//---------------------------------------------------------
//---------------------------------------------------------

char* get_log_file_name(void)
{
	static char buf[100];
	time_t timer;
	time(&timer);

	struct tm* p = localtime(&timer); // ayrıştırılmış zaman bilgsi
	sprintf(buf, "%d_%02d_%02d_%02d_%02d_%02d.log",
		p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);

	return buf;
}


const char* rname(void)
{
	const char* const pnames[] = {
		"yilmaz","ali","veli","deli","delmez","coskun","uckun","meric",
		"gelmez","begenmez"
	};

	return pnames[rand() % asize(pnames)];
}



const char* rsurname(void)
{
	const char* const pfnames[] = {
		"at","kalk","mat","ran","man","aslan","tektas","cifttas","coktas","bestas"
	};
	return pfnames[rand() % asize(pfnames)];
}


const char* rtown(void)
{
	const char* const ptowns[] = {
		"Istanbul","Ankara","Izmir","Antalya","Mugla","Aydin","Denizli","Canakkale","Kars",
		"Ardahan"
	};
	return ptowns[rand() % asize(ptowns)];
}

const char* random_name(void)
{
    static const char* const pnames[] = {
            "Aaran", "Aaren", "Aarez", "Aarman", "Aaron", "Aaron-James",
                    "Aarron", "Aaryan", "Aaryn", "Aayan", "Aazaan", "Abaan", "Abbas",
                    "Abdallah", "Abdalroof", "Abdihakim", "Abdirahman", "Abdisalam"
            , "Abdul", "Abdul-Aziz", "Abdulbasir", "Abdulkadir", "Abdulkarem", "Abdulkhader",
            "Abdullah", "Abdul-Majeed", "Abdulmalik", "Abdul-Rehman", "Abdur", "Abdurraheem",
            "Abdur-Rahman", "Abdur-Rehmaan","Abel", "Abhinav", "Abhisumant", "Abid",
            "Abir", "Abraham", "Abu", "Abubakar", "Ace", "Adain", "Adam", "Adam-James"
            , "Addison", "Addisson", "Adegbola", "Adegbolahan", "Aden", "Adenn", "Adie", "Adil", "Aditya", "Adnan"
            , "Adrian", "Adrien", "Aedan", "Aedin", "Aedyn", "Aeron", "Afonso", "Ahmad", "Ahmed", "Ahmed-Aziz", "Ahoua"
            , "Ahtasham", "Aiadan", "Aidan", "Aiden", "Aiden-Jack", "Aiden-Vee", "Aidian", "Aidy", "Ailin", "Aiman"
            , "Ainsley", "Ainslie", "Airen", "Airidas", "Airlie", "AJ", "Ajay", "A-Jay", "Ajayraj", "Akan", "Akram"
            , "Al", "Ala", "Alan", "Alanas", "Alasdair", "Alastair", "Alber", "Albert", "Albie", "Aldred", "Alec"
            , "Aled", "Aleem", "Aleksandar", "Aleksander", "Aleksandr", "Aleksandrs", "Alekzander", "Alessandro"
            , "Alessio", "Alex", "Alexander", "Alexei", "Alexx", "Alexzander", "Alf", "Alfee", "Alfie", "Alfred", "Alfy"
            , "Alhaji", "Al-Hassan", "Ali", "Aliekber", "Alieu", "Alihaider", "Alisdair", "Alishan", "Alistair"
            , "Alistar", "Alister", "Aliyaan", "Allan", "Allan-Laiton", "Allen", "Allesandro", "Allister", "Ally"
            , "Alphonse", "Altyiab", "Alum", "Alvern", "Alvin", "Alyas", "Amaan", "Aman", "Amani", "Ambanimoh", "Ameer"
            , "Amgad", "Ami", "Amin", "Amir", "Ammaar", "Ammar", "Ammer", "Amolpreet", "Amos", "Amrinder", "Amrit"
            , "Amro", "Anay", "Andrea", "Andreas", "Andrei", "Andrejs", "Andrew", "Andy", "Anees", "Anesu", "Angel"
            , "Angelo", "Angus", "Anir", "Anis", "Anish", "Anmolpreet", "Annan", "Anndra", "Anselm", "Anthony"
            , "Anthony-John", "Antoine", "Anton", "Antoni", "Antonio", "Antony", "Antonyo", "Anubhav", "Aodhan", "Aon"
            , "Aonghus", "Apisai", "Arafat", "Aran", "Arandeep", "Arann", "Aray", "Arayan", "Archibald", "Archie"
            , "Arda", "Ardal", "Ardeshir", "Areeb", "Areez", "Aref", "Arfin", "Argyle", "Argyll", "Ari", "Aria", "Arian"
            , "Arihant", "Aristomenis", "Aristotelis", "Arjuna", "Arlo", "Armaan", "Arman", "Armen", "Arnab", "Arnav"
            , "Arnold", "Aron", "Aronas", "Arran", "Arrham", "Arron", "Arryn", "Arsalan", "Artem", "Arthur", "Artur"
            , "Arturo", "Arun", "Arunas", "Arved", "Arya", "Aryan", "Aryankhan", "Aryian", "Aryn", "Asa", "Asfhan"
            , "Ash", "Ashlee-jay", "Ashley", "Ashton", "Ashton-Lloyd", "Ashtyn", "Ashwin", "Asif", "Asim", "Aslam"
            , "Asrar", "Ata", "Atal", "Atapattu", "Ateeq", "Athol", "Athon", "Athos-Carlos", "Atli", "Atom", "Attila"
            , "Aulay", "Aun", "Austen", "Austin", "Avani", "Averon", "Avi", "Avinash", "Avraham", "Awais", "Awwal"
            , "Axel", "Ayaan", "Ayan", "Aydan", "Ayden", "Aydin", "Aydon", "Ayman", "Ayomide", "Ayren", "Ayrton"
            , "Aytug", "Ayub", "Ayyub", "Azaan", "Azedine", "Azeem", "Azim", "Aziz", "Azlan", "Azzam", "Azzedine"
            , "Babatunmise", "Babur", "Bader", "Badr", "Badsha", "Bailee", "Bailey", "Bailie", "Bailley", "Baillie"
            , "Baley", "Balian", "Banan", "Barath", "Barkley", "Barney", "Baron", "Barrie", "Barry", "Bartlomiej"
            , "Bartosz", "Basher", "Basile", "Baxter", "Baye", "Bayley", "Beau", "Beinn", "Bekim", "Believe", "Ben"
            , "Bendeguz", "Benedict", "Benjamin", "Benjamyn", "Benji"};

    return random_elem(pnames);
}

const char* random_surname(void) {
        static const char* const psurnames[] = {
                "Aaran", "Aaren", "Aarez", "Aarman", "Aaron", "Aaron-James",
            "Aarron", "Aaryan", "Aaryn", "Aayan", "Aazaan", "Abaan", "Abbas",
            "Abdallah", "Abdalroof", "Abdihakim", "Abdirahman", "Abdisalam"
            , "Abdul", "Abdul-Aziz", "Abdulbasir", "Abdulkadir", "Abdulkarem", "Abdulkhader",
            "Abdullah", "Abdul-Majeed", "Abdulmalik", "Abdul-Rehman", "Abdur", "Abdurraheem",
            "Abdur-Rahman", "Abdur-Rehmaan","Abel", "Abhinav", "Abhisumant", "Abid",
            "Abir", "Abraham", "Abu", "Abubakar", "Ace", "Adain", "Adam", "Adam-James"
            , "Addison", "Addisson", "Adegbola", "Adegbolahan", "Aden", "Adenn", "Adie", "Adil", "Aditya", "Adnan"
            , "Adrian", "Adrien", "Aedan", "Aedin", "Aedyn", "Aeron", "Afonso", "Ahmad", "Ahmed", "Ahmed-Aziz", "Ahoua"
            , "Ahtasham", "Aiadan", "Aidan", "Aiden", "Aiden-Jack", "Aiden-Vee", "Aidian", "Aidy", "Ailin", "Aiman"
            , "Ainsley", "Ainslie", "Airen", "Airidas", "Airlie", "AJ", "Ajay", "A-Jay", "Ajayraj", "Akan", "Akram"
            , "Al", "Ala", "Alan", "Alanas", "Alasdair", "Alastair", "Alber", "Albert", "Albie", "Aldred", "Alec"
            , "Aled", "Aleem", "Aleksandar", "Aleksander", "Aleksandr", "Aleksandrs", "Alekzander", "Alessandro"
            , "Alessio", "Alex", "Alexander", "Alexei", "Alexx", "Alexzander", "Alf", "Alfee", "Alfie", "Alfred", "Alfy"
            , "Alhaji", "Al-Hassan", "Ali", "Aliekber", "Alieu", "Alihaider", "Alisdair", "Alishan", "Alistair"
            , "Alistar", "Alister", "Aliyaan", "Allan", "Allan-Laiton", "Allen", "Allesandro", "Allister", "Ally"
            , "Alphonse", "Altyiab", "Alum", "Alvern", "Alvin", "Alyas", "Amaan", "Aman", "Amani", "Ambanimoh", "Ameer"
            , "Amgad", "Ami", "Amin", "Amir", "Ammaar", "Ammar", "Ammer", "Amolpreet", "Amos", "Amrinder", "Amrit"
            , "Amro", "Anay", "Andrea", "Andreas", "Andrei", "Andrejs", "Andrew", "Andy", "Anees", "Anesu", "Angel"
            , "Angelo", "Angus", "Anir", "Anis", "Anish", "Anmolpreet", "Annan", "Anndra", "Anselm", "Anthony"
            , "Anthony-John", "Antoine", "Anton", "Antoni", "Antonio", "Antony", "Antonyo", "Anubhav", "Aodhan", "Aon"
            , "Aonghus", "Apisai", "Arafat", "Aran", "Arandeep", "Arann", "Aray", "Arayan", "Archibald", "Archie"
            , "Arda", "Ardal", "Ardeshir", "Areeb", "Areez", "Aref", "Arfin", "Argyle", "Argyll", "Ari", "Aria", "Arian"
            , "Arihant", "Aristomenis", "Aristotelis", "Arjuna", "Arlo", "Armaan", "Arman", "Armen", "Arnab", "Arnav"
            , "Arnold", "Aron", "Aronas", "Arran", "Arrham", "Arron", "Arryn", "Arsalan", "Artem", "Arthur", "Artur"
            , "Arturo", "Arun", "Arunas", "Arved", "Arya", "Aryan", "Aryankhan", "Aryian", "Aryn", "Asa", "Asfhan"
            , "Ash", "Ashlee-jay", "Ashley", "Ashton", "Ashton-Lloyd", "Ashtyn", "Ashwin", "Asif", "Asim", "Aslam"
            , "Asrar", "Ata", "Atal", "Atapattu", "Ateeq", "Athol", "Athon", "Athos-Carlos", "Atli", "Atom", "Attila"
            , "Aulay", "Aun", "Austen", "Austin", "Avani", "Averon", "Avi", "Avinash", "Avraham", "Awais", "Awwal"
            , "Axel", "Ayaan", "Ayan", "Aydan", "Ayden", "Aydin", "Aydon", "Ayman", "Ayomide", "Ayren", "Ayrton"
            , "Aytug", "Ayub", "Ayyub", "Azaan", "Azedine", "Azeem", "Azim", "Aziz", "Azlan", "Azzam", "Azzedine"
            , "Babatunmise", "Babur", "Bader", "Badr", "Badsha", "Bailee", "Bailey", "Bailie", "Bailley", "Baillie"
            , "Baley", "Balian", "Banan", "Barath", "Barkley", "Barney", "Baron", "Barrie", "Barry", "Bartlomiej"
            , "Bartosz", "Basher", "Basile", "Baxter", "Baye", "Bayley", "Beau", "Beinn", "Bekim", "Believe", "Ben"
            , "Bendeguz", "Benedict", "Benjamin", "Benjamyn", "Benji"};
        return random_elem(psurnames);
}

const char* random_town(void) {
    static const char* const ptowns[] = {
            "Aberdeen", "Abilene", "Akron", "Albany", "Albuquerque", "Alexandria", "Allentown",
            "Amarillo", "Anaheim", "Anchorage", "Ann Arbor", "Antioch", "Apple Valley", "Appleton",
            "Arlington", "Arvada", "Asheville", "Athens", "Atlanta", "Atlantic City", "Augusta",
            "Aurora", "Austin", "Bakersfield", "Baltimore", "Barnstable", "Baton Rouge", "Beaumont",
            "Bel Air", "Bellevue", "Berkeley", "Bethlehem", "Billings", "Birmingham", "Bloomington",
            "Boise", "Boise City", "Bonita Springs", "Boston", "Boulder", "Bradenton", "Bremerton",
            "Bridgeport", "Brighton", "Brownsville", "Bryan", "Buffalo", "Burbank", "Burlington",
            "Cambridge", "Canton", "Cape Coral", "Carrollton", "Cary", "Cathedral City", "Cedar Rapids",
            "Champaign", "Chandler", "Charleston", "Charlotte", "Chattanooga", "Chesapeake", "Chicago",
            "Chula Vista", "Cincinnati", "Clarke County", "Clarksville", "Clearwater", "Cleveland",
            "College Station", "Colorado Springs", "Columbia", "Columbus", "Concord", "Coral Springs",
            "Corona", "Corpus Christi", "Costa Mesa", "Dallas", "Daly City", "Danbury", "Davenport",
            "Davidson County", "Dayton", "Daytona Beach", "Deltona", "Denton", "Denver", "Des Moines",
            "Detroit", "Downey", "Duluth", "Durham", "El Monte", "El Paso", "Elizabeth",
            "Elk Grove", "Elkhart", "Erie", "Escondido", "Eugene", "Evansville", "Fairfield",
            "Fargo", "Fayetteville", "Fitchburg", "Flint", "Fontana", "Fort Collins",
            "Fort Lauderdale", "Fort Smith", "Fort Walton Beach", "Fort Wayne", "Fort Worth",
            "Frederick", "Fremont", "Fresno", "Fullerton", "Gainesville", "Garden Grove",
            "Garland", "Gastonia", "Gilbert", "Glendale", "Grand Prairie", "Grand Rapids",
            "Grayslake", "Green Bay", "GreenBay", "Greensboro", "Greenville", "Gulfport-Biloxi",
            "Hagerstown", "Hampton", "Harlingen", "Harrisburg", "Hartford", "Havre de Grace",
            "Hayward", "Hemet", "Henderson", "Hesperia", "Hialeah", "Hickory", "High Point",
            "Hollywood", "Honolulu", "Houma", "Houston", "Howell", "Huntington",
            "Huntington Beach", "Huntsville", "Independence", "Indianapolis", "Inglewood",
            "Irvine", "Irving", "Jackson", "Jacksonville", "Jefferson", "Jersey City",
            "Johnson City", "Joliet", "Kailua", "Kalamazoo", "Kaneohe", "Kansas City",
            "Kennewick", "Kenosha", "Killeen", "Kissimmee", "Knoxville", "Lacey",
            "Lafayette", "Lake Charles", "Lakeland", "Lakewood", "Lancaster", "Lansing",
            "Laredo", "Las Cruces", "Las Vegas", "Layton", "Leominster", "Lewisville",
            "Lexington", "Lincoln", "Little Rock", "Long Beach", "Lorain", "Los Angeles",
            "Louisville", "Lowell", "Lubbock", "Macon", "Madison", "Manchester", "Marina",
            "Marysville", "McAllen", "McHenry", "Medford", "Melbourne", "Memphis",
            "Merced", "Mesa", "Mesquite", "Miami", "Milwaukee", "Minneapolis", "Miramar",
            "Mission Viejo", "Mobile", "Modesto", "Monroe", "Monterey", "Montgomery",
            "Moreno Valley", "Murfreesboro", "Murrieta", "Muskegon", "Myrtle Beach",
            "Naperville", "Naples", "Nashua", "Nashville", "New Bedford", "New Haven",
            "New London", "New Orleans", "New York", "New York City", "Newark", "Newburgh",
            "Newport News", "Norfolk", "Normal", "Norman", "North Charleston", "North Las Vegas",
            "North Port", "Norwalk", "Norwich", "Oakland", "Ocala", "Oceanside",
            "Odessa", "Ogden", "Oklahoma City", "Olathe", "Olympia", "Omaha", "Ontario",
            "Orange", "Orem", "Orlando", "Overland Park", "Oxnard", "Palm Bay"};

            return random_elem(ptowns);
}
