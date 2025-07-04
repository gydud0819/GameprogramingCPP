#include "Utility.h"

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
	// 
#pragma endregion


#pragma endregion
	// Todo : 제곱 탐사, 이중 해싱(오픈 어드레싱 해결 방법?) 찾아보기 (공식 등)
	// 4:5 팀플? 반전이네 제작기간 일주일? 미쳤네 
	return 0;
}