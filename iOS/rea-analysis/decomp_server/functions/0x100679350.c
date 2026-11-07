// rea decompile_all
// name: FUN_100679350
// address: 0x100679350
// body: available
// range: 0x100679350-0x10067941f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100679350(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100679420);
    (*pcVar2)();
  }
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = param_3 - param_1;
    if (param_2 - 1U <= param_3 - param_1) {
      uVar3 = param_2 - 1U;
    }
    if ((param_1 ^ 0x7fffffffffffffff) <= uVar3) {
      uVar3 = param_1 ^ 0x7fffffffffffffff;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 < 5) {
      lVar4 = 0;
      uVar3 = param_1;
    }
    else {
      uVar1 = 4;
      if ((uVar3 & 3) != 0) {
        uVar1 = uVar3 & 3;
      }
      lVar4 = uVar3 - uVar1;
      lVar6 = 0;
      lVar7 = 0;
      lVar8 = 0;
      lVar5 = lVar4;
      uVar3 = param_1;
      do {
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 1;
        uVar3 = uVar3 + 1;
        lVar8 = lVar8 + 1;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
      uVar3 = uVar3 + lVar8 + lVar6 + lVar7;
    }
    lVar5 = lVar4 + param_1 + -0x7fffffffffffffff;
    param_3 = (lVar4 + param_1) - param_3;
    param_2 = param_2 - lVar4;
    param_1 = uVar3;
    do {
      uVar3 = (ulong)(param_3 == 0);
      if (param_3 == 0) {
        return ZEXT816(1) << 0x40;
      }
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067941c);
        (*pcVar2)();
      }
      param_1 = param_1 + 1;
      lVar5 = lVar5 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = param_1;
  return auVar9;
}

