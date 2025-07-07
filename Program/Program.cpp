#include "Utility.h"

// 해시 테이블 크기 정의 및 테이블 선언
const int TABLE_SIZE = 11;		  // 해시 테이블의 전체 크기
int hashTable[TABLE_SIZE];		  // 실제 해시 테이블 배열

// 해시 테이블 초기화 함수
//void init() 
//{
//	for (int i = 0; i < TABLE_SIZE; ++i)
//		hashTable[i] = -1; // -1은 비어 있는 슬롯
//}

#pragma region 제곱 탐사 예시 코드
// 기본 해시 함수: 키를 테이블 크기로 나눈 나머지
//int hashFunction(int key)
//{
//	return key % TABLE_SIZE;
//}
//
//// 제곱 탐사를 이용한 해시 테이블 삽입 함수
//void insertQuadratic(int key)
//{
//	int i = 0;
//	int idx;
//	while (i < TABLE_SIZE) 
//	{
//		// 제곱 탐사 공식: (h(k) + i^2) % m
//		idx = (hashFunction(key) + i * i) % TABLE_SIZE;
//		
//		// 비어있는 칸이면 삽입
//		if (hashTable[idx] == -1)
//		{
//			hashTable[idx] = key;
//			cout << "[제곱 탐사] " << key << " 삽입 후 할당된 인덱스 : " << idx << endl;
//			return;
//		}
//		// 충돌 발생 후 다음 제곱 거리만큼 이동하기
//		i++;
//	}
//	// 테이블이 가득 찼을 때
//	cout << "[제곱 탐사] 테이블이 모두 찼습니다. " << key << endl;
//}
#pragma endregion

#pragma region 이중 해싱 예시 코드

// 두 번째 해시 함수: R - (key % R)
//int h2(int key) 
//{
//	int R = 7; // TABLE_SIZE보다 작은 소수
//	return R - (key % R);
//}
//
//// 이중 해싱을 이용한 해시 테이블 삽입 함수
//void insertDoubleHashing(int key) 
//{
//	int i = 0;
//	int idx;
//	while (i < TABLE_SIZE) 
//	{
//		// 이중 해싱 공식: (h1(k) + i * h2(k)) % m
//		idx = (hashFunction(key) + i * h2(key)) % TABLE_SIZE;
//
//		// 비어있는 칸이면 삽입
//		if (hashTable[idx] == -1) 
//		{
//			hashTable[idx] = key;
//			cout << "[이중 해싱] " << key << " 삽입 후 할당된 인덱스 : " << idx << endl;
//			return;
//		}
//		// 충돌 발생 후 다음 보조 해시 거리만큼 이동하기
//		i++;
//	}
//	// 테이블이 가득 찼을 때
//	cout << "[이중 해싱] 테이블이 모두 찼습니다. " << key << endl;
//}
#pragma endregion

// 결과 출력
//void printTable(const string& label) 
//{
//	cout << label << "\n";
//	for (int i = 0; i < TABLE_SIZE; ++i)
//		cout << "[" << i << "] " << hashTable[i] << endl;
//	cout << "--------------------------" << endl;
//}

