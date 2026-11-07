// rea decompile_all
// name: FUN_1003f924c
// address: 0x1003f924c
// body: available
// range: 0x1003f924c-0x1003f934f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1003f924c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = *param_2;
  if (*param_1 == 2) {
    if (bVar3 == 2) goto LAB_1003f927c;
LAB_1003f92f4:
    bVar3 = false;
  }
  else {
    if (bVar3 == 2) {
      return false;
    }
    if (((bVar3 ^ *param_1) & 1) != 0) {
      return false;
    }
LAB_1003f927c:
    bVar3 = param_2[1];
    if (param_1[1] == 2) {
      if (bVar3 != 2) goto LAB_1003f92f4;
    }
    else {
      if (bVar3 == 2) {
        return false;
      }
      if (((bVar3 ^ param_1[1]) & 1) != 0) {
        return false;
      }
    }
    bVar3 = param_2[2];
    if (param_1[2] == 2) {
      if (bVar3 != 2) goto LAB_1003f92f4;
    }
    else {
      if (bVar3 == 2) {
        return false;
      }
      if (((bVar3 ^ param_1[2]) & 1) != 0) {
        return false;
      }
    }
    bVar3 = param_2[3];
    if (param_1[3] == 2) {
      if (bVar3 != 2) goto LAB_1003f92f4;
    }
    else {
      if (bVar3 == 2) {
        return false;
      }
      if (((bVar3 ^ param_1[3]) & 1) != 0) {
        return false;
      }
    }
    bVar1 = param_1[4];
    bVar2 = param_2[4];
    bVar3 = bVar2 == 2 && bVar1 == 2;
    if (bVar1 != 2) {
      if (bVar2 != 2) {
        bVar3 = bVar2 ^ bVar1 ^ 1;
      }
      return (bool)(bVar3 & 1);
    }
  }
  return (bool)bVar3;
}

