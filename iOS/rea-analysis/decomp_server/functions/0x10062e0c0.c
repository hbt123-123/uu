// rea decompile_all
// name: FUN_10062e0c0
// address: 0x10062e0c0
// body: available
// range: 0x10062e0c0-0x10062e25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10062e0c0(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar10 = *(ulong *)(unaff_x20 + 0x10);
  FUN_10062db30();
  if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10062e25c);
    (*pcVar6)();
  }
  if (uVar10 != 1) {
    uVar11 = 1;
    do {
      if (uVar11 == uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10062e258);
        (*pcVar6)();
      }
      uVar1 = uVar11 + 1;
      lVar12 = 8;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10062e248);
          (*pcVar6)();
        }
        lVar8 = *(long *)(param_1 + uVar11 * 8 + 0x20);
        if (*(ulong *)(lVar8 + 0x10) <= lVar12 - 8U) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10062e24c);
          (*pcVar6)();
        }
        uVar5 = *(uint *)(lVar8 + lVar12 * 4);
        uVar2 = *(uint *)(&DAT_100ab2678 + (ulong)(byte)uVar5 * 4);
        uVar3 = *(uint *)(&DAT_100ab2aa0 + (ulong)(byte)(uVar5 >> 8) * 4);
        uVar4 = *(uint *)(&DAT_100ab2ec8 + (ulong)(byte)(uVar5 >> 0x10) * 4);
        uVar5 = *(uint *)(&DAT_100ab32f0 + ((ulong)(uVar5 >> 0x16) & 0x3fc));
        uVar7 = param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar7 & 1) == 0) {
          FUN_100654208();
        }
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10062e250);
          (*pcVar6)();
        }
        lVar8 = param_1 + 0x20;
        uVar9 = *(ulong *)(lVar8 + uVar11 * 8);
        uVar7 = uVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(lVar8 + uVar11 * 8) = uVar9;
        if ((uVar7 & 1) == 0) {
          FUN_1006541cc();
          *(ulong *)(lVar8 + uVar11 * 8) = uVar9;
        }
        if (*(ulong *)(uVar9 + 0x10) <= lVar12 - 8U) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10062e254);
          (*pcVar6)();
        }
        *(uint *)(uVar9 + lVar12 * 4) = uVar3 ^ uVar2 ^ uVar4 ^ uVar5;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xc);
      uVar11 = uVar1;
    } while (uVar1 != uVar10);
  }
  return param_1;
}

