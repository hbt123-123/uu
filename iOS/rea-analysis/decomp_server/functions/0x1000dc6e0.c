// rea decompile_all
// name: FUN_1000dc6e0
// address: 0x1000dc6e0
// body: available
// range: 0x1000dc6e0-0x1000dcaeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000dc6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  ID IVar6;
  code **ppcVar7;
  code *pcVar8;
  uint uVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x12;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_110 [16];
  long alStack_100 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  code *local_d8;
  long local_d0;
  long local_c8;
  ID local_c0;
  long local_b8;
  code *local_b0;
  long local_a8;
  
  uVar9 = (uint)param_3;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar4 + -8);
  lVar13 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar15 - extraout_x12;
  if ((uVar9 & 0xff) == 1) {
    __s10Foundation3URLV4pathSSvg();
    FUN_10006d958(&local_b0,lVar13,param_3);
    _swift_bridgeObjectRelease(local_a8);
                    /* WARNING: Could not recover jumptable at 0x0001000dc7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar4);
    return;
  }
  local_f0 = param_1;
  local_b8 = lVar4;
  __s10Foundation3URLV25deletingLastPathComponentACyF(lVar14);
  local_e8 = param_4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar14 + -0x20;
  *(long *)(lVar14 + -0x10) = lVar14;
  pcVar2 = FUN_1000e36b8;
  FUN_1000d7cdc();
  pcVar5 = pcVar2;
  FUN_100074e04();
  _swift_bridgeObjectRelease();
  __s10Foundation3URLV17lastPathComponentSSvg();
  local_c0 = *(ID *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain();
  lVar13 = 1;
  local_e0 = lVar16;
  local_d8 = pcVar2;
  local_d0 = lVar4;
  local_c8 = lVar14;
  do {
    lVar14 = local_e0;
    _swift_bridgeObjectRetain(lVar4);
    lVar10 = lVar4;
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar15,pcVar2,lVar4);
    lVar16 = lVar4;
    _swift_bridgeObjectRelease(lVar4);
    __s10Foundation3URLV4pathSSvg();
    pcVar17 = *(code **)(lVar14 + 8);
    (*pcVar17)(lVar15,local_b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar16,lVar10);
    _swift_bridgeObjectRelease(lVar10);
    IVar6 = _objc_msgSend(local_c0,"fileExistsAtPath:",lVar16);
    if ((IVar6 & 1) == 0) {
      local_b0 = pcVar2;
      local_a8 = lVar4;
      _swift_bridgeObjectRetain(lVar4);
      __sSS6appendyySSF(0x616f6c6e776f642e,0xec000000676e6964);
      lVar14 = local_a8;
      lVar16 = local_a8;
      __s10Foundation3URLV22appendingPathComponentyACSSF(lVar15,local_b0,local_a8);
      _swift_bridgeObjectRelease(lVar14);
      __s10Foundation3URLV4pathSSvg();
      (*pcVar17)(lVar15,local_b8);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,lVar16);
      _swift_bridgeObjectRelease(lVar16);
      IVar6 = _objc_msgSend(local_c0,"fileExistsAtPath:",lVar14);
      if ((int)IVar6 == 0) {
        if (*(long *)(pcVar5 + 0x10) == 0) {
LAB_1000dca5c:
          _swift_bridgeObjectRelease(local_d0);
          _swift_bridgeObjectRelease(pcVar5);
          lVar13 = local_c8;
          lVar14 = lVar4;
          __s10Foundation3URLV22appendingPathComponentyACSSF(local_f0,pcVar2,lVar4);
          _swift_bridgeObjectRelease(lVar4);
          __s10Foundation3URLV4pathSSvg();
          FUN_10006d958(&local_b0,lVar4,lVar14);
          _swift_bridgeObjectRelease(local_a8);
          (*pcVar17)(lVar13,local_b8);
          return;
        }
        __ss6HasherV5_seedABSi_tcfC(&local_b0,*(undefined8 *)(pcVar5 + 0x28));
        ppcVar7 = &local_b0;
        __sSS4hash4intoys6HasherVz_tF(ppcVar7,pcVar2,lVar4);
        __ss6HasherV9_finalizeSiyF();
        uVar11 = -1L << ((ulong)(byte)pcVar5[0x20] & 0x3f);
        uVar12 = (ulong)ppcVar7 & (uVar11 ^ 0xffffffffffffffff);
        if ((*(ulong *)(pcVar5 + (uVar12 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar12 & 0x3f) & 1)
            == 0) goto LAB_1000dca5c;
        while( true ) {
          puVar1 = (undefined8 *)(*(long *)(pcVar5 + 0x30) + uVar12 * 0x10);
          pcVar8 = (code *)*puVar1;
          lVar14 = puVar1[1];
          if ((pcVar8 == pcVar2 && lVar14 == lVar4) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (pcVar8,lVar14,pcVar2,lVar4,0), ((ulong)pcVar8 & 1) != 0)) break;
          uVar12 = uVar12 + 1 & ~uVar11;
          if ((*(ulong *)(pcVar5 + (uVar12 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar12 & 0x3f) & 1)
              == 0) goto LAB_1000dca5c;
        }
      }
    }
    pcVar2 = local_d8;
    lVar14 = local_d0;
    FUN_1000d7848(local_d8,local_d0,lVar13);
    _swift_bridgeObjectRelease(lVar4);
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    lVar4 = lVar14;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000dcaec);
      (*pcVar2)();
    }
  } while( true );
}