int main()
{
#pragma region 연관 컨테이너 

#pragma region 해시 함수
	// 나머지 연산하기 (hash % bucket의 count)
	// hash collision (해시 충돌)
	// 평균 시간 : 최적이면 1, 최악이면 n?
	// 선형 탐사 : (클러스트링?이 자주 발생 == 탐색 결과가 인덱스 0이 나온다면 그부분만 계속 탐색한다? 이상한데) => n만큼의 시간이 걸림
	// 제곱 탐사
	// 부하율 : 보통 1.0 부하율이 너무 낮아도, 너무 높아도 좋지 않음 
	// 로드팩터(부하율) : 예를들어 로드팩터를 3으로 잡앗는데 그 이상으로 넘어가면 리해싱을 해야한다 -> 또 n만큼의 시간이 걸린다.
	// 체이닝 기법, 오픈 어드레싱(개방 주소법)? 
#pragma endregion

#pragma region unordered set
	// 해시 테이블 구조
	// 정렬이 일어나지 않고 데이터가 중복이 될 수 없음
	// unordered_set은 데이터 넣을 때 insert()를 사용
	// unordered_set은 데이터 지울 때 erase()를 사용
	// 범위기반 for문은 대부분 데이터 출력용이기에 const를 붙여주는 것이 좋음
	// 해싱 함수 처리로 인해 랜덤으로 출력됨 
	// 근데 이거 게임에 어떻게 적용하지 

	//unordered_set<const char*> uds;
	//
	//uds.max_load_factor(2.0f);		// 부하율이 2.0이 되려면 키 값은 기본의 2배인 16개가 들어가야한다.
	//
	//uds.insert("석탄");
	//uds.insert("철");
	//uds.insert("금");
	//uds.insert("에메랄드");
	//uds.insert("다이아몬드");
	//uds.insert("청금석");
	//uds.insert("레드스톤");
	//uds.insert("구리");
	//uds.insert("네더라이트");
	//
	////for (auto it : us)
	////{
	////	cout << it << " " << endl;
	////}
	//
	//cout << "Load Factor : " << uds.load_factor() << endl;		// 9 / 8? 9 / 64? 
	//cout << "Bucket Count : " << uds.bucket_count() << endl;
	//
	//uds.erase("구리");
	//
	//for (const char* elem : uds)
	//{
	//	cout << elem << endl;
	//}
	//
	//
	//if (uds.find("좀비") != uds.end())
	//{
	//	cout << "데이터가 존재합니다." << endl;
	//}
	//else
	//{
	//	cout << "데이터를 찾을 수 없습니다." << endl;
	//}

	
	
#pragma endregion

#pragma region set
	// 레드 블랙 트리 구조
	// 시간 복잡도 : logn
	
#pragma endregion

#pragma region unordered map
	
		// ->fisrt = key
		// ->second = value
	unordered_map<const char*, int> udm; // 범위기반으로 돌릴려면 auto& it 써야하는건가 
	udm.insert({ "좀비", 20 });
	udm.insert({ "거미", 20 });
	udm.insert({ "토끼", 4 });

	//sort(udm.begin(), udm.end());		// unordered_map은 sort함수를 쓸 수 없다. 

	for (auto& it : udm)
	{
		cout << it.first << " " << it.second << " " << endl;
	}

	udm.clear();

	cout << "udm의 load_factor : " << udm.load_factor() << endl;
	cout << "udm의 bucket_count : " << udm.bucket_count() << endl;

#pragma endregion


#pragma endregion
	// Todo : 제곱 탐사, 이중 해싱(오픈 어드레싱 해결 방법) 찾아보기 (공식 등)
	// 4:5 팀플? 반전이네 제작기간 일주일? 미쳤네 

#pragma region 제곱 탐사, 이중 해싱

#pragma region 오픈 어드레싱
	/*
	* 오픈 어드레싱 (Open Addressing)
	* - 해시 충돌이 났을 때, 새로운 빈 자리를 탐색해서 데이터를 저장하는 방식
	* - 충돌이 났어도 체이닝으로 연결하지 않고, 한 배열안에서 해결하려고 함
	* 공식
	* - h(k, i) = (h1(k) + f(i)) % m
	* - k = 키, i = 충돌 횟수(=probe 횟수)
	* - m =  해시 테이블 크기
	* - h1(k) = 기본 해시 함수
	* - f(i) = 충돌이 났을 때 사용하는 보조 함수
	*/
#pragma endregion

	
#pragma  region 제곱 탐사
	/* 제곱 탐사 (Quadratic Probing)
	* - 충돌이 발생했을 때, i^2만큼 떨어진 인덱스를 구하는 방법
	* 공식
	* h(k, i) = (h1(k) + c1 * i + c2 * i²) % m
	* 장점 : 클러스터링이 덜하다
	* 단점 : 오픈 어드레싱을 막지 못하고 보조 해시 함수보다 비효율적이다
	*/

#pragma endregion

#pragma region 이중 해싱
	/* 이중 해싱 (Double Hashing)
	* - 충돌이 발생했을 때 두 번째 해시 함수를 사용하여 이동 거리를 계산하는 방법
	* 공식
	* h(k, i) = (h1(k) + i * h2(k)) % m
	* h(2(k) = 두 번째 해시 함수
	* ex) h2(k) = R - (k % R)
	* R  = m보다 작은 소수
	* 장점
	* - 충돌 해결에 가장 효율적이다
	* - 클러스터링이 거의 없다
	* 단점
	* - 구현이 조금 복잡하다
	* - h2(k)는 0이 될 수 없다
	*/
#pragma endregion
	
	// 제곱 탐사 테스트
//init();
//insertQuadratic(1);
//insertQuadratic(25);
//insertQuadratic(23);
//insertQuadratic(37);
//insertQuadratic(54);
//cout << endl;
//printTable("== 제곱 탐사 결과 ==");
//
//
//// 이중 해싱 테스트
//init();
//insertDoubleHashing(1);
//insertDoubleHashing(25);
//insertDoubleHashing(23);
//insertDoubleHashing(37);
//insertDoubleHashing(54);
//printTable("== 이중 해싱 결과 ==");

// -1은 충돌 해결 과정에서 사용되지 않은, 비어 있는 슬롯이다.
//해시 함수 결과가 겹쳐서 충돌이 발생했지만, 탐사 과정에서 건너뛴 자리로 남아 있다.

#pragma endregion

	return 0;
}