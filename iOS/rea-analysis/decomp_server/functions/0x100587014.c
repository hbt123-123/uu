// rea decompile_all
// name: FUN_100587014
// address: 0x100587014
// body: available
// range: 0x100587014-0x1005872b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100587014(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (unaff_x20[0xb] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[10],unaff_x20[0xb],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[0xd] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xc],unaff_x20[0xd],2,param_2,param_3);
    }
    lVar1 = *unaff_x20;
    if (*(long *)(lVar1 + 0x10) != 0) {
      (**(code **)(param_3 + 0x100))(lVar1,3,param_2,param_3);
    }
    lVar2 = unaff_x20[4];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1005a8594();
      (*pcVar3)(lVar2,4,&DAT_1009d46c8,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[5];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1005a85d4();
      (*pcVar3)(lVar2,5,&DAT_1009d4c58,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[6];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1005a8614();
      (*pcVar3)(lVar2,6,&DAT_1009d4de0,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[7];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1005a8654();
      (*pcVar3)(lVar2,7,&DAT_1009d4a08,lVar1,param_2,param_3);
    }
    FUN_1005872b8();
    FUN_10058733c();
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[1],10,param_2,param_3);
    }
    if (*(long *)(unaff_x20[2] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[2],0xb,param_2,param_3);
    }
    if (unaff_x20[0x17] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0x16],unaff_x20[0x17],0xc,param_2,param_3);
    }
    FUN_1005873c0();
    if (*(long *)(unaff_x20[3] + 0x10) != 0) {
      (**(code **)(param_3 + 0x100))(unaff_x20[3],0xf,param_2,param_3);
    }
    FUN_10056301c(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}

