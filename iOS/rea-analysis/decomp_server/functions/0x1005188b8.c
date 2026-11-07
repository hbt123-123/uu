// rea decompile_all
// name: FUN_1005188b8
// address: 0x1005188b8
// body: available
// range: 0x1005188b8-0x100518a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005188b8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar8 = uVar1 * 4;
  if (uVar1 == 0) {
    uVar4 = 0xf;
  }
  else {
    uVar7 = 0xf;
    uVar6 = 0xf;
    do {
      while( true ) {
        uVar3 = uVar7;
        uVar5 = param_1;
        __sSSySJSS5IndexVcig(uVar7,param_1,param_2);
        __sSS5index5afterSS5IndexVAD_tF(uVar7,param_1,param_2);
        uVar4 = uVar7;
        if ((uVar3 != 0x2f) || (uVar5 != 0xe100000000000000)) break;
        _swift_bridgeObjectRelease(0xe100000000000000);
        uVar6 = uVar7;
        if (uVar8 < uVar7 >> 0xe || uVar8 - (uVar7 >> 0xe) == 0) goto LAB_100518990;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar5,0x2f,0xe100000000000000,0);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar3 & 1) == 0) {
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar7 >> 0xe <= uVar8 && uVar8 - (uVar7 >> 0xe) != 0);
  }
LAB_100518990:
  if (uVar8 < uVar4 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100518a08);
    (*pcVar2)();
  }
  uVar8 = 0xb;
  if (((uint)(param_2 >> 0x3c) & (uint)((param_1 & 0x800000000000000) == 0)) == 0) {
    uVar8 = 7;
  }
  uVar8 = uVar8 | uVar1 << 0x10;
  __sSSySsSnySS5IndexVGcig(uVar4,uVar8,param_1,param_2);
  __sSS14_fromSubstringySSSshFZ();
  _swift_bridgeObjectRelease(param_2);
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar4;
  return auVar9;
}

