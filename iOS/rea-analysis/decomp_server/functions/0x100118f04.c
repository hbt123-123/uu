// rea decompile_all
// name: FUN_100118f04
// address: 0x100118f04
// body: available
// range: 0x100118f04-0x10011937f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100118f04(ulong param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  byte bVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  uVar7 = 0;
  uVar13 = param_1 & 0xffff;
  uVar8 = (CONCAT44((int)param_1,(int)param_1) & 0xffff0000ffff) >> 0x20;
  bVar12 = NEON_umaxv(CONCAT17(-(uRam0000000100a74428 == uVar8),
                               CONCAT16(-(_DAT_100a74420 == uVar13),
                                        CONCAT15(-(uRam0000000100a74418 == uVar8),
                                                 CONCAT14(-(_DAT_100a74410 == uVar13),
                                                          CONCAT13(-(uRam0000000100a74408 == uVar8),
                                                                   CONCAT12(-(_DAT_100a74400 ==
                                                                             uVar13),CONCAT11(-(
                                                  uRam0000000100a743f8 == uVar8),
                                                  -(_DAT_100a743f0 == uVar13)))))))),1);
  uVar8 = 1;
  if ((((bVar12 & 1) == 0) && (DAT_100a74430 != (param_1 & 0xffff))) &&
     (DAT_100a74438 != (param_1 & 0xffff))) {
    FUN_1001175b0();
    uVar8 = param_1;
    FUN_1003bdcd0();
    _swift_release(param_1);
    lVar10 = *(long *)(uVar8 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar10 != 0) {
      puVar11 = (ushort *)(uVar8 + 0x20);
      do {
        uVar1 = *puVar11;
        if (uVar1 < 0x3c) {
          if (0x38 < uVar1) {
            if (uVar1 == 0x39) {
              puVar2 = puVar3;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar4 = puVar3;
              if (((ulong)puVar2 & 1) == 0) {
                puVar4 = (undefined *)0x0;
                FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
              }
              uVar7 = *(ulong *)(puVar4 + 0x10);
              lVar9 = uVar7 + 1;
              puVar3 = puVar4;
              if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
                puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
                FUN_10003536c(puVar3,lVar9,1,puVar4);
              }
              uVar5 = 0x10000;
            }
            else {
              if (uVar1 != 0x3a) {
                if (uVar1 == 0x3b) goto LAB_100119094;
                goto LAB_10011912c;
              }
LAB_10011904c:
              puVar2 = puVar3;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar4 = puVar3;
              if (((ulong)puVar2 & 1) == 0) {
                puVar4 = (undefined *)0x0;
                FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
              }
              uVar7 = *(ulong *)(puVar4 + 0x10);
              lVar9 = uVar7 + 1;
              if (uVar7 < *(ulong *)(puVar4 + 0x18) >> 1) {
                uVar5 = 0x80000;
                puVar3 = puVar4;
              }
              else {
                puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
                FUN_10003536c(puVar3,lVar9,1,puVar4);
                uVar5 = 0x80000;
              }
            }
            goto LAB_100119120;
          }
          if (uVar1 == 0x37) {
            puVar2 = puVar3;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar3;
            if (((ulong)puVar2 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
            }
            uVar7 = *(ulong *)(puVar4 + 0x10);
            lVar9 = uVar7 + 1;
            if (uVar7 < *(ulong *)(puVar4 + 0x18) >> 1) {
              uVar5 = 0x100000;
              puVar3 = puVar4;
            }
            else {
              puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10003536c(puVar3,lVar9,1,puVar4);
              uVar5 = 0x100000;
            }
            goto LAB_100119120;
          }
          if (uVar1 == 0x38) goto LAB_100119070;
        }
        else {
          if (uVar1 < 0x3e) {
            if (uVar1 != 0x3c) {
              if (uVar1 == 0x3d) goto LAB_10011904c;
              goto LAB_10011912c;
            }
LAB_100119070:
            puVar2 = puVar3;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar3;
            if (((ulong)puVar2 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
            }
            uVar7 = *(ulong *)(puVar4 + 0x10);
            lVar9 = uVar7 + 1;
            if (uVar7 < *(ulong *)(puVar4 + 0x18) >> 1) {
              uVar5 = 0x20000;
              puVar3 = puVar4;
            }
            else {
              puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10003536c(puVar3,lVar9,1,puVar4);
              uVar5 = 0x20000;
            }
          }
          else if (uVar1 == 0x3e) {
LAB_100119094:
            puVar2 = puVar3;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar3;
            if (((ulong)puVar2 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
            }
            uVar7 = *(ulong *)(puVar4 + 0x10);
            lVar9 = uVar7 + 1;
            if (uVar7 < *(ulong *)(puVar4 + 0x18) >> 1) {
              uVar5 = 0x40000;
              puVar3 = puVar4;
            }
            else {
              puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10003536c(puVar3,lVar9,1,puVar4);
              uVar5 = 0x40000;
            }
          }
          else if (uVar1 == 0x3f) {
            puVar2 = puVar3;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar3;
            if (((ulong)puVar2 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
            }
            uVar7 = *(ulong *)(puVar4 + 0x10);
            lVar9 = uVar7 + 1;
            puVar3 = puVar4;
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
              puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10003536c(puVar3,lVar9,1,puVar4);
            }
            uVar5 = 0x800000;
          }
          else {
            if (uVar1 != 0x72) goto LAB_10011912c;
            puVar2 = puVar3;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar3;
            if (((ulong)puVar2 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10003536c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
            }
            uVar7 = *(ulong *)(puVar4 + 0x10);
            lVar9 = uVar7 + 1;
            if (uVar7 < *(ulong *)(puVar4 + 0x18) >> 1) {
              uVar5 = 0x400000;
              puVar3 = puVar4;
            }
            else {
              puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10003536c(puVar3,lVar9,1,puVar4);
              uVar5 = 0x400000;
            }
          }
LAB_100119120:
          *(long *)(puVar3 + 0x10) = lVar9;
          *(undefined8 *)(puVar3 + uVar7 * 8 + 0x20) = uVar5;
        }
LAB_10011912c:
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 1;
      } while (lVar10 != 0);
    }
    _swift_bridgeObjectRelease(uVar8);
    lVar10 = *(long *)(puVar3 + 0x10);
    uVar8 = (ulong)(lVar10 == 0);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(ulong *)(puVar3 + 0x20);
      lVar10 = lVar10 + -1;
      if (lVar10 != 0) {
        puVar6 = (ulong *)(puVar3 + 0x28);
        do {
          uVar13 = 0;
          if ((*puVar6 & (uVar7 ^ 0xffffffffffffffff)) != 0) {
            uVar13 = *puVar6;
          }
          uVar7 = uVar13 | uVar7;
          lVar10 = lVar10 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar10 != 0);
      }
    }
    _swift_bridgeObjectRelease(puVar3);
  }
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uVar7;
  return auVar14;
}

