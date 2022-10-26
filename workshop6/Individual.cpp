//a1764714,a1780903,a1810750,a1794041,a1796553
#include <iostream>
#include <string>
#include "Individual.h"

	Individual::Individual(int length){
		binaryString = "";
		for (int i = 0 ; i<length ; i++){
				binaryString  = binaryString + '0'; 
		}
	}

	Individual::Individual(std::string newBinaryString){
		binaryString = newBinaryString;
	}

	std::string Individual::getString(){
		return binaryString; 
	}

	int Individual::getBit(int pos){
		int length = binaryString.length();
		if (pos > length || pos < 0){
			return -1; 
		}

		else {
			if(binaryString[pos-1] == '0'){
				return 0;
			}
			else{
				return 1;
			}
		}
	} 

	void Individual::flipBit(int pos){
		int length = binaryString.length();
	if (pos > length || pos < 0){
		
		}
	else{
			if(binaryString[pos-1] == '0'){
				binaryString[pos-1] = '1';
			}
			else{
				binaryString[pos-1] = '0';
			}
		}

	}

	int Individual::getMaxOnes(){
		int length = binaryString.length();

		int count = 0; 
		int saveCount = 0; 

		std::string previous; 
		previous = binaryString.at(0); 

		if (previous == "1"){
			count ++ ;
		}

		for ( int i= 1; i < length; i++){
			std::string now;
			now = binaryString.at(i); 

			if (now == "1"){
				count++;
			}

			else {
				if (saveCount < count){
					saveCount = count;
				}
				count = 0;
			}
			
		}

		if (saveCount >= count){
			return saveCount;
		}

		else {
			return count;
		}

	}

	int Individual::getLength(){
		return binaryString.length();
	}

	Individual::~Individual(){

	}