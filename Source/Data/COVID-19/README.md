# COVID-19 데이터 설명서

COVID-19 데이터 관련 내용 정리 및 검토 필요 리스트 작성

## Case

## PatientInfo

## Time

## TimeAge

## TimeGender

## TimeProvince

## Region

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

## Policy

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
