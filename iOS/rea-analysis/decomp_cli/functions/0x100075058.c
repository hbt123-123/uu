// rea decompile_all
// name: FUN_100075058
// address: 0x100075058
// body: available
// range: 0x100075058-0x1000753a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100075058(byte *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte **ppbVar8;
  uint uVar9;
  uint uVar10;
  byte *local_38;
  ulong uStack_30;
  byte local_22;
  
  uVar6 = param_2 >> 0x38 & 0xf;
  uVar4 = (ulong)param_1 & 0xffffffffffff;
  uVar1 = uVar4;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar10 = 1;
    uVar3 = 0;
    goto LAB_100075330;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        uVar4 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_1 == 0x2b) {
        if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000753a0);
          (*pcVar2)();
        }
        lVar5 = uVar4 - 1;
        if (lVar5 == 0) goto LAB_100075298;
        if (param_1 == (byte *)0x0) {
LAB_10007530c:
          uVar9 = 0;
          local_22 = 0;
        }
        else {
          uVar9 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (uVar10 = ((uVar9 & 0xffff) + (uVar9 & 0xffff) * 4) * 2, (uVar10 & 0xf0000) != 0))
               || (uVar9 = (uVar10 & 0xffff) + (*param_1 - 0x30 & 0xff), (uVar9 & 0xffff0000) != 0))
            goto LAB_100075298;
            local_22 = 0;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100075398);
          (*pcVar2)();
        }
        lVar5 = uVar4 - 1;
        if (lVar5 == 0) {
LAB_100075298:
          uVar9 = 0;
          local_22 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_10007530c;
          uVar9 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (uVar10 = ((uVar9 & 0xffff) + (uVar9 & 0xffff) * 4) * 2, (uVar10 & 0xf0000) != 0))
               || (uVar9 = (uVar10 & 0xffff) - (*param_1 - 0x30 & 0xff), (uVar9 & 0xffff0000) != 0))
            goto LAB_100075298;
            local_22 = 0;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
      else {
        if (uVar4 == 0) goto LAB_100075298;
        uVar9 = 0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (uVar10 = ((uVar9 & 0xffff) + (uVar9 & 0xffff) * 4) * 2, (uVar10 & 0xf0000) != 0)) ||
             (uVar9 = (uVar10 & 0xffff) + (*param_1 - 0x30 & 0xff), (uVar9 & 0xffff0000) != 0))
          goto LAB_100075298;
          local_22 = 0;
          param_1 = param_1 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
      local_38 = param_1;
      uStack_30 = param_2 & 0xffffffffffffff;
      uVar10 = (uint)param_1 & 0xff;
      if (uVar10 == 0x2b) {
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000753a4);
          (*pcVar2)();
        }
        lVar5 = uVar6 - 1;
        if (lVar5 == 0) goto LAB_1000752fc;
        uVar9 = 0;
        pbVar7 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar7 - 0x30) ||
              (uVar10 = ((uVar9 & 0xffff) + (uVar9 & 0xffff) * 4) * 2, (uVar10 & 0xf0000) != 0)) ||
             (uVar9 = (uVar10 & 0xffff) + (*pbVar7 - 0x30 & 0xff), (uVar9 & 0xffff0000) != 0))
          goto LAB_1000752fc;
          pbVar7 = pbVar7 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      else if (uVar10 == 0x2d) {
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10007539c);
          (*pcVar2)();
        }
        lVar5 = uVar6 - 1;
        if (lVar5 == 0) {
LAB_1000752fc:
          uVar9 = 0;
          local_22 = 1;
          goto LAB_100075318;
        }
        uVar9 = 0;
        pbVar7 = (byte *)((ulong)&local_38 | 1);
        do {
          if (((9 < *pbVar7 - 0x30) ||
              (uVar10 = ((uVar9 & 0xffff) + (uVar9 & 0xffff) * 4) * 2, (uVar10 & 0xf0000) != 0)) ||
             (uVar9 = (uVar10 & 0xffff) - (*pbVar7 - 0x30 & 0xff), (uVar9 & 0xffff0000) != 0))
          goto LAB_1000752fc;
          pbVar7 = pbVar7 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      else {
        if (uVar6 == 0) goto LAB_1000752fc;
        uVar9 = 0;
        ppbVar8 = &local_38;
        do {
          if (((9 < *(byte *)ppbVar8 - 0x30) ||
              (uVar10 = ((uVar9 & 0xffff) + (uVar9 & 0xffff) * 4) * 2, (uVar10 & 0xf0000) != 0)) ||
             (uVar9 = (uVar10 & 0xffff) + (*(byte *)ppbVar8 - 0x30 & 0xff),
             (uVar9 & 0xffff0000) != 0)) goto LAB_1000752fc;
          ppbVar8 = (byte **)((long)ppbVar8 + 1);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      local_22 = 0;
    }
LAB_100075318:
    uVar10 = (uint)local_22;
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    FUN_10007298c(param_1,param_2,10,FUN_100072a80);
    _swift_bridgeObjectRelease(param_2);
    uVar9 = (uint)param_1;
    uVar10 = uVar9 >> 0x10 & 1;
  }
  uVar3 = 0;
  if (uVar10 == 0) {
    uVar3 = uVar9 & 0xffff;
  }
LAB_100075330:
  return uVar3 | uVar10 << 0x10;
}

