// rea decompile_all
// name: FUN_10039cc80
// address: 0x10039cc80
// body: available
// range: 0x10039cc80-0x10039cec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010039ce34) */
/* WARNING: Removing unreachable block (ram,0x00010039cdec) */
/* WARNING: Removing unreachable block (ram,0x00010039ce50) */

undefined1  [16]
FUN_10039cc80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6,undefined8 param_7,code *param_8)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  code *local_c0 [2];
  long local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  local_c0[0] = param_8;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_88;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_1000efc08(puVar2);
  (**(code **)(*(long *)(param_6 + -8) + 0x10))();
  local_b0 = param_1;
  uStack_a8 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar7);
  FUN_10009ff0c();
  uVar5 = 1;
  lVar3 = lVar7;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar7,1,PTR___sSSN_1009957f8,puVar2);
  (**(code **)(lVar6 + 8))(lVar7,lVar1);
  if (uVar5 >> 0x3c < 0xf) {
    param_1 = lVar3;
    FUN_100665cbc(lVar3,uVar5);
    FUN_100006cc8(lVar3,uVar5);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_10039c910(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_1000b142c(auStack_88,&local_b0);
  uVar4 = 0;
  FUN_10062e36c(0);
  _swift_allocObject();
  FUN_10062c4d8(param_1,&local_b0,2,uVar4);
  _swift_retain();
  FUN_100008184(param_4,param_5);
  FUN_1001227a8(param_4,param_5);
  lVar6 = param_4;
  (*local_c0[0])();
  _swift_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  lVar3 = lVar6 + 0x20;
  lVar1 = lVar3 + *(long *)(lVar6 + 0x10);
  FUN_1001f8534(lVar3,lVar1);
  _swift_bridgeObjectRelease(lVar6);
  _swift_release(param_1);
  FUN_10003f094(auStack_88);
  auVar8._8_8_ = lVar1;
  auVar8._0_8_ = lVar3;
  return auVar8;
}

