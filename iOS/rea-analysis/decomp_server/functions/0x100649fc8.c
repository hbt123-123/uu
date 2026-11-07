// rea decompile_all
// name: FUN_100649fc8
// address: 0x100649fc8
// body: available
// range: 0x100649fc8-0x10064a07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100649fc8(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar6 = *unaff_x20;
  uVar7 = *(ulong *)(uVar6 + 0x10);
  if (1 < uVar7) {
    uVar2 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_1006541a4();
    }
    uVar2 = 0;
    lVar3 = uVar7 + 3;
    do {
      if (uVar2 != lVar3 - 4U) {
        if (*(ulong *)(uVar6 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10064a068);
          (*pcVar1)();
        }
        if (*(ulong *)(uVar6 + 0x10) <= lVar3 - 4U) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10064a06c);
          (*pcVar1)();
        }
        lVar4 = uVar6 + uVar2 * 8;
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(uVar6 + lVar3 * 8);
        *(undefined8 *)(uVar6 + lVar3 * 8) = uVar5;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar3 + -5;
      lVar3 = lVar3 + -1;
    } while ((long)uVar2 < lVar4);
    *unaff_x20 = uVar6;
  }
  return;
}

