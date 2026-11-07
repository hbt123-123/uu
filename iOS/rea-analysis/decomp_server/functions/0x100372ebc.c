// rea decompile_all
// name: FUN_100372ebc
// address: 0x100372ebc
// body: available
// range: 0x100372ebc-0x100372f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100372ebc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_1,param_2,0);
  uVar2 = 0;
  uVar3 = 0;
  if (param_2 >> 0x3c < 0xf) {
    __sSS10FoundationE8EncodingV4utf8ACvgZ
              (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
    uVar2 = param_1;
    uVar3 = param_2;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (param_1,param_2,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
    FUN_100006cc8(param_1,param_2);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

