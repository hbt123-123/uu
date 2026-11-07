// rea decompile_all
// name: FUN_1000746c8
// address: 0x1000746c8
// body: available
// range: 0x1000746c8-0x1000749d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000746c8(byte *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte **ppbVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte *local_38;
  ulong uStack_30;
  byte local_24;
  
  uVar4 = param_2 >> 0x38 & 0xf;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  uVar3 = uVar2;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar11 = 1;
    uVar3 = 0;
    goto LAB_100074958;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000749d4);
          (*pcVar1)();
        }
        lVar8 = uVar2 - 1;
        if (lVar8 == 0) goto LAB_1000748cc;
        if (param_1 == (byte *)0x0) {
LAB_100074934:
          pbVar10 = (byte *)0x0;
          local_24 = 0;
        }
        else {
          pbVar10 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (lVar9 = (long)(int)pbVar10 * 10, iVar7 = (int)lVar9, lVar9 - iVar7 != 0)) ||
               (uVar11 = *param_1 - 0x30 & 0xff, pbVar10 = (byte *)(ulong)(iVar7 + uVar11),
               SCARRY4(iVar7,uVar11))) goto LAB_1000748cc;
            local_24 = 0;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000749cc);
          (*pcVar1)();
        }
        lVar8 = uVar2 - 1;
        if (lVar8 == 0) {
LAB_1000748cc:
          pbVar10 = (byte *)0x0;
          local_24 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_100074934;
          pbVar10 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (lVar9 = (long)(int)pbVar10 * 10, iVar7 = (int)lVar9, lVar9 - iVar7 != 0)) ||
               (uVar11 = *param_1 - 0x30 & 0xff, pbVar10 = (byte *)(ulong)(iVar7 - uVar11),
               SBORROW4(iVar7,uVar11))) goto LAB_1000748cc;
            local_24 = 0;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else {
        if (uVar2 == 0) goto LAB_1000748cc;
        pbVar10 = (byte *)0x0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (lVar8 = (long)(int)pbVar10 * 10, iVar7 = (int)lVar8, lVar8 - iVar7 != 0)) ||
             (uVar11 = *param_1 - 0x30 & 0xff, pbVar10 = (byte *)(ulong)(iVar7 + uVar11),
             SCARRY4(iVar7,uVar11))) goto LAB_1000748cc;
          local_24 = 0;
          param_1 = param_1 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else {
      local_38 = param_1;
      uStack_30 = param_2 & 0xffffffffffffff;
      uVar11 = (uint)param_1 & 0xff;
      if (uVar11 == 0x2b) {
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000749d8);
          (*pcVar1)();
        }
        lVar8 = uVar4 - 1;
        if (lVar8 == 0) goto LAB_100074924;
        pbVar10 = (byte *)0x0;
        pbVar5 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar5 - 0x30) ||
              (lVar9 = (long)(int)pbVar10 * 10, iVar7 = (int)lVar9, lVar9 - iVar7 != 0)) ||
             (uVar11 = *pbVar5 - 0x30 & 0xff, pbVar10 = (byte *)(ulong)(iVar7 + uVar11),
             SCARRY4(iVar7,uVar11))) goto LAB_100074924;
          pbVar5 = pbVar5 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else if (uVar11 == 0x2d) {
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000749d0);
          (*pcVar1)();
        }
        lVar8 = uVar4 - 1;
        if (lVar8 == 0) {
LAB_100074924:
          pbVar10 = (byte *)0x0;
          local_24 = 1;
          goto LAB_100074940;
        }
        pbVar10 = (byte *)0x0;
        pbVar5 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar5 - 0x30) ||
              (lVar9 = (long)(int)pbVar10 * 10, iVar7 = (int)lVar9, lVar9 - iVar7 != 0)) ||
             (uVar11 = *pbVar5 - 0x30 & 0xff, pbVar10 = (byte *)(ulong)(iVar7 - uVar11),
             SBORROW4(iVar7,uVar11))) goto LAB_100074924;
          pbVar5 = pbVar5 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else {
        if (uVar4 == 0) goto LAB_100074924;
        pbVar10 = (byte *)0x0;
        ppbVar6 = &local_38;
        do {
          if (((9 < *(byte *)ppbVar6 - 0x30) ||
              (lVar8 = (long)(int)pbVar10 * 10, iVar7 = (int)lVar8, lVar8 - iVar7 != 0)) ||
             (uVar11 = *(byte *)ppbVar6 - 0x30 & 0xff, pbVar10 = (byte *)(ulong)(iVar7 + uVar11),
             SCARRY4(iVar7,uVar11))) goto LAB_100074924;
          ppbVar6 = (byte **)((long)ppbVar6 + 1);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      local_24 = 0;
    }
LAB_100074940:
    uVar2 = (ulong)local_24;
    _swift_bridgeObjectRelease(param_2);
    param_1 = pbVar10;
  }
  else {
    FUN_100072d24(param_1,param_2,10,FUN_100071ff8);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = (ulong)param_1 >> 0x20 & 1;
  }
  uVar11 = (uint)uVar2;
  uVar3 = 0;
  if (uVar2 == 0) {
    uVar3 = (ulong)param_1 & 0xffffffff;
  }
LAB_100074958:
  return uVar3 | (ulong)uVar11 << 0x20;
}

