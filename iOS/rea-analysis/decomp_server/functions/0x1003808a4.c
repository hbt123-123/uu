// rea decompile_all
// name: FUN_1003808a4
// address: 0x1003808a4
// body: available
// range: 0x1003808a4-0x1003809c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003808a4(long param_1,ulong param_2,ID param_3,int param_4)

{
  int iVar1;
  ID IVar2;
  ulong uVar3;
  undefined1 auStack_78 [30];
  char local_5a [2];
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  undefined1 *puVar4;
  
  IVar2 = objc_stub::length(param_3);
  if (IVar2 == 0) {
    param_1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      if ((int)param_2 < 0) {
        uVar3 = 0xe;
      }
      else {
        uVar3 = param_2;
        FUN_10039280c(param_2);
        uVar3 = (ulong)((int)uVar3 + 4);
      }
    }
    else if ((int)param_2 < 0) {
      uVar3 = 10;
    }
    else {
      uVar3 = param_2;
      FUN_10039280c(param_2);
    }
    thunk_FUN_10037e7cc(local_5a,uVar3 & 0xffffffff);
    puVar4 = auStack_58;
    if (local_5a[0] != '\0') {
      puVar4 = local_50;
    }
    FUN_10037d560(auStack_78,puVar4,uVar3 & 0xffffffff);
    puVar4 = auStack_78;
    FUN_10037d6ac(puVar4,param_2);
    iVar1 = (int)puVar4;
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      if (param_4 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_10038aeac();
        iVar1 = iVar1 + param_4;
      }
      FUN_10037d604(auStack_78,iVar1);
    }
    FUN_100388d7c(param_1,local_5a,param_3,0);
    thunk_FUN_10037edac(local_5a);
  }
  return param_1;
}

