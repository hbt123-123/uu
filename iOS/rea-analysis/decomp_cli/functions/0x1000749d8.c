// rea decompile_all
// name: FUN_1000749d8
// address: 0x1000749d8
// body: available
// range: 0x1000749d8-0x100074d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000749d8(byte *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte **ppbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  byte *local_48;
  ulong uStack_40;
  byte local_38;
  
  uVar3 = param_2 >> 0x38 & 0xf;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  uVar10 = uVar2;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar10 = uVar3;
  }
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar9 = 1;
    pbVar8 = (byte *)0x0;
    goto LAB_100074c98;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100074d08);
          (*pcVar1)();
        }
        lVar6 = uVar2 - 1;
        if (lVar6 == 0) goto LAB_100074c08;
        if (param_1 == (byte *)0x0) {
LAB_100074c78:
          pbVar8 = (byte *)0x0;
          local_38 = 0;
        }
        else {
          pbVar8 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (lVar7 = (long)pbVar8 * 10,
                SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
               (uVar10 = (ulong)(byte)(*param_1 - 0x30), pbVar8 = (byte *)(lVar7 + uVar10),
               SCARRY8(lVar7,uVar10))) goto LAB_100074c08;
            local_38 = 0;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100074d00);
          (*pcVar1)();
        }
        lVar6 = uVar2 - 1;
        if (lVar6 == 0) {
LAB_100074c08:
          pbVar8 = (byte *)0x0;
          local_38 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_100074c78;
          pbVar8 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (lVar7 = (long)pbVar8 * 10,
                SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
               (uVar10 = (ulong)(byte)(*param_1 - 0x30), pbVar8 = (byte *)(lVar7 - uVar10),
               SBORROW8(lVar7,uVar10))) goto LAB_100074c08;
            local_38 = 0;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      else {
        if (uVar2 == 0) goto LAB_100074c08;
        pbVar8 = (byte *)0x0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (lVar6 = (long)pbVar8 * 10,
              SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar10 = (ulong)(byte)(*param_1 - 0x30), pbVar8 = (byte *)(lVar6 + uVar10),
             SCARRY8(lVar6,uVar10))) goto LAB_100074c08;
          local_38 = 0;
          param_1 = param_1 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else {
      local_48 = param_1;
      uStack_40 = param_2 & 0xffffffffffffff;
      uVar9 = (uint)param_1 & 0xff;
      if (uVar9 == 0x2b) {
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100074d0c);
          (*pcVar1)();
        }
        lVar6 = uVar3 - 1;
        if (lVar6 == 0) goto LAB_100074c68;
        pbVar8 = (byte *)0x0;
        pbVar4 = (byte *)((ulong)&local_48 | 1);
        do {
          if (((9 < *pbVar4 - 0x30) ||
              (lVar7 = (long)pbVar8 * 10,
              SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
             (uVar10 = (ulong)(byte)(*pbVar4 - 0x30), pbVar8 = (byte *)(lVar7 + uVar10),
             SCARRY8(lVar7,uVar10))) goto LAB_100074c68;
          pbVar4 = pbVar4 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else if (uVar9 == 0x2d) {
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100074d04);
          (*pcVar1)();
        }
        lVar6 = uVar3 - 1;
        if (lVar6 == 0) {
LAB_100074c68:
          pbVar8 = (byte *)0x0;
          local_38 = 1;
          goto LAB_100074c84;
        }
        pbVar8 = (byte *)0x0;
        pbVar4 = (byte *)((ulong)&local_48 | 1);
        do {
          if (((9 < *pbVar4 - 0x30) ||
              (lVar7 = (long)pbVar8 * 10,
              SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
             (uVar10 = (ulong)(byte)(*pbVar4 - 0x30), pbVar8 = (byte *)(lVar7 - uVar10),
             SBORROW8(lVar7,uVar10))) goto LAB_100074c68;
          pbVar4 = pbVar4 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        if (uVar3 == 0) goto LAB_100074c68;
        pbVar8 = (byte *)0x0;
        ppbVar5 = &local_48;
        do {
          if (((9 < *(byte *)ppbVar5 - 0x30) ||
              (lVar6 = (long)pbVar8 * 10,
              SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar10 = (ulong)(byte)(*(byte *)ppbVar5 - 0x30), pbVar8 = (byte *)(lVar6 + uVar10),
             SCARRY8(lVar6,uVar10))) goto LAB_100074c68;
          ppbVar5 = (byte **)((long)ppbVar5 + 1);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      local_38 = 0;
    }
LAB_100074c84:
    uVar10 = (ulong)local_38;
    param_1 = pbVar8;
  }
  else {
    uVar10 = param_2;
    FUN_100072274(param_1,param_2,10,FUN_100072370);
  }
  _swift_bridgeObjectRelease(param_2);
  uVar9 = (uint)uVar10;
  pbVar8 = (byte *)0x0;
  if ((uVar10 & 1) == 0) {
    pbVar8 = param_1;
  }
LAB_100074c98:
  auVar11._8_4_ = uVar9 & 1;
  auVar11._0_8_ = pbVar8;
  auVar11._12_4_ = 0;
  return auVar11;
}

