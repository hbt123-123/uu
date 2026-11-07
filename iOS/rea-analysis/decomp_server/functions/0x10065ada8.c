// rea decompile_all
// name: FUN_10065ada8
// address: 0x10065ada8
// body: available
// range: 0x10065ada8-0x10065ae37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_10065ada8(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  lVar9 = param_1[3];
  uVar4 = (undefined1)param_2[2];
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar2 = lVar6;
    lVar3 = lVar7;
    lVar5 = lVar9;
    lVar6 = *param_2;
    lVar7 = param_2[1];
    lVar9 = param_2[3];
    uVar8 = uVar4;
    uVar4 = (char)param_1[2];
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      bVar1 = false;
      goto LAB_10065ae2c;
    }
  }
  else {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar5 = param_2[3];
    uVar8 = (char)param_1[2];
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      bVar1 = true;
      goto LAB_10065ae2c;
    }
  }
  FUN_10064b1b4(lVar2,lVar3,uVar4,lVar5,lVar6,lVar7,uVar8,lVar9);
  bVar1 = lVar2 == -1;
LAB_10065ae2c:
  return bVar1 ^ 1;
}

