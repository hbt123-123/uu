// rea decompile_all
// name: FUN_10000c88c
// address: 0x10000c88c
// body: available
// range: 0x10000c88c-0x10000caa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000c88c(ulong *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 uVar12;
  ulong local_70;
  ulong uStack_68;
  
  uVar3 = param_4;
  if (param_2 != 0) {
    lVar10 = param_3;
    if (param_3 == 0) goto LAB_10000ca64;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10000caa8);
      (*pcVar2)();
    }
    uVar7 = param_5 >> 0xe;
    if (param_4 >> 0xe != uVar7) {
      lVar9 = 0;
      uVar6 = (uint)(param_6 >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar8 = 4L << uVar6;
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      do {
        uVar11 = uVar3 & 0xc;
        uVar4 = uVar3;
        if (uVar11 == uVar8) {
          FUN_10000caa8(uVar3,param_6,param_7);
        }
        if ((uVar4 >> 0xe < param_4 >> 0xe) || (uVar7 <= uVar4 >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000ca9c);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            local_70 = param_6;
            uStack_68 = param_7 & 0xffffffffffffff;
            uVar12 = *(undefined1 *)((long)&local_70 + (uVar4 >> 0x10));
            goto joined_r0x00010000c9a4;
          }
          uVar5 = (param_7 & 0xfffffffffffffff) + 0x20;
          if ((param_6 >> 0x3c & 1) == 0) {
            uVar5 = param_6;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_6,param_7);
          }
          uVar12 = *(undefined1 *)(uVar5 + (uVar4 >> 0x10));
          if (uVar11 == uVar8) goto LAB_10000c9d8;
LAB_10000c9a8:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_10000c9ac;
LAB_10000c9f0:
          if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000caa4);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar3,param_6,param_7);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          uVar12 = (undefined1)uVar4;
joined_r0x00010000c9a4:
          if (uVar11 != uVar8) goto LAB_10000c9a8;
LAB_10000c9d8:
          FUN_10000caa8(uVar3,param_6,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_10000c9f0;
LAB_10000c9ac:
          uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
        }
        *(undefined1 *)(param_2 + lVar9) = uVar12;
        lVar10 = param_3;
        if (param_3 + -1 == lVar9) break;
        if (SCARRY8(lVar9 + 1,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000caa0);
          (*pcVar2)();
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar9;
      } while (uVar7 != uVar3 >> 0xe);
      goto LAB_10000ca64;
    }
  }
  lVar10 = 0;
LAB_10000ca64:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return lVar10;
}

