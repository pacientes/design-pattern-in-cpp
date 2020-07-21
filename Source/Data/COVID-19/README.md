# COVID-19 데이터 설명서

COVID-19 데이터 관련 내용 정리 및 검토 필요 리스트 작성

## Case

- COVID-19 발생 경우

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|case_id|감염 사례의 ID|INT|1000001|
|province|지방|STRING|서울|
|city|도시|STRING|용산구|
|group|집단감염 여부|BOOL|TRUE|
|infection_case|감염 사례|STRING|Itaewon Clubs|
|confirmed|누적 확진자 수|INT|139|
|latitude|지역 위도(WGS84)|FLOAT|37.538621|
|longitude|지역 경도(WGS84)|FLOAT|126.992652|

### To-Do

-

---

## PatientInfo

- 환자 정보

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|patient_id|환자 ID|INT|1000000001|
|global_num|KCDC에서 제공 한 숫자|INT|**None**|
|sex|환자의 성별|STRING|male|
|birth_year|환자의 출생 년도|INT|**None**|
|age|환자의 나이|STRING|50s|
|country|환자의 국가|STRING|Korea|
|province|환자의 지방|STRING|서울|
|city|환자의 도시|STRING|강서구(새로 생긴듯)|
|disease|질병|BOOL|**None**|
|infection_case|감염경로|STRING|overseas inflow|
|infection_order|감염 순서|INT|**None**|
|infected_by|환자를 감염시킨 사람의 ID|INT|2002000001|
|contact_number|사람들과의 접촉 수|INT|75|
|symptom_onset_date|증상이 시작된 날짜|DATE|2020-01-22|
|confirmed_date|확진 날짜|DATA|2020-01-23|
|released_date|퇴원 날짜|DATE|2020-02-05|
|deceased_date|사망한 날짜|DATE|2020-03-02|
|state|격리상태(격리, 퇴원 사망)|STRING|released|

### To-Do

- 데이터 정의서와 실제 데이터가 맞지 않음. 확인 필요

---

## Time

- 날짜별 확진자, 사망자 데이터

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|date|날짜|DATE|2020-01-20|
|time|시간|INT|16|
|test|누적 테스트 수|INT|1|
|negative|누적 음성 수|INT|0|
|confirmed|누적 확진자 수|INT|1|
|released|누적 퇴원 수|INT|0|
|deceased|누적 사망자 수|INT|0|

### To-Do

- 시간대별 검사, 음석 확진자 수를 그래프로 그려보기

---

## TimeAge

- 날짜 해당 연령대(10대 20대 30대 등)별 확진자, 사망자 데이터

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|date|날짜|DATE|2020-03-02|
|time|시간|INT|0|
|age|환자의 나이|STRING|0s|
|confirmed|누적 확진자 수|INT|32|
|deceased|누적 사망자 수|INT|0|

### To-Do

---

## TimeGender

- 날짜 해당 성별(male, female) 확진자, 사망자 데이터

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|date|날짜|DATE|2020-03-02|
|time|시간|INT|0|
|sex|성별|STRING|male|
|confirmed|누적 확진자 수|INT|1591|
|deceased|누적 사망자 수|INT||13|

### To-Do

---

## TimeProvince

- 날짜별 한국 광역도시별 확진자, 사망자 데이터

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|date|날짜|DATE|2020-01-20|
|time|시간|INT|16|
|province|지방|STRING|서울|
|confirmed|누적 확진자 수|INT|0|
|released|누적 퇴원 수|INT|0|
|deceased|누적 사망 수|INT|0|

---

## Region

- 각 지역에 대한 기초 데이터

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|code|지역코드|INT|10000|
|province|지방|STRING|서울|
|city|도시|STRING|강남구|
|latitude|방문한 위도 (WGS84)|FLOAT|37.518421|
|longitude|방문한 경도 (WGS84)|FLOAT|127.047221999999|
|elementary_school_count|초등학교 수|INT|33|
|kindergarten_count|유치원 수|INT|38|
|university_count|대학 수|INT|0|
|academy_ratio|학원 비율|FLOAT|4.18|
|elderly_population_ratio|노인 인구 비율|FLOAT|13.17|
|elderly_alone_ratio|독거 노인 가구 비율|FLOAT|4.3|
|nursing_home_count|요양원 수|INT|3088|

### To-Do

- 각 지역별 기반 정보(초등학교, 유치원, 대학 수 등)별 코로나 확진자 발생 정도를 표시하면 좋을듯?

---

## Policy

- 국가별 정책 시행 기간 및 정책에 데이터

|Column Name|Description|Data Type|Sample|
|----------|----------|-----|-----|
|policy_id|정책의 ID|INT|1|
|country|정책을 시행 한 국가|STRING|Korea|
|type|정책의 유형|STRING|Alert|
|gov_policy|정부의 정책|STRING|Infectious Disease Alert Level|
|detail|정책의 세부 사항|STRING|Level 1 (Blue)|
|start_date|정책의 시작일|DATE|2020-01-03|
|end_date|정책의 종료일|DATE|2020-01-19|

### To-Do

- 정책 시행 여부에 따라 국가별 확진자 발생 추이를 살펴보면 좋을듯?

---
