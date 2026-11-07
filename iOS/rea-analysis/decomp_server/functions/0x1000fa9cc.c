// rea decompile_all
// name: FUN_1000fa9cc
// address: 0x1000fa9cc
// body: available
// range: 0x1000fa9cc-0x1000fad37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1000fa9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *puVar10;
  undefined1 auStack_140 [16];
  undefined8 auStack_130 [2];
  int aiStack_120 [2];
  undefined8 uStack_118;
  long alStack_110 [4];
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  ulong local_68;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_f0 + lVar3;
  uVar4 = 0;
  FUN_100401b14();
  local_c8 = param_4;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_1;
  uStack_98 = param_2;
  FUN_1003fb48c(FUN_1000fcc88,auStack_c0,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002e,
                0x8000000100889e40,0x9b,0);
  FUN_1003ef0ec(0);
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  IVar5 = NSProcessInfo::environment(IVar5,"environment");
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  FUN_1003ee958(&local_88,param_1,param_2,IVar5);
  _swift_bridgeObjectRelease(IVar5);
  if ((local_68 >> 0x3d & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar4 = local_c8;
    *(undefined8 *)((long)alStack_110 + lVar3) = param_3;
    *(undefined8 *)((long)alStack_110 + lVar3 + 8) = uVar4;
    *(undefined8 *)((long)alStack_110 + lVar3 + 0x10) = local_88;
    FUN_1003fb4ec(FUN_1000fcc94,(long)aiStack_120 + lVar3,0xd0000000000000a2,0x80000001008898a0,
                  0xd00000000000002e,0x8000000100889e40,0xa7,0);
    FUN_1000fcca0(&local_88);
  }
  else {
    local_d8 = param_3;
    local_d0 = uVar4;
    if ((int)local_88 == 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      uVar4 = local_c8;
      *(undefined8 *)((long)alStack_110 + lVar3 + 0x10) = local_d8;
      *(undefined8 *)((long)alStack_110 + lVar3 + 0x18) = uVar4;
      FUN_1003fb48c(FUN_1000fcce8,(long)alStack_110 + lVar3,0xd0000000000000a2,0x80000001008898a0,
                    0xd00000000000002e,0x8000000100889e40,0x9f,0);
      FUN_100006cdc(local_70,local_68 & 0xdfffffffffffffff);
      FUN_100006cdc(local_80,lStack_78);
      return 1;
    }
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar10);
    uVar6 = local_80;
    lVar8 = lStack_78;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(local_80,lStack_78,puVar10);
    local_e8 = lStack_78;
    uStack_e0 = local_80;
    uVar4 = 0;
    if (lVar8 != 0) {
      uVar4 = uVar6;
    }
    lVar1 = -0x2000000000000000;
    if (lVar8 != 0) {
      lVar1 = lVar8;
    }
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar10);
    uVar9 = local_68 & 0xdfffffffffffffff;
    uVar7 = local_70;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(local_70,uVar9,puVar10);
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar7;
    }
    uVar2 = 0xe000000000000000;
    if (uVar9 != 0) {
      uVar2 = uVar9;
    }
    (*(code *)PTR____chkstk_darwin_100995498)(uVar6);
    uVar6 = local_c8;
    *(undefined8 *)((long)auStack_130 + lVar3) = local_d8;
    *(undefined8 *)((long)auStack_130 + lVar3 + 8) = uVar6;
    *(int *)((long)aiStack_120 + lVar3) = (int)local_88;
    *(undefined8 *)((long)&uStack_118 + lVar3) = uVar4;
    *(long *)((long)alStack_110 + lVar3) = lVar1;
    *(undefined8 *)((long)alStack_110 + lVar3 + 8) = extraout_x8_00;
    *(ulong *)((long)alStack_110 + lVar3 + 0x10) = uVar2;
    FUN_1003fb4ec(FUN_1000fccd4,auStack_140 + lVar3,0xd0000000000000a2,0x80000001008898a0,
                  0xd00000000000002e,0x8000000100889e40,0xa4,0);
    FUN_100006cdc(local_70,local_68 & 0xdfffffffffffffff);
    FUN_100006cdc(uStack_e0,local_e8);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(lVar1);
  }
  return 0;
}

