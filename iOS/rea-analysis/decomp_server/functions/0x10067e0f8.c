// rea decompile_all
// name: FUN_10067e0f8
// address: 0x10067e0f8
// body: available
// range: 0x10067e0f8-0x10067e233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067e0f8(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e20c);
    (*pcVar5)();
  }
  uVar7 = *param_1;
  if (*(ulong *)(uVar7 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e210);
    (*pcVar5)();
  }
  if (*(ulong *)(uVar7 + 0x10) <= param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e214);
    (*pcVar5)();
  }
  iVar3 = *(int *)(uVar7 + 0x20 + param_2 * 4);
  iVar4 = *(int *)(uVar7 + 0x20 + param_3 * 4);
  uVar6 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_1006541cc();
  }
  uVar2 = iVar4 + iVar3;
  lVar1 = uVar7 + 0x20;
  *(uint *)(lVar1 + param_2 * 4) = uVar2;
  uVar6 = *(ulong *)(uVar7 + 0x10);
  if (param_2 < uVar6) {
    if (uVar6 <= param_5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e22c);
      (*pcVar5)();
    }
    uVar2 = *(uint *)(lVar1 + param_5 * 4) ^ uVar2;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    *(uint *)(lVar1 + param_5 * 4) = uVar2;
    if (param_4 < uVar6) {
      uVar2 = *(int *)(lVar1 + param_4 * 4) + uVar2;
      *(uint *)(lVar1 + param_4 * 4) = uVar2;
      if (param_3 < uVar6) {
        uVar2 = *(uint *)(lVar1 + param_3 * 4) ^ uVar2;
        uVar2 = uVar2 >> 0x14 | uVar2 << 0xc;
        *(uint *)(lVar1 + param_3 * 4) = uVar2;
        uVar2 = *(int *)(lVar1 + param_2 * 4) + uVar2;
        *(uint *)(lVar1 + param_2 * 4) = uVar2;
        uVar2 = *(uint *)(lVar1 + param_5 * 4) ^ uVar2;
        uVar2 = uVar2 >> 0x18 | uVar2 << 8;
        *(uint *)(lVar1 + param_5 * 4) = uVar2;
        uVar2 = *(int *)(lVar1 + param_4 * 4) + uVar2;
        *(uint *)(lVar1 + param_4 * 4) = uVar2;
        uVar2 = *(uint *)(lVar1 + param_3 * 4) ^ uVar2;
        *(uint *)(lVar1 + param_3 * 4) = uVar2 >> 0x19 | uVar2 << 7;
        *param_1 = uVar7;
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e234);
      (*pcVar5)();
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e230);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10067e228);
  (*pcVar5)();
}

