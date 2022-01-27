//By Jacob Doney
//Compares two strings


bool areEqual(char arr1[], char arr2[], int size){
	bool isEqual = true;
    for(int i=0; i < size; i++){
		if(arr1[i] != arr2[i])
			isEqual = false;
	}
	return isEqual;
}

