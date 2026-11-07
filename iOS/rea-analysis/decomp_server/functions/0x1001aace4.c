// rea decompile_all
// name: FUN_1001aace4
// address: 0x1001aace4
// body: available
// range: 0x1001aace4-0x1001ab1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001aade8) */

undefined8 **** FUN_1001aace4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  undefined8 ***pppuVar10;
  undefined8 *puVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 **ppuVar15;
  long extraout_x8;
  ulong *puVar16;
  undefined8 ****ppppuVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 **ppuVar22;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 ***local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar20 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  puVar19 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 6;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  *(undefined1 **)(puVar7 + 0x20) = &DAT_d000000000000033;
  *(undefined8 *)(puVar7 + 0x28) = 0x800000010089a7b0;
  *(undefined8 *)(puVar7 + 0x30) = 0x6e69796c6e6f2d;
  *(undefined8 *)(puVar7 + 0x38) = 0xe700000000000000;
  *(undefined8 *)(puVar7 + 0x40) = param_1;
  *(undefined8 *)(puVar7 + 0x48) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar8 = (undefined8 ***)0x6e69622f7273752f;
  ppuVar15 = (undefined8 **)0xef646e6966646d2f;
  uVar18 = 0;
  FUN_1001aa760(0x6e69622f7273752f,0xef646e6966646d2f,puVar7);
  local_a8 = 0;
  _swift_bridgeObjectRelease(puVar7);
  local_a0 = pppuVar8;
  puStack_98 = ppuVar15;
  __s10Foundation12CharacterSetV8newlinesACvgZ(puVar19);
  FUN_10009ff0c();
  puVar9 = puVar19;
  __sSy10FoundationE10components11separatedBySaySSGAA12CharacterSetV_tF
            (puVar19,PTR___sSSN_1009957f8,puVar7);
  (**(code **)(lVar20 + 8))(puVar19,lVar6);
  _swift_bridgeObjectRelease(ppuVar15);
  uVar21 = *(ulong *)(puVar9 + 0x10);
  pppuVar8 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100995ea0;
  do {
    puVar16 = (ulong *)(puVar9 + uVar18 * 0x10 + 0x28);
    do {
      if (uVar21 == uVar18) {
        _swift_bridgeObjectRelease(puVar9);
        pppuVar10 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_1000cd6bc();
        puVar4 = PTR___sSSN_1009957f8;
        ppuVar15 = pppuVar8[2];
        if (ppuVar15 == (undefined8 **)0x0) goto LAB_1001ab0d0;
        ppuVar22 = (undefined8 **)0x0;
        goto LAB_1001aafec;
      }
      if (*(ulong *)(puVar9 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001ab19c);
        (*pcVar5)();
      }
      uVar18 = uVar18 + 1;
      ppuVar15 = (undefined8 **)puVar16[-1];
      ppuVar22 = (undefined8 **)*puVar16;
      puVar16 = puVar16 + 2;
      uVar1 = (ulong)ppuVar15 & 0xffffffffffff;
      if (((ulong)ppuVar22 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)ppuVar22 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
    _swift_bridgeObjectRetain(ppuVar22);
    pppuVar10 = pppuVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    local_a0 = pppuVar8;
    if (((ulong)pppuVar10 & 1) == 0) {
      FUN_10006fae0(0,(long)pppuVar8[2] + 1,1);
    }
    ppuVar2 = local_a0[2];
    if ((undefined8 **)((ulong)local_a0[3] >> 1) <= ppuVar2) {
      FUN_10006fae0((undefined8 **)0x1 < local_a0[3],(undefined8 **)((long)ppuVar2 + 1U),1);
    }
    local_a0[2] = (undefined8 **)((long)ppuVar2 + 1U);
    local_a0[(long)ppuVar2 * 2 + 4] = ppuVar15;
    local_a0[(long)ppuVar2 * 2 + 5] = ppuVar22;
    pppuVar8 = local_a0;
  } while( true );
LAB_1001aafec:
  if (pppuVar8[2] <= ppuVar22) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1001ab1a0);
    (*pcVar5)();
  }
  local_a0 = (undefined8 ***)pppuVar8[(long)ppuVar22 * 2 + 4];
  puStack_98 = (pppuVar8 + (long)ppuVar22 * 2 + 4)[1];
  local_78 = 0x7070612e;
  uStack_70 = 0xe400000000000000;
  puVar11 = &local_78;
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (puVar11,puVar4,puVar4,puVar7,puVar7);
  lVar6 = puVar11[2];
  if (lVar6 != 0) {
    puVar16 = puVar11 + 5;
    do {
      pppuVar3 = (undefined8 ***)puVar16[-1];
      ppuVar2 = (undefined8 **)*puVar16;
      uVar18 = (ulong)pppuVar3 & 0xffffffffffff;
      if (((ulong)ppuVar2 & 0x2000000000000000) != 0) {
        uVar18 = (ulong)ppuVar2 >> 0x38 & 0xf;
      }
      if (uVar18 != 0) {
        _swift_bridgeObjectRetain(ppuVar2);
        _swift_bridgeObjectRelease(puVar11);
        local_a0 = pppuVar3;
        puStack_98 = ppuVar2;
        __sSS6appendyySSF(0x7070612e,0xe400000000000000);
        puVar11 = puStack_98;
        pppuVar3 = local_a0;
        _swift_bridgeObjectRetain(puStack_98);
        pppuVar12 = pppuVar10;
        _swift_isUniquelyReferenced_nonNull_native(pppuVar10);
        local_a0 = pppuVar10;
        FUN_100062448(pppuVar3,puVar11,pppuVar3,puVar11,pppuVar12);
        _swift_bridgeObjectRelease(puVar11);
        pppuVar10 = local_a0;
        goto LAB_1001aafe0;
      }
      puVar16 = puVar16 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  _swift_bridgeObjectRelease();
LAB_1001aafe0:
  ppuVar22 = (undefined8 **)((long)ppuVar22 + 1);
  if (ppuVar22 == ppuVar15) {
LAB_1001ab0d0:
    _swift_release(pppuVar8);
    ppppuVar17 = (undefined8 ****)pppuVar10[2];
    if (ppppuVar17 == (undefined8 ****)0x0) {
      _swift_bridgeObjectRetain(pppuVar10);
      ppppuVar13 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      ppppuVar13 = ppppuVar17;
      FUN_10006d89c(ppppuVar17,0);
      ppppuVar14 = &local_a0;
      FUN_10007466c(ppppuVar14,ppppuVar13 + 4,ppppuVar17,pppuVar10);
      puVar11 = puStack_98;
      pppuVar8 = local_a0;
      _swift_bridgeObjectRetain_n(pppuVar10,2);
      FUN_10003f638(pppuVar8,puVar11,local_90,uStack_88,local_80);
      if (ppppuVar14 != ppppuVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001ab144);
        (*pcVar5)();
      }
    }
    lVar6 = local_a8;
    local_a0 = ppppuVar13;
    FUN_1001a398c(&local_a0);
    if (lVar6 != 0) {
      _swift_errorRelease(lVar6);
      _swift_release(local_a0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001ab1b4);
      (*pcVar5)();
    }
    _swift_bridgeObjectRelease_n(pppuVar10,2);
    return (undefined8 ****)local_a0;
  }
  goto LAB_1001aafec;
}

