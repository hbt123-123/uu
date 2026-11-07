// rea decompile_all
// name: FUN_1007afef4
// address: 0x1007afef4
// body: available
// range: 0x1007afef4-0x1007affcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1007afef4(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  
  lVar4 = param_1;
  FUN_1007b01dc();
  lVar4 = param_2 + (int)lVar4;
  iVar6 = (int)(param_2 + param_3);
  lVar1 = lVar4;
  FUN_1007afb74(lVar4,iVar6 - (int)lVar4,": [");
  uVar3 = lVar4 + (int)lVar1;
  if (uVar3 < (param_2 + param_3) - 1U) {
    lVar1 = param_1;
    FUN_1007af3e0();
    lVar4 = 0x10;
    if ((int)lVar1 == 0) {
      lVar4 = 8;
    }
    lVar4 = *(long *)(param_1 + lVar4);
    if (lVar4 < 1) {
      lVar4 = 0;
    }
    if (0 < (int)lVar4) {
      local_38 = 0;
      FUN_1007af498(param_1,&local_38,1);
      if ((int)param_1 == 1) {
        uVar2 = local_38;
        FUN_1007af6ac(local_38,uVar3,iVar6 - (int)uVar3);
        uVar3 = uVar3 + (long)(int)uVar2;
      }
    }
  }
  iVar5 = (int)uVar3;
  FUN_1007afb74(uVar3,iVar6 - iVar5,"]");
  return (iVar5 + (int)uVar3) - (int)param_2;
}

