void kmain(void* mbd, unsigned int magic) {
	if(magic != 0x2BADB002) {
		clear();
		print("Error loading!!",0x04);
	}else{
		clear();
		print("Welcome to Sirsak Operating System",0x07);
	}
}

void print(char* message, int color) {
	char* mem = (char*)(0xb8000);
	while(*message!=0){
		*mem = *message;
		mem++;
		message++;
		*mem = (char*)color;
		mem++;
	}
}

void clear(void){
	char* mem = (char*)(0xb8000);
	while(*mem !=0){
		*mem = 0;
		mem++;	
	}
}
