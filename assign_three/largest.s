     AREA     largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R1, #0x20000000
		ADD R2,R1,#0x00000005
		ADD R3,R2,#0x00000005
		MOV R4, #0x25
		MOV R5, #0x58
		MOV R6, #0x107
		STR R4,[R1]
		STR R5,[R2]   
		STR R6,[R3]
		LDR R7,[R1]
		LDR R8,[R2]
		LDR R9,[R3]
		MOV R10,R7 ; Assuming R7 to be largest and storing it in temporary register R10
		CMP R10,R8
		BGT L1  
		MOV R10,R8 
L1      CMP R10,R9
		BGT RES
		MOV R10,R9
		MOV R0, R10
RES  	BL printMsg
stop    B stop 
	 ENDFUNC
	 END 
		
		
		
		