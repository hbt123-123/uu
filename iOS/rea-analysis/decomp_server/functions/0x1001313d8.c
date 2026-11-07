// rea decompile_all
// name: FUN_1001313d8
// address: 0x1001313d8
// body: available
// range: 0x1001313d8-0x1001318bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001313d8(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *****pppppuVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_f0 [16];
  undefined8 ****local_e0;
  undefined1 auStack_d0 [16];
  undefined8 ****local_c0;
  undefined1 auStack_b0 [16];
  undefined8 ****local_a0;
  undefined8 ****local_90;
  ulong uStack_88;
  undefined1 *local_78;
  undefined8 local_70;
  
  uVar18 = 0x65736c6166;
  local_78 = (undefined1 *)0x0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x14);
  _swift_bridgeObjectRelease(local_70);
  local_78 = &DAT_d000000000000010;
  local_70 = 0x800000010088fa10;
  local_90 = (undefined8 ****)((ulong)local_90 & 0xffffffffffffff00);
  local_a0 = &local_90;
  uVar11 = 0;
  FUN_100152adc(FUN_1001326cc,auStack_b0,*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  bVar10 = (uVar11 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar10) {
    uVar4 = uVar18;
  }
  uVar20 = 0xe500000000000000;
  uVar2 = 0xe400000000000000;
  if (bVar10) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  uVar4 = local_70;
  puVar7 = local_78;
  local_78 = (undefined1 *)0x100000000000003a;
  local_70 = 0x800000010088fa30;
  __sSS6appendyySSF(puVar7,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  uVar2 = local_70;
  puVar7 = local_78;
  local_78 = (undefined1 *)0x0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  _swift_bridgeObjectRelease(local_70);
  local_78 = (undefined1 *)0xd000000000000014;
  local_70 = 0x800000010088fa70;
  local_90 = (undefined8 ****)((ulong)local_90 & 0xffffffffffffff00);
  uVar11 = 0;
  local_c0 = &local_90;
  FUN_100152adc(FUN_1001326cc,auStack_d0,*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x30));
  bVar10 = (uVar11 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar10) {
    uVar4 = uVar18;
  }
  uVar3 = 0xe400000000000000;
  if (bVar10) {
    uVar3 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  uVar4 = local_70;
  puVar8 = local_78;
  local_78 = puVar7;
  local_70 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(puVar8,uVar4);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar4);
  uVar2 = local_70;
  puVar7 = local_78;
  local_78 = (undefined1 *)0x0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  _swift_bridgeObjectRelease(local_70);
  local_78 = (undefined1 *)0xd000000000000014;
  local_70 = 0x800000010088fa90;
  local_90 = (undefined8 ****)((ulong)local_90 & 0xffffffffffffff00);
  local_e0 = &local_90;
  uVar11 = 0;
  FUN_100152adc(FUN_1001326cc,auStack_f0,*(undefined8 *)(param_2 + 0x38),
                *(undefined8 *)(param_2 + 0x40));
  bVar10 = (uVar11 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar10) {
    uVar4 = uVar18;
  }
  uVar18 = 0xe400000000000000;
  if (bVar10) {
    uVar18 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar18);
  _swift_bridgeObjectRelease(uVar18);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  uVar4 = local_70;
  puVar8 = local_78;
  local_78 = puVar7;
  local_70 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(puVar8,uVar4);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = local_70;
  puVar7 = local_78;
  local_78 = (undefined1 *)0x0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1e);
  _swift_bridgeObjectRelease(local_70);
  local_78 = (undefined1 *)0xd00000000000001c;
  local_70 = 0x800000010088fab0;
  lVar15 = *(long *)(param_2 + 0x48);
  lVar16 = *(long *)(lVar15 + 0x10);
  if (lVar16 == 0) {
    uVar18 = 0x65736c6166;
  }
  else {
    lVar17 = 0;
    do {
      puVar1 = (ulong *)(lVar15 + 0x20 + lVar17 * 0x10);
      pppppuVar5 = (undefined8 *****)*puVar1;
      uVar6 = puVar1[1];
      lVar17 = lVar17 + 1;
      uVar11 = (ulong)pppppuVar5 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar11 = uVar6 >> 0x38 & 0xf;
      }
      uVar14 = (uint)((ulong)pppppuVar5 >> 0x3b) & 1;
      if ((uVar6 & 0x1000000000000000) == 0) {
        uVar14 = 1;
      }
      uVar19 = 4L << uVar14;
      uVar12 = 0xf;
      while (uVar11 * 4 - (uVar12 >> 0xe) != 0) {
        uVar22 = uVar12 & 0xc;
        uVar21 = uVar12;
        if (uVar22 == uVar19) {
          FUN_10000caa8();
        }
        if (uVar11 <= uVar21 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001318bc);
          (*pcVar9)();
        }
        if ((uVar6 >> 0x3c & 1) == 0) {
          if ((uVar6 >> 0x3d & 1) == 0) {
            pppppuVar13 = (undefined8 *****)((uVar6 & 0xfffffffffffffff) + 0x20);
            if (((ulong)pppppuVar5 >> 0x3c & 1) == 0) {
              pppppuVar13 = pppppuVar5;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar5,uVar6);
            }
          }
          else {
            local_90 = pppppuVar5;
            uStack_88 = uVar6 & 0xffffffffffffff;
            pppppuVar13 = &local_90;
          }
          uVar21 = (ulong)*(byte *)((long)pppppuVar13 + (uVar21 >> 0x10));
          if (uVar22 != uVar19) goto LAB_10013177c;
LAB_1001317e0:
          FUN_10000caa8();
          if ((uVar6 >> 0x3c & 1) == 0) goto LAB_100131708;
LAB_100131780:
          if (uVar11 <= uVar12 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1001318c0);
            (*pcVar9)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar21,pppppuVar5,uVar6);
          if (uVar22 == uVar19) goto LAB_1001317e0;
LAB_10013177c:
          if ((uVar6 >> 0x3c & 1) != 0) goto LAB_100131780;
LAB_100131708:
          uVar12 = (uVar12 & 0xffffffffffff0000) + 0x10004;
        }
        if ((uVar21 & 0xff) == 0) {
          uVar20 = 0xe400000000000000;
          uVar18 = 0x65757274;
          goto LAB_100131844;
        }
      }
    } while (lVar17 != lVar16);
    uVar20 = 0xe500000000000000;
    uVar18 = 0x65736c6166;
  }
LAB_100131844:
  __sSS6appendyySSF(uVar18,uVar20);
  _swift_bridgeObjectRelease(uVar20);
  uVar18 = local_70;
  puVar8 = local_78;
  local_78 = puVar7;
  local_70 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(puVar8,uVar18);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar18);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_78;
  param_1[1] = local_70;
  return;
}

