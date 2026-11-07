// rea decompile_all
// name: FUN_10065ca8c
// address: 0x10065ca8c
// body: available
// range: 0x10065ca8c-0x10065ce5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10065ca8c(undefined8 *param_1,undefined8 *param_2,ulong param_3,long param_4,undefined8 *param_5
             ,uint param_6)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  byte local_70;
  long local_68;
  
  if ((long)param_5 < 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce54);
    (*pcVar4)();
  }
  puVar5 = param_5;
  puVar10 = param_2;
  FUN_10065e570();
  puVar3 = PTR___sSuN_100995a50;
  if ((param_3 & 0xff) == 0) {
    if (param_1 == (undefined8 *)0x0 && param_2 == (undefined8 *)0x0) goto LAB_10065ccec;
  }
  else if ((((uint)param_3 & 0xff) != 1) && (*(long *)(param_4 + 0x10) == 0)) {
LAB_10065ccec:
    _swift_bridgeObjectRelease(param_4);
    local_80 = (undefined8 *)0x30;
    puStack_78 = (undefined8 *)0xe100000000000000;
    goto LAB_10065ce18;
  }
  if (puVar10 == (undefined8 *)0x0) {
    FUN_10065af18(param_1,param_2,param_3,param_4,param_5,param_6 & 1);
    lVar15 = param_4;
    puVar14 = param_1;
  }
  else {
    local_70 = (byte)param_3;
    uVar19 = (uint)param_3 & 0xff;
    puVar7 = puVar5;
    puVar14 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
    local_80 = param_1;
    puStack_78 = param_2;
    local_68 = param_4;
    if ((param_3 & 0xff) == 0) goto LAB_10065cb30;
LAB_10065cb1c:
    if ((uVar19 == 1) || (lVar15 = local_68, *(long *)(local_68 + 0x10) != 0)) {
      do {
        if (puVar10 == (undefined8 *)0x1) {
LAB_10065cb40:
          uVar17 = 0;
        }
        else {
          if ((param_3 & 0xff) == 0) {
            if (puStack_78 == (undefined8 *)0x0) {
              uVar13 = (ulong)(local_80 != (undefined8 *)0x0);
              goto joined_r0x00010065cbf0;
            }
            uVar13 = 2;
          }
          else {
            if (((uint)param_3 & 0xff) == 1) {
              uVar13 = (long)puStack_78 - (long)local_80;
              if (SBORROW8((long)puStack_78,(long)local_80)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce5c);
                (*pcVar4)();
              }
              if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce58);
                (*pcVar4)();
              }
            }
            else {
              uVar13 = *(ulong *)(local_68 + 0x10);
            }
joined_r0x00010065cbf0:
            if (uVar13 == 0) goto LAB_10065cb40;
          }
          uVar17 = 0;
          do {
            uVar18 = uVar13 - 1;
            if (local_70 == 0) {
              puVar7 = puStack_78;
              if (uVar13 != 2) {
                puVar7 = (undefined8 *)0x0;
              }
              puVar6 = local_80;
              if (uVar13 != 1) {
                puVar6 = puVar7;
              }
            }
            else if (local_70 == 1) {
              if (SBORROW8((long)puStack_78,(long)local_80)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce10);
                (*pcVar4)();
              }
              if ((long)puStack_78 - (long)local_80 < (long)uVar13) {
LAB_10065cc90:
                puVar6 = (undefined8 *)0x0;
              }
              else {
                puVar1 = (undefined *)((long)local_80 + uVar18);
                if (SCARRY8((long)local_80,uVar18)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce48);
                  (*pcVar4)();
                }
                if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce4c);
                  (*pcVar4)();
                }
                if (*(undefined **)(local_68 + 0x10) <= puVar1) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce50);
                  (*pcVar4)();
                }
                puVar6 = *(undefined8 **)(local_68 + (long)puVar1 * 8 + 0x20);
              }
            }
            else {
              if (*(long *)(local_68 + 0x10) < (long)uVar13) goto LAB_10065cc90;
              puVar6 = *(undefined8 **)(local_68 + uVar13 * 8 + 0x18);
            }
            puVar7 = &local_88;
            FUN_100654374(puVar7,uVar17,puVar6,puVar10);
            uVar17 = local_88;
            FUN_100644614();
            uVar13 = uVar18;
          } while (uVar18 != 0);
        }
        local_88 = uVar17;
        FUN_100659f38();
        puVar6 = &local_88;
        puVar11 = param_5;
        __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar6,param_5,param_6 & 1,puVar3,puVar7);
        puVar7 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar7 & 1) == 0) {
          puVar7 = (undefined8 *)0x0;
          FUN_10062991c(0,puVar14[2] + 1,1,puVar14);
          puVar14 = puVar7;
        }
        uVar13 = puVar14[2];
        if ((ulong)puVar14[3] >> 1 <= uVar13) {
          puVar7 = (undefined8 *)(ulong)(1 < (ulong)puVar14[3]);
          FUN_10062991c(puVar7,uVar13 + 1,1,puVar14);
          puVar14 = puVar7;
        }
        puVar14[2] = uVar13 + 1;
        puVar14[uVar13 * 2 + 4] = puVar6;
        puVar14[uVar13 * 2 + 5] = puVar11;
        param_3 = (ulong)local_70;
        uVar19 = (uint)local_70;
        if (uVar19 != 0) goto LAB_10065cb1c;
LAB_10065cb30:
        lVar15 = local_68;
        if (local_80 == (undefined8 *)0x0 && puStack_78 == (undefined8 *)0x0) break;
      } while( true );
    }
  }
  _swift_bridgeObjectRelease(lVar15);
  local_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0xe000000000000000;
  lVar15 = puVar14[2];
  if (lVar15 != 0) {
    lVar16 = lVar15 + -1;
    lVar9 = puVar14[lVar16 * 2 + 4];
    uVar17 = puVar14[lVar16 * 2 + 5];
    _swift_bridgeObjectRetain(uVar17);
    lVar8 = lVar9;
    __sSS5countSivg(lVar9,uVar17);
    if (SBORROW8((long)puVar5,lVar8)) {
LAB_10065ce3c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce40);
      (*pcVar4)();
    }
    __sSS6appendyySSF(lVar9,uVar17);
    _swift_bridgeObjectRelease(uVar17);
    if (lVar16 != 0) {
      puVar10 = puVar14 + lVar15 * 2 + 1;
      do {
        if ((long)puVar14[2] < lVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10065ce44);
          (*pcVar4)();
        }
        lVar15 = puVar10[-1];
        uVar17 = *puVar10;
        _swift_bridgeObjectRetain(uVar17);
        lVar9 = lVar15;
        __sSS5countSivg(lVar15,uVar17);
        if (SBORROW8((long)puVar5,lVar9)) goto LAB_10065ce3c;
        if (0 < (long)puVar5 - lVar9) {
          uVar12 = 0xe100000000000000;
          __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar12);
        }
        lVar16 = lVar16 + -1;
        __sSS6appendyySSF(lVar15,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        puVar10 = puVar10 + -2;
      } while (lVar16 != 0);
    }
  }
  _swift_bridgeObjectRelease(puVar14);
LAB_10065ce18:
  auVar2._8_8_ = puStack_78;
  auVar2._0_8_ = local_80;
  return auVar2;
}

