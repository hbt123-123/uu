// rea decompile_all
// name: FUN_100152adc
// address: 0x100152adc
// body: available
// range: 0x100152adc-0x100152ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100152adc(code *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  uint extraout_w8;
  long unaff_x21;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_70;
  ulong uStack_68;
  
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_4);
  if (uVar1 != 0) {
    uVar4 = (uint)(param_3 >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar9 = 4L << uVar4;
    uVar5 = 0xf;
    do {
      uVar8 = uVar5 & 0xc;
      uVar3 = uVar5;
      if (uVar8 == uVar9) {
        FUN_10000caa8(uVar5,param_3,param_4);
      }
      uVar7 = uVar3 >> 0x10;
      if (uVar1 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100152ce0);
        (*pcVar2)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) != 0) {
          local_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          uVar6 = *(undefined1 *)((long)&local_70 + uVar7);
          goto joined_r0x000100152bfc;
        }
        uVar3 = (param_4 & 0xfffffffffffffff) + 0x20;
        if ((param_3 >> 0x3c & 1) == 0) {
          uVar3 = param_3;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
        }
        uVar6 = *(undefined1 *)(uVar3 + uVar7);
        if (uVar8 == uVar9) goto LAB_100152c00;
LAB_100152bac:
        if ((param_4 >> 0x3c & 1) == 0) goto LAB_100152bb0;
LAB_100152c20:
        if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100152ce4);
          (*pcVar2)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar5,param_3,param_4);
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        uVar6 = (undefined1)uVar3;
joined_r0x000100152bfc:
        if (uVar8 != uVar9) goto LAB_100152bac;
LAB_100152c00:
        FUN_10000caa8(uVar5,param_3,param_4);
        if ((param_4 >> 0x3c & 1) != 0) goto LAB_100152c20;
LAB_100152bb0:
        uVar5 = (uVar5 & 0xffffffffffff0000) + 0x10004;
      }
      local_70 = CONCAT71(local_70._1_7_,uVar6);
      uVar3 = 0;
      (*param_1)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_4);
        uVar4 = extraout_w8;
        goto LAB_100152cb4;
      }
      if ((uVar3 & 1) != 0) {
        _swift_bridgeObjectRelease(param_4);
        uVar4 = 1;
        goto LAB_100152cb4;
      }
    } while (uVar1 << 2 != uVar5 >> 0xe);
  }
  _swift_bridgeObjectRelease(param_4);
  uVar4 = 0;
LAB_100152cb4:
  return uVar4 & 1;
}

