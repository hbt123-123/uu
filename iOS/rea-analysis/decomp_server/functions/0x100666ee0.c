// rea decompile_all
// name: FUN_100666ee0
// address: 0x100666ee0
// body: available
// range: 0x100666ee0-0x1006670a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100666ee0(undefined1 *param_1,long param_2,undefined1 *param_3,ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x21;
  undefined1 *puVar5;
  undefined1 *unaff_x26;
  undefined1 auVar6 [16];
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar5 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_3,param_4,0);
  if (param_4 >> 0x3c < 0xf) {
    _swift_getObjectType(param_1);
    puVar2 = param_3;
    FUN_100665cbc(param_3,param_4);
    puVar4 = puVar2 + 0x20;
    puVar3 = puVar2;
    (**(code **)(param_2 + 0x20))();
    _swift_bridgeObjectRelease(puVar2);
    if (unaff_x21 == 0) {
      thunk_FUN_1006654ec();
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
      puVar2 = puVar3;
      unaff_x26 = puVar4;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar3,puVar4,puVar5);
      if (unaff_x26 != (undefined1 *)0x0) {
        FUN_100006cdc(puVar3,puVar4);
        FUN_100006cc8(param_3,param_4);
        goto LAB_100666fec;
      }
      FUN_1006671d8();
      _swift_allocError(&DAT_1009e4760,puVar2,0,0);
      *puVar2 = 1;
      _swift_willThrow();
      FUN_100006cdc(puVar3,puVar4);
    }
    FUN_100006cc8(param_3,param_4);
    puVar2 = puVar5;
    unaff_x26 = param_1;
  }
  else {
    FUN_1006671d8();
    _swift_allocError(&DAT_1009e4760,param_3,0,0);
    *param_3 = 1;
    _swift_willThrow();
    puVar2 = puVar5;
  }
LAB_100666fec:
  auVar6._8_8_ = unaff_x26;
  auVar6._0_8_ = puVar2;
  return auVar6;
}

