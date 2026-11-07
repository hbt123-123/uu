// rea decompile_all
// name: FUN_10065ac84
// address: 0x10065ac84
// body: available
// range: 0x10065ac84-0x10065ad17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10065ac84(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  lVar6 = param_1[1];
  lVar8 = param_1[3];
  uVar3 = (undefined1)param_2[2];
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar1 = lVar5;
    lVar2 = lVar6;
    lVar4 = lVar8;
    lVar5 = *param_2;
    lVar6 = param_2[1];
    lVar8 = param_2[3];
    uVar7 = uVar3;
    uVar3 = (char)param_1[2];
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      return false;
    }
  }
  else {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar4 = param_2[3];
    uVar7 = (char)param_1[2];
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      return true;
    }
  }
  FUN_10064b1b4(lVar1,lVar2,uVar3,lVar4,lVar5,lVar6,uVar7,lVar8);
  return lVar1 == -1;
}

