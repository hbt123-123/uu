// rea decompile_all
// name: FUN_100668ba0
// address: 0x100668ba0
// body: available
// range: 0x100668ba0-0x100668c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100668ba0(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = param_1;
  _swift_bridgeObjectRetain();
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
    FUN_1006295a0(0,*(long *)(param_1 + 0x10) + 1,1,param_1);
  }
  uVar3 = *(ulong *)(uVar5 + 0x10);
  lVar7 = uVar3 + 1;
  uVar4 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_1006295a0(uVar4,lVar7,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar7;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x80;
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100668ca0);
    (*pcVar2)();
  }
  lVar6 = 0;
  if (param_2 != 0) {
    lVar6 = lVar7 / param_2;
  }
  if (lVar7 != lVar6 * param_2) {
    lVar7 = uVar3 + 0x21;
    uVar3 = uVar4;
    do {
      lVar6 = lVar7 + -0x1f;
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= lVar7 - 0x20U) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1006295a0(uVar4,lVar6,1,uVar3);
      }
      *(long *)(uVar4 + 0x10) = lVar6;
      *(undefined1 *)(uVar4 + lVar7) = 0;
      lVar1 = 0;
      if (param_2 != 0) {
        lVar1 = lVar6 / param_2;
      }
      lVar7 = lVar7 + 1;
      uVar3 = uVar4;
    } while (lVar6 != lVar1 * param_2);
  }
  return uVar4;
}

