// rea decompile_all
// name: FUN_100053b50
// address: 0x100053b50
// body: available
// range: 0x100053b50-0x100053d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100053b50(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    _swift_bridgeObjectRetain(param_6);
  }
  else {
    uVar2 = param_1;
    __sSS5countSivg();
    uVar3 = param_5;
    __sSS5countSivg(param_5,param_6);
    uVar7 = param_6 >> 0x38 & 0xf;
    if ((long)uVar3 < (long)uVar2) {
      uVar4 = 0xf;
    }
    else {
      uVar2 = param_5 & 0xffffffffffff;
      if ((param_6 & 0x2000000000000000) != 0) {
        uVar2 = uVar7;
      }
      uVar3 = 0xf;
      while (uVar8 = uVar3 >> 0xe, uVar4 = uVar3, uVar8 < uVar2 << 2) {
        uVar4 = param_1;
        uVar6 = param_2;
        FUN_100053e44(param_1,param_2,uVar3,param_5,param_6);
        uVar9 = uVar8;
        uVar5 = uVar3;
        while ((uVar6 & 1) != 0) {
          __sSS5index5afterSS5IndexVAD_tF(uVar5,param_5,param_6);
          uVar9 = uVar5 >> 0xe;
          uVar4 = uVar3;
          if (uVar2 << 2 <= uVar9) goto LAB_100053cd8;
          uVar4 = param_1;
          uVar6 = param_2;
          FUN_100053e44(param_1,param_2,uVar5,param_5,param_6);
        }
        if (uVar9 < uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100053d60);
          (*pcVar1)();
        }
        uVar8 = param_6;
        __sSSySsSnySS5IndexVGcig(uVar3,uVar5,param_5,param_6);
        __sSS6append10contentsOfySs_tF();
        _swift_bridgeObjectRelease(uVar8);
        __sSS6append10contentsOfySS_tF(param_3,param_4);
        uVar8 = param_1;
        __sSS5countSivg(param_1,param_2);
        uVar9 = param_5;
        __sSS5countSivg(param_5,param_6);
        uVar3 = uVar4;
        if ((long)uVar9 < (long)uVar8) break;
      }
    }
LAB_100053cd8:
    uVar2 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar2 = uVar7;
    }
    if (uVar2 << 2 < uVar4 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100053d64);
      (*pcVar1)();
    }
    uVar3 = 0xb;
    if (((uint)(param_6 >> 0x3c) & (uint)((param_5 & 0x800000000000000) == 0)) == 0) {
      uVar3 = 7;
    }
    __sSSySsSnySS5IndexVGcig(uVar4,uVar3 | uVar2 << 0x10,param_5,param_6);
    __sSS6append10contentsOfySs_tF();
    _swift_bridgeObjectRelease(param_6);
    param_5 = 0;
    param_6 = 0xe000000000000000;
  }
  auVar10._8_8_ = param_6;
  auVar10._0_8_ = param_5;
  return auVar10;
}

