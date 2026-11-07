// rea decompile_all
// name: FUN_1000aa5fc
// address: 0x1000aa5fc
// body: available
// range: 0x1000aa5fc-0x1000aa8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000aa894) */

undefined * FUN_1000aa5fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_b0 [16];
  undefined8 ****local_a0;
  undefined8 ****local_90;
  undefined8 ****local_88;
  byte local_80;
  undefined8 ****local_78;
  ulong uStack_70;
  
  _swift_bridgeObjectRetain(param_2);
  lVar7 = 0x7fffffffffffffff;
  FUN_1000a9a4c(0x7fffffffffffffff,1,param_1,param_2);
  if (*(long *)(lVar7 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar7 + 0x20);
    uVar4 = *(undefined8 *)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x30);
    uVar5 = *(undefined8 *)(lVar7 + 0x38);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRelease(lVar7);
    local_78 = (undefined8 *****)0x2e;
    uStack_70 = 0xe100000000000000;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = &local_78;
    lVar7 = 0x7fffffffffffffff;
    FUN_10000bd98(0x7fffffffffffffff,1,FUN_10000d558,auStack_b0,uVar1,uVar4,uVar2,uVar5);
    uVar17 = *(ulong *)(lVar7 + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar17 != 0) {
      uVar14 = 0;
LAB_1000aa6e4:
      puVar15 = (ulong *)(lVar7 + 0x38 + uVar14 * 0x20);
      uVar16 = uVar14;
      do {
        if (*(ulong *)(lVar7 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000aa894);
          (*pcVar6)();
        }
        pppppuVar9 = (undefined8 *****)puVar15[-3];
        pppppuVar8 = (undefined8 *****)puVar15[-2];
        if (((ulong)pppppuVar8 ^ (ulong)pppppuVar9) >> 0xe != 0) {
          pppppuVar10 = (undefined8 *****)puVar15[-1];
          uVar14 = *puVar15;
          if ((uVar14 >> 0x3c & 1) == 0) {
            if ((uVar14 >> 0x3d & 1) == 0) {
              if (((ulong)pppppuVar10 >> 0x3c & 1) == 0) {
                local_90 = pppppuVar9;
                local_88 = pppppuVar8;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar10,uVar14);
                pppppuVar8 = pppppuVar10;
                pppppuVar9 = (undefined8 *****)local_90;
              }
              else {
                pppppuVar8 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
              }
            }
            else {
              uStack_70 = uVar14 & 0xffffffffffffff;
              pppppuVar8 = &local_78;
              local_78 = pppppuVar10;
            }
            FUN_1000aa194();
            local_80 = (byte)pppppuVar9 & 1;
          }
          else {
            local_90 = pppppuVar10;
            local_88 = pppppuVar8;
            _swift_bridgeObjectRetain(uVar14);
            pppppuVar8 = (undefined8 *****)local_88;
            FUN_10000c1cc(pppppuVar9,local_88,local_90,uVar14,10);
            local_88 = (undefined8 ****)CONCAT44(local_88._4_4_,(int)pppppuVar8);
            _swift_bridgeObjectRelease(uVar14);
            pppppuVar8 = pppppuVar9;
            pppppuVar9 = (undefined8 *****)local_88;
          }
          if (((ulong)pppppuVar9 & 1) == 0) goto LAB_1000aa7c8;
        }
        uVar16 = uVar16 + 1;
        puVar15 = puVar15 + 4;
        if (uVar17 == uVar16) break;
      } while( true );
    }
LAB_1000aa864:
    _swift_bridgeObjectRelease(lVar7);
  }
  return puVar13;
LAB_1000aa7c8:
  puVar11 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar12 = puVar13;
  if (((ulong)puVar11 & 1) == 0) {
    puVar12 = (undefined *)0x0;
    FUN_100034a14(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
  }
  uVar3 = *(ulong *)(puVar12 + 0x10);
  puVar13 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_100034a14(puVar13,uVar3 + 1,1,puVar12);
  }
  uVar14 = uVar16 + 1;
  *(ulong *)(puVar13 + 0x10) = uVar3 + 1;
  *(undefined8 ******)(puVar13 + uVar3 * 8 + 0x20) = pppppuVar8;
  if (uVar17 - 1 == uVar16) goto LAB_1000aa864;
  goto LAB_1000aa6e4;
}

