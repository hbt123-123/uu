// rea decompile_all
// name: FUN_100074000
// address: 0x100074000
// body: available
// range: 0x100074000-0x100074363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100074000(byte *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte **ppbVar11;
  uint uVar12;
  byte *local_38;
  ulong uStack_30;
  byte local_21;
  
  uVar9 = param_2 >> 0x38 & 0xf;
  uVar7 = (ulong)param_1 & 0xffffffffffff;
  uVar1 = uVar7;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = uVar9;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar12 = 1;
    uVar6 = 0;
    goto LAB_1000742ec;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        uVar7 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_1 == 0x2b) {
        if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100074360);
          (*pcVar4)();
        }
        lVar8 = uVar7 - 1;
        if (lVar8 == 0) goto LAB_100074254;
        if (param_1 == (byte *)0x0) {
LAB_1000742cc:
          uVar5 = 0;
          local_21 = 0;
        }
        else {
          uVar5 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (iVar2 = ((int)(char)uVar5 + (char)uVar5 * 4) * 2, iVar3 = (int)(char)iVar2,
                iVar3 != iVar2)) ||
               (uVar5 = iVar3 + (char)(*param_1 - 0x30), (int)(char)uVar5 != uVar5))
            goto LAB_100074254;
            local_21 = 0;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100074358);
          (*pcVar4)();
        }
        lVar8 = uVar7 - 1;
        if (lVar8 == 0) {
LAB_100074254:
          uVar5 = 0;
          local_21 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_1000742cc;
          uVar5 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (iVar2 = ((int)(char)uVar5 + (char)uVar5 * 4) * 2, iVar3 = (int)(char)iVar2,
                iVar3 != iVar2)) ||
               (uVar5 = iVar3 - (char)(*param_1 - 0x30), (int)(char)uVar5 != uVar5))
            goto LAB_100074254;
            local_21 = 0;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else {
        if (uVar7 == 0) goto LAB_100074254;
        uVar5 = 0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (iVar2 = ((int)(char)uVar5 + (char)uVar5 * 4) * 2, iVar3 = (int)(char)iVar2,
              iVar3 != iVar2)) ||
             (uVar5 = iVar3 + (char)(*param_1 - 0x30), (int)(char)uVar5 != uVar5))
          goto LAB_100074254;
          local_21 = 0;
          param_1 = param_1 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      local_38 = param_1;
      uStack_30 = param_2 & 0xffffffffffffff;
      uVar12 = (uint)param_1 & 0xff;
      if (uVar12 == 0x2b) {
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100074364);
          (*pcVar4)();
        }
        lVar8 = uVar9 - 1;
        if (lVar8 == 0) goto LAB_1000742bc;
        uVar5 = 0;
        pbVar10 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar10 - 0x30) ||
              (iVar2 = ((int)(char)uVar5 + (char)uVar5 * 4) * 2, iVar3 = (int)(char)iVar2,
              iVar3 != iVar2)) ||
             (uVar5 = iVar3 + (char)(*pbVar10 - 0x30), (int)(char)uVar5 != uVar5))
          goto LAB_1000742bc;
          pbVar10 = pbVar10 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else if (uVar12 == 0x2d) {
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10007435c);
          (*pcVar4)();
        }
        lVar8 = uVar9 - 1;
        if (lVar8 == 0) {
LAB_1000742bc:
          uVar5 = 0;
          local_21 = 1;
          goto LAB_1000742d8;
        }
        uVar5 = 0;
        pbVar10 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar10 - 0x30) ||
              (iVar2 = ((int)(char)uVar5 + (char)uVar5 * 4) * 2, iVar3 = (int)(char)iVar2,
              iVar3 != iVar2)) ||
             (uVar5 = iVar3 - (char)(*pbVar10 - 0x30), (int)(char)uVar5 != uVar5))
          goto LAB_1000742bc;
          pbVar10 = pbVar10 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else {
        if (uVar9 == 0) goto LAB_1000742bc;
        uVar5 = 0;
        ppbVar11 = &local_38;
        do {
          if (((9 < *(byte *)ppbVar11 - 0x30) ||
              (iVar2 = ((int)(char)uVar5 + (char)uVar5 * 4) * 2, iVar3 = (int)(char)iVar2,
              iVar3 != iVar2)) ||
             (uVar5 = iVar3 + (char)(*(byte *)ppbVar11 - 0x30), (int)(char)uVar5 != uVar5))
          goto LAB_1000742bc;
          ppbVar11 = (byte **)((long)ppbVar11 + 1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      local_21 = 0;
    }
LAB_1000742d8:
    uVar12 = (uint)local_21;
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    FUN_1000725f0(param_1,param_2,10,FUN_100071a98);
    uVar5 = (uint)param_1;
    _swift_bridgeObjectRelease(param_2);
    uVar12 = uVar5 >> 8 & 1;
  }
  uVar6 = 0;
  if (uVar12 == 0) {
    uVar6 = uVar5;
  }
LAB_1000742ec:
  return uVar6 & 0xff | uVar12 << 8;
}

