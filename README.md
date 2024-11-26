# 코드 유사성 판단
Conference

  - [데이콘] 코드 유사성 판단 시즌2 AI 경진대회(2024.04.01)

## Purpose
C++ 코드간의 유사성을 판단할 수 있는 AI 알고리즘 개발

## Methodology
대량의 데이터를 분할하여 여러개의 LLM 모델 fine-tuning 및 앙상블(soft voting) 수행
	
  - Model : codebert-cpp
  - Dataset : 500개의 문제에 대한 코드 중에서 20000개의 Pair한 Sample로 추출한 데이터셋

## Result
약 98.24% 성능 달성(리더보드 8위)