// rea decompile_all
// name: FUN_100647128
// address: 0x100647128
// body: available
// range: 0x100647128-0x1006471ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100647128(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong *puVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006471b8);
      (*pcVar2)();
    }
    FUN_100646ccc(param_1 + 1);
    puVar5 = (ulong *)(unaff_x20 + 0x18);
    lVar1 = param_1 - *(long *)(*puVar5 + 0x10);
    if (param_1 < *(long *)(*puVar5 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006471bc);
      (*pcVar2)();
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006471c0);
      (*pcVar2)();
    }
    FUN_10062872c(lVar1,0);
    uVar6 = *puVar5;
    uVar3 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_10062958c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10062958c(uVar6,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    *(long *)(uVar6 + uVar3 * 8 + 0x20) = param_2;
    *puVar5 = uVar6;
  }
  return;
}

