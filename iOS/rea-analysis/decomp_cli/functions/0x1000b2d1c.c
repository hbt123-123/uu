// rea decompile_all
// name: FUN_1000b2d1c
// address: 0x1000b2d1c
// body: available
// range: 0x1000b2d1c-0x1000b306f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b2d1c(long param_1,ulong param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
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
  
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
  pbVar2 = (byte *)_getenv((char *)(param_1 + 0x20));
  _swift_release(param_1);
  if (pbVar2 != (byte *)0x0) {
    __sSS7cStringSSSPys4Int8VG_tcfC();
    uVar4 = param_2 >> 0x38 & 0xf;
    uVar3 = (ulong)pbVar2 & 0xffffffffffff;
    uVar10 = uVar3;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar10 = uVar4;
    }
    if (uVar10 != 0) {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar2 >> 0x3c & 1) == 0) {
            uVar3 = param_2;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pbVar2 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar2 == 0x2b) {
            if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b306c);
              (*pcVar1)();
            }
            lVar6 = uVar3 - 1;
            if (lVar6 == 0) goto LAB_1000b2f74;
            if (pbVar2 == (byte *)0x0) {
LAB_1000b2fe4:
              pbVar8 = (byte *)0x0;
              local_38 = 0;
            }
            else {
              pbVar8 = (byte *)0x0;
              do {
                pbVar2 = pbVar2 + 1;
                if (((9 < *pbVar2 - 0x30) ||
                    (lVar7 = (long)pbVar8 * 10,
                    SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                   (uVar10 = (ulong)(byte)(*pbVar2 - 0x30), pbVar8 = (byte *)(lVar7 + uVar10),
                   SCARRY8(lVar7,uVar10))) goto LAB_1000b2f74;
                local_38 = 0;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          else if (*pbVar2 == 0x2d) {
            if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b3064);
              (*pcVar1)();
            }
            lVar6 = uVar3 - 1;
            if (lVar6 == 0) {
LAB_1000b2f74:
              pbVar8 = (byte *)0x0;
              local_38 = 1;
            }
            else {
              if (pbVar2 == (byte *)0x0) goto LAB_1000b2fe4;
              pbVar8 = (byte *)0x0;
              do {
                pbVar2 = pbVar2 + 1;
                if (((9 < *pbVar2 - 0x30) ||
                    (lVar7 = (long)pbVar8 * 10,
                    SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                   (uVar10 = (ulong)(byte)(*pbVar2 - 0x30), pbVar8 = (byte *)(lVar7 - uVar10),
                   SBORROW8(lVar7,uVar10))) goto LAB_1000b2f74;
                local_38 = 0;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          else {
            if (uVar3 == 0) goto LAB_1000b2f74;
            pbVar8 = (byte *)0x0;
            do {
              if (((9 < *pbVar2 - 0x30) ||
                  (lVar6 = (long)pbVar8 * 10,
                  SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar2 - 0x30), pbVar8 = (byte *)(lVar6 + uVar10),
                 SCARRY8(lVar6,uVar10))) goto LAB_1000b2f74;
              local_38 = 0;
              pbVar2 = pbVar2 + 1;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
        }
        else {
          local_48 = pbVar2;
          uStack_40 = param_2 & 0xffffffffffffff;
          uVar9 = (uint)pbVar2 & 0xff;
          if (uVar9 == 0x2b) {
            if (uVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b3070);
              (*pcVar1)();
            }
            lVar6 = uVar4 - 1;
            if (lVar6 == 0) goto LAB_1000b2fd4;
            pbVar8 = (byte *)0x0;
            pbVar2 = (byte *)((ulong)&local_48 | 1);
            do {
              if (((9 < *pbVar2 - 0x30) ||
                  (lVar7 = (long)pbVar8 * 10,
                  SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar2 - 0x30), pbVar8 = (byte *)(lVar7 + uVar10),
                 SCARRY8(lVar7,uVar10))) goto LAB_1000b2fd4;
              pbVar2 = pbVar2 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          else if (uVar9 == 0x2d) {
            if (uVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b3068);
              (*pcVar1)();
            }
            lVar6 = uVar4 - 1;
            if (lVar6 == 0) {
LAB_1000b2fd4:
              pbVar8 = (byte *)0x0;
              local_38 = 1;
              goto LAB_1000b2ff0;
            }
            pbVar8 = (byte *)0x0;
            pbVar2 = (byte *)((ulong)&local_48 | 1);
            do {
              if (((9 < *pbVar2 - 0x30) ||
                  (lVar7 = (long)pbVar8 * 10,
                  SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar2 - 0x30), pbVar8 = (byte *)(lVar7 - uVar10),
                 SBORROW8(lVar7,uVar10))) goto LAB_1000b2fd4;
              pbVar2 = pbVar2 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          else {
            if (uVar4 == 0) goto LAB_1000b2fd4;
            pbVar8 = (byte *)0x0;
            ppbVar5 = &local_48;
            do {
              if (((9 < *(byte *)ppbVar5 - 0x30) ||
                  (lVar6 = (long)pbVar8 * 10,
                  SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*(byte *)ppbVar5 - 0x30), pbVar8 = (byte *)(lVar6 + uVar10)
                 , SCARRY8(lVar6,uVar10))) goto LAB_1000b2fd4;
              ppbVar5 = (byte **)((long)ppbVar5 + 1);
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          local_38 = 0;
        }
LAB_1000b2ff0:
        uVar10 = (ulong)local_38;
        pbVar2 = pbVar8;
      }
      else {
        uVar10 = param_2;
        FUN_1000718d4();
      }
      _swift_bridgeObjectRelease(param_2);
      uVar9 = (uint)uVar10;
      pbVar8 = (byte *)0x0;
      if ((uVar10 & 1) == 0) {
        pbVar8 = pbVar2;
      }
      goto LAB_1000b3018;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  uVar9 = 1;
  pbVar8 = (byte *)0x0;
LAB_1000b3018:
  auVar11._8_4_ = uVar9 & 1;
  auVar11._0_8_ = pbVar8;
  auVar11._12_4_ = 0;
  return auVar11;
}

