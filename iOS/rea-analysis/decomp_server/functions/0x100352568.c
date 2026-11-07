// rea decompile_all
// name: FUN_100352568
// address: 0x100352568
// body: available
// range: 0x100352568-0x100352687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100352568(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  
  lVar1 = 0;
  local_60 = param_4;
  __sSqMa(0,param_3);
  lVar3 = *(long *)(lVar1 + -8);
  lVar5 = (long)&local_60 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_3 + -8);
  lVar6 = lVar5 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar5,param_1,lVar1);
  lVar2 = lVar5;
  (**(code **)(lVar4 + 0x30))(lVar5,1,param_3);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar3 + 8))(lVar5,lVar1);
    FUN_10035241c(param_2);
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar6,lVar5,param_3);
    FUN_1003524a0(lVar6,param_2,param_3,local_60);
    (**(code **)(lVar4 + 8))(lVar6,param_3);
  }
  return;
}

