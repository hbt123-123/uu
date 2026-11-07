// rea decompile_all
// name: FUN_1006e0b44
// address: 0x1006e0b44
// body: available
// range: 0x1006e0b44-0x1006e0bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006e0b44(long param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar2 = param_2 - (int)lVar4;
  if (uVar5 < uVar2) {
    uVar1 = *(undefined4 *)(param_1 + 200);
    do {
      lVar3 = param_1;
      FUN_100705148(param_1,lVar4 + (ulong)uVar5,param_3,uVar1,0);
      uVar5 = (int)lVar3 + uVar5;
    } while (uVar5 < uVar2);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return;
}

