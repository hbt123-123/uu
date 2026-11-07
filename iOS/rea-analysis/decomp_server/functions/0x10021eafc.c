// rea decompile_all
// name: FUN_10021eafc
// address: 0x10021eafc
// body: available
// range: 0x10021eafc-0x10021eb7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10021eafc(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar4 = *param_2;
  bVar2 = (byte)param_2[1];
  if ((char)param_1[1] == '\x01') {
    if ((long)uVar5 < 2) {
      if (uVar5 == 0) {
        bVar3 = uVar4 == 0;
      }
      else {
        bVar3 = uVar4 == 1;
      }
    }
    else if (uVar5 == 2) {
      bVar3 = uVar4 == 2;
    }
    else {
      if (uVar5 != 3) {
        bVar1 = 0;
        if (3 < uVar4) {
          bVar1 = bVar2;
        }
        if ((bVar1 & 1) != 0) {
          return true;
        }
        return false;
      }
      bVar3 = uVar4 == 3;
    }
    bVar1 = 0;
    if (bVar3) {
      bVar1 = bVar2;
    }
    if ((bVar1 & 1) != 0) {
      return true;
    }
  }
  else if ((bVar2 & 1) == 0) {
    return uVar5 == uVar4;
  }
  return false;
}

