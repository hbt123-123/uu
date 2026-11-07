// rea decompile_all
// name: FUN_10066b1f4
// address: 0x10066b1f4
// body: available
// range: 0x10066b1f4-0x10066b293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066b1f4(ulong *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(ulong *)(param_2 + 0x10) < 0x11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066b284);
    (*pcVar1)();
  }
  uVar5 = *param_1;
  uVar2 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_1006541cc();
  }
  uVar3 = 0;
  uVar2 = *(ulong *)(uVar5 + 0x10);
  lVar4 = 8;
  do {
    if (uVar2 <= lVar4 - 8U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066b280);
      (*pcVar1)();
    }
    uVar3 = *(int *)(uVar5 + lVar4 * 4) + uVar3 + *(int *)(param_2 + lVar4 * 4);
    *(uint *)(uVar5 + lVar4 * 4) = uVar3 & 0xff;
    uVar3 = uVar3 >> 8;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x19);
  *param_1 = uVar5;
  return;
}

