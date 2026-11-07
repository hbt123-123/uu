// rea decompile_all
// name: FUN_1003ce3a4
// address: 0x1003ce3a4
// body: available
// range: 0x1003ce3a4-0x1003ce44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003ce3a4(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 != 0) {
    lVar1 = 0;
    FUN_1003d0d4c();
    lVar4 = 0;
    uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
    uVar3 = param_3 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff));
    lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x48);
    do {
      uVar2 = uVar3;
      (*param_1)();
      if (unaff_x21 != 0) {
        return lVar4;
      }
      if ((uVar2 & 1) != 0) {
        return lVar4;
      }
      lVar4 = lVar4 + 1;
      uVar3 = uVar3 + lVar1;
    } while (lVar5 != lVar4);
  }
  return 0;
}

