// rea decompile_all
// name: FUN_1007aebf4
// address: 0x1007aebf4
// body: available
// range: 0x1007aebf4-0x1007aeceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007aebf4(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (((param_1 != (ulong *)0x0) && (((ulong)param_1 & 1) == 0)) &&
     (puVar2 = param_1, FUN_1007ae524(param_1,0x28), (int)puVar2 != 0)) {
    uVar3 = *param_1;
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 & 0xffffffff8;
    }
    FUN_1007ae524(uVar3,0x28);
    if ((int)uVar3 != 0) {
      uVar1 = (uint)*param_1;
      if ((*param_1 & 1) != 0) {
        uVar1 = uVar1 & 0xfffffff8;
      }
      FUN_1007aecec();
      if ((uVar1 != 0) && (puVar2 = param_1, FUN_1007aecec(), (int)puVar2 != 0)) {
        uVar3 = *param_1;
        if ((uVar3 & 1) != 0) {
          uVar3 = uVar3 & 0xffffffff8;
        }
        FUN_1007ae970();
        if (uVar3 != 0) {
          uVar3 = *(ulong *)((*(ulong *)(uVar3 + 0x20) & 0x7ffffffffff8) + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          if (*(char **)(uVar3 + 0x18) != (char *)0x0) {
            _strcmp(*(char **)(uVar3 + 0x18),"NSBlock");
          }
        }
      }
    }
  }
  return;
}

