// rea decompile_all
// name: FUN_10067b014
// address: 0x10067b014
// body: available
// range: 0x10067b014-0x10067b1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010067b164) */

undefined1  [16] FUN_10067b014(undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_90 [48];
  undefined1 *local_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar5 = auStack_90 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar1;
  local_60 = param_1;
  uStack_58 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
  FUN_100665380();
  uVar7 = 1;
  puVar2 = puVar5;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar5,1,PTR___sSSN_1009957f8,lVar3);
  (**(code **)(lVar8 + 8))(puVar5,lVar1);
  if (uVar7 >> 0x3c < 0xf) {
    param_1 = puVar2;
    FUN_100665cbc(puVar2,uVar7);
    FUN_100006cc8(puVar2,uVar7);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006653c0(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  lVar3 = 0;
  FUN_1006730b4();
  _swift_initStackObject();
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  puVar4 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  _swift_initStaticObject();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  puVar5 = param_1;
  _swift_bridgeObjectRetain(param_1);
  puVar2 = param_1 + 0x20;
  FUN_1006727b8();
  _swift_release(lVar3);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_1);
  puVar6 = puVar5;
  FUN_10062fda8(puVar5);
  _swift_bridgeObjectRelease(puVar5);
  auVar9._8_8_ = puVar2;
  auVar9._0_8_ = puVar6;
  return auVar9;
}

