// rea decompile_all
// name: FUN_10039c718
// address: 0x10039c718
// body: available
// range: 0x10039c718-0x10039c88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10039c718(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 auStack_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong uStack_68;
  
  lVar2 = 0;
  local_80 = param_6;
  uStack_78 = param_7;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_80 + lVar1;
  local_70 = param_3;
  uStack_68 = param_4;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
  FUN_10009ff0c();
  uVar5 = 1;
  lVar4 = lVar8;
  puVar6 = PTR___sSSN_1009957f8;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar8,1,PTR___sSSN_1009957f8,lVar3);
  uVar7 = (uint)lVar3;
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  if (uVar5 >> 0x3c < 0xf) {
    param_3 = lVar4;
    FUN_100665cbc(lVar4,uVar5);
    FUN_100006cc8(lVar4,uVar5);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    uVar5 = param_4;
    FUN_10039c910(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  FUN_1006357a4(param_3);
  *(undefined8 *)((long)auStack_90 + lVar1) = param_8;
  FUN_10039ca04(param_1,param_2,param_3,uVar5,puVar6,uVar7 & 1,local_80,uStack_78);
  _swift_bridgeObjectRelease(uVar5);
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  return auVar10;
}

