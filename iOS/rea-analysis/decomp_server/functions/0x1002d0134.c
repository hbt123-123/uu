// rea decompile_all
// name: FUN_1002d0134
// address: 0x1002d0134
// body: available
// range: 0x1002d0134-0x1002d02a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0134(long param_1,char param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  puVar1 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar5 = local_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == '\0') {
    uVar3 = 0;
LAB_1002d0264:
    _swift_getObjectType(param_4);
    (**(code **)(param_5 + 0x30))(param_3,param_1,uVar3,param_4,param_5);
  }
  else {
    if (param_2 == '\x01') {
      _swift_getErrorValue(param_1,auStack_48,local_60);
      FUN_100277ae4(puVar5,FUN_1002897c8,0,"Alamofire/Request.swift",0x17,2,0x229,uStack_58,local_50
                   );
      lVar2 = 0;
      FUN_100277ad0();
      pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar3 = 0;
    }
    else {
      if (param_1 == 0) {
        uVar3 = 1;
        goto LAB_1002d0264;
      }
      lVar2 = 0;
      FUN_100277ad0();
      pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar3 = 1;
    }
    (*pcVar4)(puVar5,uVar3,1,lVar2);
    (**(code **)(*param_3 + 0x290))(puVar5);
    FUN_100040bb4(puVar5,&DAT_100a82460,&DAT_1008175c0);
  }
  return;
}

