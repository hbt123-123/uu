// rea decompile_all
// name: FUN_100565208
// address: 0x100565208
// body: available
// range: 0x100565208-0x10056547f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100565208(long param_1,ulong param_2)

{
  void *pvVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 local_7c;
  void *local_70;
  ulong uStack_68;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    lVar14 = 0;
    uVar3 = (param_2 & 0x1fffffff) << 3 | 2;
    do {
      puVar2 = (ulong *)(param_1 + 0x20 + lVar14 * 0x10);
      pvVar5 = (void *)*puVar2;
      uVar11 = puVar2[1];
      pbVar6 = *(byte **)(unaff_x20 + 8);
      pbVar7 = pbVar6;
      uVar12 = uVar3;
      uVar9 = uVar3;
      if (0x7f < (param_2 & 0x1fffffff) << 3) {
        do {
          pbVar7 = pbVar6 + 1;
          *pbVar6 = (byte)uVar12 | 0x80;
          uVar9 = uVar12 >> 7;
          uVar10 = uVar12 >> 0xe;
          pbVar6 = pbVar7;
          uVar12 = uVar9;
        } while (uVar10 != 0);
      }
      pbVar6 = pbVar7 + 1;
      *pbVar7 = (byte)uVar9;
      *(byte **)(unaff_x20 + 8) = pbVar6;
      if ((uVar11 >> 0x3c & 1) == 0) {
        if ((uVar11 >> 0x3d & 1) == 0) {
          if (((ulong)pvVar5 >> 0x3c & 1) == 0) {
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            pvVar1 = pvVar5;
          }
          else {
            pvVar1 = (void *)((uVar11 & 0xfffffffffffffff) + 0x20);
            uVar11 = (ulong)pvVar5 & 0xffffffffffff;
          }
          uVar12 = uVar11;
          uVar9 = uVar11;
          if (0x7f < uVar11) {
            do {
              pbVar7 = pbVar6 + 1;
              *pbVar6 = (byte)uVar12 | 0x80;
              uVar9 = uVar12 >> 7;
              uVar10 = uVar12 >> 0xe;
              uVar12 = uVar9;
              pbVar6 = pbVar7;
            } while (uVar10 != 0);
          }
          pbVar7 = pbVar6 + 1;
          *pbVar6 = (byte)uVar9;
          *(byte **)(unaff_x20 + 8) = pbVar7;
          if (pvVar1 != (void *)0x0) {
            if (0 < (long)uVar11) {
              _memmove(pbVar7,pvVar1,uVar11);
            }
            pbVar7 = pbVar7 + uVar11;
          }
        }
        else {
          uVar12 = uVar11 >> 0x38 & 0xf;
          uStack_68 = uVar11 & 0xffffffffffffff;
          pbVar7[1] = (byte)uVar12;
          local_70 = pvVar5;
          if (uVar12 != 0) {
            _memmove(pbVar7 + 2,&local_70,uVar12);
          }
          pbVar7 = pbVar7 + 2 + uVar12;
        }
        *(byte **)(unaff_x20 + 8) = pbVar7;
      }
      else {
        __sSS8UTF8ViewV13_foreignCountSiyF(pvVar5,uVar11);
        thunk_FUN_100507c64();
        uVar12 = (ulong)pvVar5 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar12 = uVar11 >> 0x38 & 0xf;
        }
        if (uVar12 != 0) {
          uVar9 = 0xf;
          do {
            if ((uVar9 & 0xc) == 4L << ((ulong)pvVar5 >> 0x3b & 1)) {
              uVar10 = uVar9;
              FUN_10000caa8(uVar9,pvVar5,uVar11);
              if (uVar12 <= uVar10 >> 0x10) goto LAB_100565478;
              __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
              local_7c = (undefined1)uVar10;
              FUN_10000caa8(uVar9,pvVar5,uVar11);
            }
            else {
              if (uVar12 <= uVar9 >> 0x10) {
LAB_100565478:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10056547c);
                (*pcVar4)();
              }
              uVar10 = uVar9;
              __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar9,pvVar5,uVar11);
              local_7c = (undefined1)uVar10;
            }
            if (uVar12 <= uVar9 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100565480);
              (*pcVar4)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar9,pvVar5,uVar11);
            puVar8 = *(undefined1 **)(unaff_x20 + 8);
            *puVar8 = local_7c;
            *(undefined1 **)(unaff_x20 + 8) = puVar8 + 1;
          } while (uVar12 << 2 != uVar9 >> 0xe);
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar13);
  }
  return;
}

