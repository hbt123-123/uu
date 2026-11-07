// rea decompile_all
// name: FUN_10067b3ac
// address: 0x10067b3ac
// body: available
// range: 0x10067b3ac-0x10067b557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010067b4dc) */

undefined1  [16] FUN_10067b3ac(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_b0 [80];
  undefined1 *local_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar4 = auStack_b0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar1;
  local_60 = param_2;
  uStack_58 = param_3;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
  FUN_100665380();
  uVar6 = 1;
  puVar3 = puVar4;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar4,1,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar7 + 8))(puVar4,lVar1);
  if (uVar6 >> 0x3c < 0xf) {
    param_2 = puVar3;
    FUN_100665cbc(puVar3,uVar6);
    FUN_100006cc8(puVar3,uVar6);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    FUN_1006653c0(param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  FUN_100675e24(0);
  _swift_initStackObject();
  FUN_1006747e8(param_1);
  puVar4 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar3 = param_2 + 0x20;
  FUN_1006748ac();
  _swift_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_2);
  puVar5 = puVar4;
  FUN_10062fda8(puVar4);
  _swift_bridgeObjectRelease(puVar4);
  auVar8._8_8_ = puVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}

