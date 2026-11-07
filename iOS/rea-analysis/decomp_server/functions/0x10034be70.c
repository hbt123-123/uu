// rea decompile_all
// name: FUN_10034be70
// address: 0x10034be70
// body: available
// range: 0x10034be70-0x10034bf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034be70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *(long *)(param_4 + 0x10) + 1;
  lVar3 = param_4 + 0x20;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    FUN_10003f030(lVar3,uVar1);
    (**(code **)(lVar2 + 8))(param_1,param_2,param_3,uVar1,lVar2);
    lVar3 = lVar3 + 0x28;
  } while (unaff_x21 == 0);
  return;
}

