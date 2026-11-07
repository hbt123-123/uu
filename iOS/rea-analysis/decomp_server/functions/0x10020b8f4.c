// rea decompile_all
// name: FUN_10020b8f4
// address: 0x10020b8f4
// body: available
// range: 0x10020b8f4-0x10020bbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10020b8f4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  long alStack_90 [4];
  long *local_70;
  long *plStack_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar8 - extraout_x12;
  plVar3 = (long *)0x0;
  __s10Foundation12CharacterSetVMa();
  lVar11 = plVar3[-1];
  plVar4 = plVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  plVar13 = (long *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_1003db8c4();
  (**(code **)(*plVar4 + 0x108))(&local_70);
  _swift_release(plVar4);
  if (local_70 != (long *)0x0) {
    pcVar9 = *(code **)(*local_70 + 0x118);
    plVar4 = local_70;
    alStack_90[1] = lVar14;
    alStack_90[2] = lVar8;
    alStack_90[3] = lVar2;
    _swift_retain();
    (*pcVar9)();
    plVar5 = local_70;
    plVar7 = param_2;
    _swift_release(local_70);
    if (param_2 == (long *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      plStack_68 = param_2;
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(plVar13);
      FUN_10009ff0c();
      plVar4 = plVar13;
      puVar15 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (plVar13,PTR___sSSN_1009957f8,plVar5);
      plVar7 = plVar3;
      (**(code **)(lVar11 + 8))(plVar13);
      _swift_bridgeObjectRelease(param_2);
    }
    pcVar9 = *(code **)(*local_70 + 0x100);
    plVar5 = local_70;
    _swift_retain();
    (*pcVar9)();
    plVar6 = local_70;
    _swift_release(local_70);
    if (plVar7 == (long *)0x0) {
      puVar16 = (undefined *)0x0;
      if (puVar15 == (undefined *)0x0) goto LAB_10020bac4;
LAB_10020bad4:
      uVar10 = (ulong)plVar4 & 0xffffffffffff;
      uVar1 = uVar10;
      if (((ulong)puVar15 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar15 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(puVar15);
        puVar15 = puVar16;
        if (puVar16 == (undefined *)0x0) goto LAB_10020bb98;
LAB_10020bb00:
        uVar10 = (ulong)plVar5 & 0xffffffffffff;
        plVar4 = plVar5;
      }
      else {
        _swift_bridgeObjectRelease(puVar16);
      }
      if (((ulong)puVar15 & 0x2000000000000000) != 0) {
        uVar10 = (ulong)puVar15 >> 0x38 & 0xf;
      }
      if (uVar10 != 0) {
        __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar12,plVar4,puVar15,1);
        _swift_bridgeObjectRelease(puVar15);
        lVar2 = alStack_90[2];
        __s10Foundation3URLV016standardizedFileB0ACvg(alStack_90[2]);
        lVar11 = alStack_90[3];
        pcVar9 = *(code **)(alStack_90[1] + 8);
        lVar8 = alStack_90[3];
        (*pcVar9)(lVar12,alStack_90[3]);
        __s10Foundation3URLV4pathSSvg();
        _swift_release(local_70);
        (*pcVar9)(lVar2,lVar11);
        goto LAB_10020bba8;
      }
      _swift_bridgeObjectRelease(puVar15);
    }
    else {
      plStack_68 = plVar7;
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(plVar13);
      FUN_10009ff0c();
      plVar5 = plVar13;
      puVar16 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (plVar13,PTR___sSSN_1009957f8,plVar6);
      (**(code **)(lVar11 + 8))(plVar13,plVar3);
      _swift_bridgeObjectRelease(plVar7);
      if (puVar15 != (undefined *)0x0) goto LAB_10020bad4;
LAB_10020bac4:
      puVar15 = puVar16;
      if (puVar16 != (undefined *)0x0) goto LAB_10020bb00;
    }
LAB_10020bb98:
    _swift_release(local_70);
  }
  lVar12 = 0;
  lVar8 = 0;
LAB_10020bba8:
  auVar17._8_8_ = lVar8;
  auVar17._0_8_ = lVar12;
  return auVar17;
}

