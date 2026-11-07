// rea decompile_all
// name: FUN_10059c994
// address: 0x10059c994
// body: available
// range: 0x10059c994-0x10059cad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059c994(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  char local_41;
  
  uVar1 = param_1;
  if (*(byte *)(unaff_x20 + 4) != 2) {
    uVar1 = (ulong)(*(byte *)(unaff_x20 + 4) & 1);
    (**(code **)(param_3 + 0x68))(uVar1,0x21,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x03') {
      pcVar4 = *(code **)(param_3 + 0x80);
      local_41 = *(char *)((long)unaff_x20 + 0x21);
      FUN_1005b29c4();
      (*pcVar4)(&local_41,0x22,&DAT_1009d5788,uVar1,param_2,param_3);
    }
    plVar2 = unaff_x20;
    FUN_10059cad4();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_1005a86d4();
      (*pcVar4)(lVar3,999,&DAT_1009d5800,plVar2,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_10056301c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}

