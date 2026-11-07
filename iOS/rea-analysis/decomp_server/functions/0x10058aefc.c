// rea decompile_all
// name: FUN_10058aefc
// address: 0x10058aefc
// body: available
// range: 0x10058aefc-0x10058b053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058aefc(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  code *pcVar4;
  byte local_41;
  
  lVar2 = unaff_x20[1];
  lVar3 = param_1;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar4 = *(code **)(param_3 + 0x118);
    FUN_1005a8694();
    (*pcVar4)(lVar2,2,&DAT_1009d4978,lVar3,param_2,param_3);
    lVar3 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(byte *)(unaff_x20 + 9) != 2) {
    local_41 = *(byte *)(unaff_x20 + 9) & 1;
    pcVar4 = *(code **)(param_3 + 0x80);
    FUN_1005b2d34();
    (*pcVar4)(&local_41,3,&DAT_1009d4900,lVar3,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_10058b054();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_1005a86d4();
      (*pcVar4)(lVar3,999,&DAT_1009d5800,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[4],1000,0x20000000,param_2,param_3);
    FUN_10056301c(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}

