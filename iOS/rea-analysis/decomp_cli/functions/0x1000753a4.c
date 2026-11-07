// rea decompile_all
// name: FUN_1000753a4
// address: 0x1000753a4
// body: available
// range: 0x1000753a4-0x1000756b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000753a4(byte *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte **ppbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *local_38;
  ulong uStack_30;
  byte local_24;
  
  uVar5 = param_2 >> 0x38 & 0xf;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  uVar4 = uVar2;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar10 = 1;
    uVar4 = 0;
    goto LAB_100075634;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        uVar2 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_1 == 0x2b) {
        if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000756b0);
          (*pcVar1)();
        }
        lVar3 = uVar2 - 1;
        if (lVar3 == 0) goto LAB_1000755a8;
        if (param_1 == (byte *)0x0) {
LAB_100075610:
          pbVar9 = (byte *)0x0;
          local_24 = 0;
        }
        else {
          pbVar9 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) || (((long)pbVar9 * 10 & 0xffffffff00000000U) != 0)) ||
               (uVar10 = *param_1 - 0x30 & 0xff, uVar8 = (uint)((long)pbVar9 * 10),
               pbVar9 = (byte *)(ulong)(uVar8 + uVar10), CARRY4(uVar8,uVar10))) goto LAB_1000755a8;
            local_24 = 0;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000756a8);
          (*pcVar1)();
        }
        lVar3 = uVar2 - 1;
        if (lVar3 == 0) {
LAB_1000755a8:
          pbVar9 = (byte *)0x0;
          local_24 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_100075610;
          pbVar9 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) || (((long)pbVar9 * 10 & 0xffffffff00000000U) != 0)) ||
               (uVar10 = *param_1 - 0x30 & 0xff, uVar8 = (uint)((long)pbVar9 * 10),
               pbVar9 = (byte *)(ulong)(uVar8 - uVar10), uVar8 < uVar10)) goto LAB_1000755a8;
            local_24 = 0;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
      else {
        if (uVar2 == 0) goto LAB_1000755a8;
        pbVar9 = (byte *)0x0;
        do {
          if (((9 < *param_1 - 0x30) || (((long)pbVar9 * 10 & 0xffffffff00000000U) != 0)) ||
             (uVar10 = *param_1 - 0x30 & 0xff, uVar8 = (uint)((long)pbVar9 * 10),
             pbVar9 = (byte *)(ulong)(uVar8 + uVar10), CARRY4(uVar8,uVar10))) goto LAB_1000755a8;
          local_24 = 0;
          param_1 = param_1 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else {
      local_38 = param_1;
      uStack_30 = param_2 & 0xffffffffffffff;
      uVar10 = (uint)param_1 & 0xff;
      if (uVar10 == 0x2b) {
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000756b4);
          (*pcVar1)();
        }
        lVar3 = uVar5 - 1;
        if (lVar3 == 0) goto LAB_100075600;
        pbVar9 = (byte *)0x0;
        pbVar6 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar6 - 0x30) || (((long)pbVar9 * 10 & 0xffffffff00000000U) != 0)) ||
             (uVar10 = *pbVar6 - 0x30 & 0xff, uVar8 = (uint)((long)pbVar9 * 10),
             pbVar9 = (byte *)(ulong)(uVar8 + uVar10), CARRY4(uVar8,uVar10))) goto LAB_100075600;
          pbVar6 = pbVar6 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      else if (uVar10 == 0x2d) {
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000756ac);
          (*pcVar1)();
        }
        lVar3 = uVar5 - 1;
        if (lVar3 == 0) {
LAB_100075600:
          pbVar9 = (byte *)0x0;
          local_24 = 1;
          goto LAB_10007561c;
        }
        pbVar9 = (byte *)0x0;
        pbVar6 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar6 - 0x30) || (((long)pbVar9 * 10 & 0xffffffff00000000U) != 0)) ||
             (uVar10 = *pbVar6 - 0x30 & 0xff, uVar8 = (uint)((long)pbVar9 * 10),
             pbVar9 = (byte *)(ulong)(uVar8 - uVar10), uVar8 < uVar10)) goto LAB_100075600;
          pbVar6 = pbVar6 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      else {
        if (uVar5 == 0) goto LAB_100075600;
        pbVar9 = (byte *)0x0;
        ppbVar7 = &local_38;
        do {
          if (((9 < *(byte *)ppbVar7 - 0x30) || (((long)pbVar9 * 10 & 0xffffffff00000000U) != 0)) ||
             (uVar10 = *(byte *)ppbVar7 - 0x30 & 0xff, uVar8 = (uint)((long)pbVar9 * 10),
             pbVar9 = (byte *)(ulong)(uVar8 + uVar10), CARRY4(uVar8,uVar10))) goto LAB_100075600;
          ppbVar7 = (byte **)((long)ppbVar7 + 1);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      local_24 = 0;
    }
LAB_10007561c:
    uVar2 = (ulong)local_24;
    _swift_bridgeObjectRelease(param_2);
    param_1 = pbVar9;
  }
  else {
    FUN_100072d24(param_1,param_2,10,FUN_100072e20);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = (ulong)param_1 >> 0x20 & 1;
  }
  uVar10 = (uint)uVar2;
  uVar4 = 0;
  if (uVar2 == 0) {
    uVar4 = (ulong)param_1 & 0xffffffff;
  }
LAB_100075634:
  return uVar4 | (ulong)uVar10 << 0x20;
}

