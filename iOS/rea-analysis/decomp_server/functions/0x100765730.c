// rea decompile_all
// name: FUN_100765730
// address: 0x100765730
// body: available
// range: 0x100765730-0x1007657fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007657f8 to 0x1007655c4 FUN_1007655c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100765730(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 8) = DAT_100b2cf29;
  if ((DAT_100b2cf31 & 1) != 0) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  lVar3 = 8;
  lVar2 = param_1;
  do {
    (**(code **)((long)&DAT_1009e90b8 + lVar3))();
    if ((((lVar2 != 0) && (*(code **)(lVar2 + 8) != (code *)0x0)) &&
        ((**(code **)(lVar2 + 8))(), (int)lVar2 != 0)) &&
       (((**(code **)((long)&DAT_1009e90b8 + lVar3))(), lVar2 != 0 &&
        (puVar1 = (undefined8 *)(lVar2 + 0x10), (code *)*puVar1 != (code *)0x0)))) {
      lVar2 = param_1;
      (*(code *)*puVar1)();
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x58);
  (*DAT_100b2cf20)(param_1);
  if (((DAT_100b2cf30 & 1) != 0) && ((DAT_100b2cf31 & 1) == 0)) {
    FUN_1007655c4(0);
    return;
  }
  return;
}

