// rea decompile_all
// name: FUN_10026cd74
// address: 0x10026cd74
// body: available
// range: 0x10026cd74-0x10026d073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026cd74(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long alStack_d0 [5];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long lStack_80;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar5 + -8);
  lVar18 = (long)alStack_d0 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_10026d874();
  puVar12 = (undefined8 *)
            (lVar18 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  FUN_10026d8cc();
  lVar10 = *(long *)(lVar7 + -8);
  lVar17 = (long)puVar12 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    alStack_d0[1] = lVar6;
    alStack_d0[2] = lVar18;
    alStack_d0[3] = lVar14;
    alStack_d0[4] = lVar5;
    do {
      FUN_100082394(param_1,lVar17,FUN_10026d8cc);
      FUN_100082394(lVar17,puVar12,FUN_10026d874);
      puVar8 = puVar12;
      _swift_getEnumCaseMultiPayload(puVar12,lVar6);
      if ((int)puVar8 == 0) {
        uVar11 = *puVar12;
        uVar13 = puVar12[1];
        puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x14));
        puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x18));
        puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x1c));
        (**(code **)(*unaff_x20 + 0xd8))
                  (uVar11,uVar13,*puVar8,puVar8[1],*puVar1,puVar1[1],*puVar2,puVar2[1]);
        FUN_100006cdc(uVar11,uVar13);
      }
      else if ((int)puVar8 == 1) {
        (**(code **)(lVar14 + 0x20))(lVar18,puVar12,lVar5);
        puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x18));
        lVar9 = puVar8[1];
        if (lVar9 == 0) {
LAB_10026cf78:
          puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x14));
          (**(code **)(*unaff_x20 + 0xe0))(lVar18,*puVar8,puVar8[1]);
        }
        else {
          puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x1c));
          if (puVar1[1] == 0) goto LAB_10026cf78;
          puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x14));
          (**(code **)(*unaff_x20 + 0xe8))(lVar18,*puVar2,puVar2[1],*puVar8,lVar9,*puVar1);
        }
        (**(code **)(lVar14 + 8))(lVar18,lVar5);
      }
      else {
        puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x18));
        lStack_80 = puVar8[1];
        if (lStack_80 == 0) {
          local_88 = 0;
          lStack_80 = -0x2000000000000000;
        }
        else {
          local_88 = *puVar8;
        }
        puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x1c));
        lVar5 = puVar8[1];
        if (lVar5 == 0) {
          local_98 = 0;
          local_90 = -0x2000000000000000;
        }
        else {
          local_98 = *puVar8;
          local_90 = lVar5;
        }
        uVar11 = *puVar12;
        uVar3 = puVar12[1];
        puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x14));
        uVar13 = *puVar8;
        uVar4 = puVar8[1];
        pcVar15 = *(code **)(*unaff_x20 + 0xf0);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar5);
        (*pcVar15)(uVar11,uVar3,uVar13,uVar4,local_88,lStack_80,local_98,local_90);
        _swift_bridgeObjectRelease(local_90);
        _swift_bridgeObjectRelease(lStack_80);
        lVar5 = alStack_d0[4];
        lVar14 = alStack_d0[3];
        lVar18 = alStack_d0[2];
        lVar6 = alStack_d0[1];
      }
      FUN_1000d27dc(lVar17,FUN_10026d8cc);
      param_1 = param_1 + lVar10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

