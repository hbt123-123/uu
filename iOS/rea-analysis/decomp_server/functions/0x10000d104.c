// rea decompile_all
// name: FUN_10000d104
// address: 0x10000d104
// body: available
// range: 0x10000d104-0x10000d53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000d3c0) */
/* WARNING: Removing unreachable block (ram,0x00010000d2a8) */
/* WARNING: Removing unreachable block (ram,0x00010000d414) */
/* WARNING: Removing unreachable block (ram,0x00010000d420) */

undefined8
FUN_10000d104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined1 auStack_110 [16];
  undefined8 local_100;
  ulong local_e8;
  long local_e0;
  long lStack_d8;
  ulong local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [16];
  undefined8 ****local_b0;
  undefined1 auStack_a0 [16];
  undefined8 ****local_90;
  undefined8 ****local_80;
  ulong uStack_78;
  byte local_69;
  byte local_68;
  
  local_80 = (undefined8 ****)0x2e;
  uStack_78 = 0xe100000000000000;
  local_90 = &local_80;
  _swift_bridgeObjectRetain(param_2);
  lVar5 = 0x7fffffffffffffff;
  FUN_10000b9ac(0x7fffffffffffffff,1,FUN_10000d540,auStack_a0,param_1,param_2);
  local_80 = (undefined8 *****)0x2e;
  uStack_78 = 0xe100000000000000;
  local_b0 = &local_80;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0x7fffffffffffffff;
  FUN_10000b9ac(0x7fffffffffffffff,1,FUN_10000d834,auStack_c0,param_3,param_4);
  local_c8 = *(ulong *)(lVar5 + 0x10);
  local_d0 = *(ulong *)(lVar6 + 0x10);
  local_e8 = local_d0;
  if (local_d0 <= local_c8) {
    local_e8 = local_c8;
  }
  if (local_e8 != 0) {
    lVar9 = 0;
    uVar12 = 0;
    local_e0 = lVar6;
    lStack_d8 = lVar5;
    do {
      if (local_c8 <= uVar12) {
        pppppuVar13 = (undefined8 *****)0x0;
        goto LAB_10000d264;
      }
      if (*(ulong *)(lVar5 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10000d53c);
        (*pcVar4)();
      }
      lVar1 = lVar5 + lVar9;
      pppppuVar13 = *(undefined8 ******)(lVar1 + 0x20);
      uVar7 = *(ulong *)(lVar1 + 0x28);
      if (0x3fff < (uVar7 ^ (ulong)pppppuVar13)) {
        pppppuVar10 = *(undefined8 ******)(lVar1 + 0x30);
        uVar2 = *(ulong *)(lVar1 + 0x38);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_100 = 10;
        _swift_bridgeObjectRetain(uVar2);
        if ((uVar2 >> 0x3c & 1) == 0) {
          if ((uVar2 >> 0x3d & 1) == 0) {
            if (((ulong)pppppuVar10 >> 0x3c & 1) == 0) {
              pppppuVar14 = pppppuVar10;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar10,uVar2);
            }
            else {
              pppppuVar14 = (undefined8 *****)((uVar2 & 0xfffffffffffffff) + 0x20);
            }
          }
          else {
            uStack_78 = uVar2 & 0xffffffffffffff;
            pppppuVar14 = &local_80;
            local_80 = pppppuVar10;
          }
          pppppuVar11 = pppppuVar13;
          FUN_10000d604();
          local_68 = (byte)pppppuVar11 & 1;
        }
        else {
          pppppuVar14 = (undefined8 *****)0x0;
          local_68 = 0;
        }
        bVar3 = local_68;
        local_69 = (byte)(uVar2 >> 0x3c) & 1;
        if (local_69 != 0) {
          FUN_10000c1cc(pppppuVar13,uVar7,pppppuVar10,uVar2,10);
          _swift_bridgeObjectRelease(uVar2);
          lVar6 = local_e0;
          lVar5 = lStack_d8;
          if ((uVar7 & 1) == 0) goto LAB_10000d264;
          goto LAB_10000d31c;
        }
        _swift_bridgeObjectRelease(uVar2);
        lVar6 = local_e0;
        pppppuVar13 = pppppuVar14;
        lVar5 = lStack_d8;
        if (bVar3 != 0) goto LAB_10000d31c;
LAB_10000d264:
        if (uVar12 < local_d0) goto LAB_10000d32c;
        pppppuVar10 = (undefined8 *****)0x0;
        goto LAB_10000d4a8;
      }
LAB_10000d31c:
      if (uVar12 < local_d0) {
        pppppuVar13 = (undefined8 *****)0x0;
LAB_10000d32c:
        if (*(ulong *)(lVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000d540);
          (*pcVar4)();
        }
        lVar1 = lVar6 + lVar9;
        pppppuVar10 = *(undefined8 ******)(lVar1 + 0x20);
        uVar7 = *(ulong *)(lVar1 + 0x28);
        if ((uVar7 ^ (ulong)pppppuVar10) < 0x4000) {
LAB_10000d3d8:
          if (0 < (long)pppppuVar13) break;
LAB_10000d49c:
          if ((long)pppppuVar13 < 0) goto LAB_10000d524;
        }
        else {
          pppppuVar14 = *(undefined8 ******)(lVar1 + 0x30);
          uVar2 = *(ulong *)(lVar1 + 0x38);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_100 = 10;
          _swift_bridgeObjectRetain(uVar2);
          if ((uVar2 >> 0x3c & 1) == 0) {
            if ((uVar2 >> 0x3d & 1) == 0) {
              if (((ulong)pppppuVar14 >> 0x3c & 1) == 0) {
                pppppuVar11 = pppppuVar14;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar14,uVar2);
              }
              else {
                pppppuVar11 = (undefined8 *****)((uVar2 & 0xfffffffffffffff) + 0x20);
              }
              pppppuVar8 = pppppuVar10;
              FUN_10000d604();
              local_68 = (byte)pppppuVar8 & 1;
            }
            else {
              uStack_78 = uVar2 & 0xffffffffffffff;
              pppppuVar11 = &local_80;
              pppppuVar8 = pppppuVar10;
              local_80 = pppppuVar14;
              FUN_10000d604(pppppuVar11,pppppuVar10,uVar7,pppppuVar14,uVar2,FUN_10000d5ac,
                            auStack_110);
              local_68 = (byte)pppppuVar8 & 1;
            }
          }
          else {
            pppppuVar11 = (undefined8 *****)0x0;
            local_68 = 0;
          }
          bVar3 = local_68;
          local_69 = (byte)(uVar2 >> 0x3c) & 1;
          if (local_69 == 0) {
            _swift_bridgeObjectRelease(uVar2);
            lVar6 = local_e0;
            pppppuVar10 = pppppuVar11;
            lVar5 = lStack_d8;
            if (bVar3 != 0) goto LAB_10000d3d8;
          }
          else {
            FUN_10000c1cc(pppppuVar10,uVar7,pppppuVar14,uVar2,10);
            _swift_bridgeObjectRelease(uVar2);
            lVar6 = local_e0;
            lVar5 = lStack_d8;
            if ((uVar7 & 1) != 0) {
              if ((long)pppppuVar13 < 1) goto LAB_10000d49c;
              break;
            }
          }
LAB_10000d4a8:
          if ((long)pppppuVar10 < (long)pppppuVar13) break;
          if ((long)pppppuVar13 < (long)pppppuVar10) {
LAB_10000d524:
            _swift_bridgeObjectRelease();
            _swift_bridgeObjectRelease(lVar5);
            return 0;
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 0x20;
    } while (local_e8 != uVar12);
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(lVar5);
  return 1;
}

