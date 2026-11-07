// rea decompile_all
// name: FUN_10005fde8
// address: 0x10005fde8
// body: available
// range: 0x10005fde8-0x10005fe83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10005fde8(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_10006f960();
  }
  if (param_1 < *(ulong *)(uVar5 + 0x10)) {
    lVar1 = uVar5 + param_1 * 0x20;
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    uVar7 = *puVar4;
    lVar6 = *(ulong *)(uVar5 + 0x10) - 1;
    _memmove(puVar4,(void *)(lVar1 + 0x40),(lVar6 - param_1) * 0x20);
    *(long *)(uVar5 + 0x10) = lVar6;
    *unaff_x20 = uVar5;
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10005fe84);
  (*pcVar2)();
}

