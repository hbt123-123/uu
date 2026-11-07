// rea decompile_all
// name: FUN_100074364
// address: 0x100074364
// body: available
// range: 0x100074364-0x1000746c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100074364(byte *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte **ppbVar10;
  uint uVar11;
  uint uVar12;
  byte *local_38;
  ulong uStack_30;
  byte local_22;
  
  uVar8 = param_2 >> 0x38 & 0xf;
  uVar6 = (ulong)param_1 & 0xffffffffffff;
  uVar1 = uVar6;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar12 = 1;
    uVar5 = 0;
    goto LAB_100074654;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        uVar6 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_1 == 0x2b) {
        if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000746c4);
          (*pcVar4)();
        }
        lVar7 = uVar6 - 1;
        if (lVar7 == 0) goto LAB_1000745b8;
        if (param_1 == (byte *)0x0) {
LAB_100074630:
          uVar11 = 0;
          local_22 = 0;
        }
        else {
          uVar11 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (iVar2 = ((int)(short)uVar11 + (short)uVar11 * 4) * 2, iVar3 = (int)(short)iVar2,
                iVar3 != iVar2)) ||
               (uVar11 = iVar3 + (*param_1 - 0x30 & 0xff), (int)(short)uVar11 != uVar11))
            goto LAB_1000745b8;
            local_22 = 0;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000746bc);
          (*pcVar4)();
        }
        lVar7 = uVar6 - 1;
        if (lVar7 == 0) {
LAB_1000745b8:
          uVar11 = 0;
          local_22 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_100074630;
          uVar11 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (iVar2 = ((int)(short)uVar11 + (short)uVar11 * 4) * 2, iVar3 = (int)(short)iVar2,
                iVar3 != iVar2)) ||
               (uVar11 = iVar3 - (*param_1 - 0x30 & 0xff), (int)(short)uVar11 != uVar11))
            goto LAB_1000745b8;
            local_22 = 0;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      else {
        if (uVar6 == 0) goto LAB_1000745b8;
        uVar11 = 0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (iVar2 = ((int)(short)uVar11 + (short)uVar11 * 4) * 2, iVar3 = (int)(short)iVar2,
              iVar3 != iVar2)) ||
             (uVar11 = iVar3 + (*param_1 - 0x30 & 0xff), (int)(short)uVar11 != uVar11))
          goto LAB_1000745b8;
          local_22 = 0;
          param_1 = param_1 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      local_38 = param_1;
      uStack_30 = param_2 & 0xffffffffffffff;
      uVar12 = (uint)param_1 & 0xff;
      if (uVar12 == 0x2b) {
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000746c8);
          (*pcVar4)();
        }
        lVar7 = uVar8 - 1;
        if (lVar7 == 0) goto LAB_100074620;
        uVar11 = 0;
        pbVar9 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar9 - 0x30) ||
              (iVar2 = ((int)(short)uVar11 + (short)uVar11 * 4) * 2, iVar3 = (int)(short)iVar2,
              iVar3 != iVar2)) ||
             (uVar11 = iVar3 + (*pbVar9 - 0x30 & 0xff), (int)(short)uVar11 != uVar11))
          goto LAB_100074620;
          pbVar9 = pbVar9 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else if (uVar12 == 0x2d) {
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000746c0);
          (*pcVar4)();
        }
        lVar7 = uVar8 - 1;
        if (lVar7 == 0) {
LAB_100074620:
          uVar11 = 0;
          local_22 = 1;
          goto LAB_10007463c;
        }
        uVar11 = 0;
        pbVar9 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar9 - 0x30) ||
              (iVar2 = ((int)(short)uVar11 + (short)uVar11 * 4) * 2, iVar3 = (int)(short)iVar2,
              iVar3 != iVar2)) ||
             (uVar11 = iVar3 - (*pbVar9 - 0x30 & 0xff), (int)(short)uVar11 != uVar11))
          goto LAB_100074620;
          pbVar9 = pbVar9 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else {
        if (uVar8 == 0) goto LAB_100074620;
        uVar11 = 0;
        ppbVar10 = &local_38;
        do {
          if (((9 < *(byte *)ppbVar10 - 0x30) ||
              (iVar2 = ((int)(short)uVar11 + (short)uVar11 * 4) * 2, iVar3 = (int)(short)iVar2,
              iVar3 != iVar2)) ||
             (uVar11 = iVar3 + (*(byte *)ppbVar10 - 0x30 & 0xff), (int)(short)uVar11 != uVar11))
          goto LAB_100074620;
          ppbVar10 = (byte **)((long)ppbVar10 + 1);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      local_22 = 0;
    }
LAB_10007463c:
    uVar12 = (uint)local_22;
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    FUN_10007298c(param_1,param_2,10,FUN_100071d48);
    _swift_bridgeObjectRelease(param_2);
    uVar11 = (uint)param_1;
    uVar12 = uVar11 >> 0x10 & 1;
  }
  uVar5 = 0;
  if (uVar12 == 0) {
    uVar5 = uVar11 & 0xffff;
  }
LAB_100074654:
  return uVar5 | uVar12 << 0x10;
}

