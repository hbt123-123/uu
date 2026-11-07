// rea decompile_all
// name: FUN_100525d70
// address: 0x100525d70
// body: available
// range: 0x100525d70-0x100525de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100525d70(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10) + 1;
  lVar2 = param_1 + 0x20;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    uVar3 = *(ulong *)(lVar2 + 0x18);
    lVar1 = *(long *)(lVar2 + 0x20);
    FUN_10003f030(lVar2,uVar3);
    (**(code **)(lVar1 + 0x20))(uVar3,lVar1);
    lVar2 = lVar2 + 0x28;
  } while ((uVar3 & 1) != 0);
  return lVar4 == 0;
}

