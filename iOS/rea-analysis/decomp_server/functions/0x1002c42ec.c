// rea decompile_all
// name: FUN_1002c42ec
// address: 0x1002c42ec
// body: available
// range: 0x1002c42ec-0x1002c46e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002c46d0) */

undefined1  [16]
FUN_1002c42ec(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 uVar11;
  undefined8 *****pppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  ulong uVar18;
  undefined8 ****ppppuVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  undefined8 ***pppuVar22;
  undefined1 auVar23 [16];
  undefined8 ***local_b0 [5];
  undefined8 ****local_88;
  undefined8 **ppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pppppuVar12 = *(undefined8 ******)(param_1 + 0x10);
  pppppuVar4 = (undefined8 *****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (pppppuVar12 != (undefined8 *****)0x0) {
    pppppuVar4 = pppppuVar12;
    FUN_10034ccd0(pppppuVar12,0);
    pppppuVar5 = &local_88;
    FUN_100235e80(pppppuVar5,pppppuVar4 + 4,pppppuVar12,param_1);
    ppuVar2 = ppuStack_80;
    _swift_bridgeObjectRetain(param_1);
    FUN_10003f638(local_88,ppuVar2,local_78,uStack_70,local_68);
    if (pppppuVar5 != pppppuVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4384);
      (*pcVar3)();
    }
  }
  local_88 = pppppuVar4;
  FUN_1002c3b6c(&local_88);
  ppppuVar13 = local_88;
  ppppuVar19 = (undefined8 ****)local_88[2];
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar19 != (undefined8 ****)0x0) {
    ppppuVar14 = (undefined8 ****)0x0;
    pppppuVar4 = (undefined8 *****)(local_88 + 5);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      if (ppppuVar13[2] <= ppppuVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46a8);
        (*pcVar3)();
      }
      ppppuVar21 = *pppppuVar4;
      if (*(long *)(param_1 + 0x10) == 0) {
        _swift_bridgeObjectRetain(ppppuVar21);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46c4);
        (*pcVar3)();
      }
      ppppuVar17 = pppppuVar4[-1];
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRetain(ppppuVar21);
      ppppuVar6 = ppppuVar17;
      ppppuVar10 = ppppuVar21;
      FUN_1001a2c70(ppppuVar17);
      if (((ulong)ppppuVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46d0);
        (*pcVar3)();
      }
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + (long)ppppuVar6 * 0x20,local_b0);
      _swift_bridgeObjectRelease(param_1);
      FUN_10007f3d4(local_b0,&local_88);
      FUN_1002c46e4(ppppuVar17,ppppuVar21,&local_88,param_2,param_3,param_4,param_5 & 1);
      _swift_bridgeObjectRelease(ppppuVar21);
      pppuVar22 = ppppuVar17[2];
      lVar16 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar16,(long)pppuVar22)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46ac);
        (*pcVar3)();
      }
      puVar7 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar7 == 0) || ((long)(*(ulong *)(puVar8 + 0x18) >> 1) < lVar16 + (long)pppuVar22))
      {
        FUN_100296afc();
        puVar8 = puVar7;
        if (ppppuVar17[2] == (undefined8 ***)0x0) goto LAB_1002c43c0;
LAB_1002c44c4:
        lVar16 = *(long *)(puVar7 + 0x10);
        if ((long)((*(ulong *)(puVar7 + 0x18) >> 1) - lVar16) < (long)pppuVar22) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46b4);
          (*pcVar3)();
        }
        puVar8 = &DAT_100a833c8;
        FUN_100004bb4(&DAT_100a833c8,&DAT_1008178a0);
        _swift_arrayInitWithCopy(puVar7 + lVar16 * 0x20 + 0x20,ppppuVar17 + 4,pppuVar22,puVar8);
        _swift_bridgeObjectRelease(ppppuVar17);
        if (pppuVar22 != (undefined8 ***)0x0) {
          if (SCARRY8(*(long *)(puVar7 + 0x10),(long)pppuVar22)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46b8);
            (*pcVar3)();
          }
          *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + (long)pppuVar22;
        }
      }
      else {
        puVar7 = puVar8;
        if (ppppuVar17[2] != (undefined8 ***)0x0) goto LAB_1002c44c4;
LAB_1002c43c0:
        _swift_bridgeObjectRelease(ppppuVar17);
        puVar7 = puVar8;
        if (pppuVar22 != (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46b0);
          (*pcVar3)();
        }
      }
      ppppuVar14 = (undefined8 ****)((long)ppppuVar14 + 1);
      FUN_10003f094(&local_88);
      pppppuVar4 = pppppuVar4 + 2;
      puVar8 = puVar7;
    } while (ppppuVar19 != ppppuVar14);
  }
  _swift_release(ppppuVar13);
  uVar15 = *(ulong *)(puVar7 + 0x10);
  if (uVar15 == 0) {
    _swift_bridgeObjectRelease(puVar7);
    ppppuVar13 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_b0[0] = (undefined8 ***)PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1002c0aec(0,uVar15,0);
    uVar18 = 0;
    puVar20 = (undefined8 *)(puVar7 + 0x38);
    do {
      pppuVar22 = local_b0[0];
      if (*(ulong *)(puVar7 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c46a4);
        (*pcVar3)();
      }
      local_88 = (undefined8 ****)puVar20[-3];
      pppuVar1 = (undefined8 ***)puVar20[-2];
      uVar9 = puVar20[-1];
      uVar11 = *puVar20;
      ppuStack_80 = pppuVar1;
      _swift_bridgeObjectRetain_n(pppuVar1,2);
      _swift_bridgeObjectRetain(uVar11);
      __sSS6appendyySSF(0x3d,0xe100000000000000);
      __sSS6appendyySSF(uVar9,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      _swift_bridgeObjectRelease(pppuVar1);
      ppuVar2 = ppuStack_80;
      ppppuVar19 = local_88;
      pppuVar1 = (undefined8 ***)pppuVar22[2];
      local_b0[0] = pppuVar22;
      if ((undefined8 ***)((ulong)pppuVar22[3] >> 1) <= pppuVar1) {
        FUN_1002c0aec((undefined8 ***)0x1 < pppuVar22[3],(undefined8 ***)((long)pppuVar1 + 1U),1);
      }
      ppppuVar13 = (undefined8 ****)local_b0[0];
      uVar18 = uVar18 + 1;
      local_b0[0][2] = (undefined8 ***)((long)pppuVar1 + 1U);
      local_b0[0][(long)pppuVar1 * 2 + 4] = ppppuVar19;
      local_b0[0][(long)pppuVar1 * 2 + 5] = ppuVar2;
      puVar20 = puVar20 + 4;
    } while (uVar15 != uVar18);
    _swift_bridgeObjectRelease(puVar7);
  }
  puVar7 = &DAT_100a82770;
  local_88 = ppppuVar13;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar8 = puVar7;
  FUN_100280754();
  uVar9 = 0x26;
  uVar11 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,puVar7,puVar8);
  _swift_bridgeObjectRelease(ppppuVar13);
  auVar23._8_8_ = uVar11;
  auVar23._0_8_ = uVar9;
  return auVar23;
}

