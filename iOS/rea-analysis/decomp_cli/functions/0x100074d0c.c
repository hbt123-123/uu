// rea decompile_all
// name: FUN_100074d0c
// address: 0x100074d0c
// body: available
// range: 0x100074d0c-0x100075057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100074d0c(byte *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte **ppbVar9;
  uint uVar10;
  byte *local_38;
  ulong uStack_30;
  byte local_21;
  
  uVar7 = param_2 >> 0x38 & 0xf;
  uVar5 = (ulong)param_1 & 0xffffffffffff;
  uVar1 = uVar5;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar10 = 1;
    uVar4 = 0;
    goto LAB_100074fe0;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        uVar5 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_1 == 0x2b) {
        if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100075054);
          (*pcVar2)();
        }
        lVar6 = uVar5 - 1;
        if (lVar6 == 0) goto LAB_100074f4c;
        if (param_1 == (byte *)0x0) {
LAB_100074fc0:
          uVar3 = 0;
          local_21 = 0;
        }
        else {
          uVar3 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (uVar10 = ((uVar3 & 0xff) + (uVar3 & 0xff) * 4) * 2, (uVar10 & 0xf00) != 0)) ||
               (uVar3 = (uVar10 & 0xff) + (*param_1 - 0x30 & 0xff), (uVar3 & 0xffffff00) != 0))
            goto LAB_100074f4c;
            local_21 = 0;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10007504c);
          (*pcVar2)();
        }
        lVar6 = uVar5 - 1;
        if (lVar6 == 0) {
LAB_100074f4c:
          uVar3 = 0;
          local_21 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_100074fc0;
          uVar3 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (uVar10 = ((uVar3 & 0xff) + (uVar3 & 0xff) * 4) * 2, (uVar10 & 0xf00) != 0)) ||
               (uVar3 = (uVar10 & 0xff) - (*param_1 - 0x30 & 0xff), (uVar3 & 0xffffff00) != 0))
            goto LAB_100074f4c;
            local_21 = 0;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      else {
        if (uVar5 == 0) goto LAB_100074f4c;
        uVar3 = 0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (uVar10 = ((uVar3 & 0xff) + (uVar3 & 0xff) * 4) * 2, (uVar10 & 0xf00) != 0)) ||
             (uVar3 = (uVar10 & 0xff) + (*param_1 - 0x30 & 0xff), (uVar3 & 0xffffff00) != 0))
          goto LAB_100074f4c;
          local_21 = 0;
          param_1 = param_1 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      local_38 = param_1;
      uStack_30 = param_2 & 0xffffffffffffff;
      uVar10 = (uint)param_1 & 0xff;
      if (uVar10 == 0x2b) {
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100075058);
          (*pcVar2)();
        }
        lVar6 = uVar7 - 1;
        if (lVar6 == 0) goto LAB_100074fb0;
        uVar3 = 0;
        pbVar8 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar8 - 0x30) ||
              (uVar10 = ((uVar3 & 0xff) + (uVar3 & 0xff) * 4) * 2, (uVar10 & 0xf00) != 0)) ||
             (uVar3 = (uVar10 & 0xff) + (*pbVar8 - 0x30 & 0xff), (uVar3 & 0xffffff00) != 0))
          goto LAB_100074fb0;
          pbVar8 = pbVar8 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else if (uVar10 == 0x2d) {
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100075050);
          (*pcVar2)();
        }
        lVar6 = uVar7 - 1;
        if (lVar6 == 0) {
LAB_100074fb0:
          uVar3 = 0;
          local_21 = 1;
          goto LAB_100074fcc;
        }
        uVar3 = 0;
        pbVar8 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar8 - 0x30) ||
              (uVar10 = ((uVar3 & 0xff) + (uVar3 & 0xff) * 4) * 2, (uVar10 & 0xf00) != 0)) ||
             (uVar3 = (uVar10 & 0xff) - (*pbVar8 - 0x30 & 0xff), (uVar3 & 0xffffff00) != 0))
          goto LAB_100074fb0;
          pbVar8 = pbVar8 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        if (uVar7 == 0) goto LAB_100074fb0;
        uVar3 = 0;
        ppbVar9 = &local_38;
        do {
          if (((9 < *(byte *)ppbVar9 - 0x30) ||
              (uVar10 = ((uVar3 & 0xff) + (uVar3 & 0xff) * 4) * 2, (uVar10 & 0xf00) != 0)) ||
             (uVar3 = (uVar10 & 0xff) + (*(byte *)ppbVar9 - 0x30 & 0xff), (uVar3 & 0xffffff00) != 0)
             ) goto LAB_100074fb0;
          ppbVar9 = (byte **)((long)ppbVar9 + 1);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      local_21 = 0;
    }
LAB_100074fcc:
    uVar10 = (uint)local_21;
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    FUN_1000725f0(param_1,param_2,10,FUN_1000726e8);
    uVar3 = (uint)param_1;
    _swift_bridgeObjectRelease(param_2);
    uVar10 = uVar3 >> 8 & 1;
  }
  uVar4 = 0;
  if (uVar10 == 0) {
    uVar4 = uVar3;
  }
LAB_100074fe0:
  return uVar4 & 0xff | uVar10 << 8;
}

