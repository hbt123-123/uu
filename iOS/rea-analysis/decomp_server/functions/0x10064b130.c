// rea decompile_all
// name: FUN_10064b130
// address: 0x10064b130
// body: available
// range: 0x10064b130-0x10064b1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10064b130(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      return false;
    }
    lVar3 = *param_1;
    lVar8 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = *param_2;
    lVar6 = param_2[1];
    lVar7 = param_2[3];
    uVar2 = (undefined1)param_2[2];
    uVar1 = (undefined1)param_1[2];
  }
  else {
    if (*(byte *)(param_2 + 4) == 0) {
      return true;
    }
    lVar5 = *param_1;
    lVar6 = param_1[1];
    lVar7 = param_1[3];
    lVar3 = *param_2;
    lVar8 = param_2[1];
    lVar4 = param_2[3];
    uVar1 = (undefined1)param_2[2];
    uVar2 = (undefined1)param_1[2];
  }
  FUN_10064b1b4(lVar3,lVar8,uVar1,lVar4,lVar5,lVar6,uVar2,lVar7);
  return lVar3 == -1;
}

