// rea decompile_all
// name: FUN_1006670a4
// address: 0x1006670a4
// body: available
// range: 0x1006670a4-0x1006671d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006670a4(undefined8 param_1,long param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_3,param_4,0);
  if (param_4 >> 0x3c < 0xf) {
    _swift_getObjectType(param_1);
    puVar1 = param_3;
    FUN_100665cbc(param_3,param_4);
    puVar3 = puVar1 + 0x20;
    puVar2 = puVar1;
    (**(code **)(param_2 + 0x20))();
    _swift_bridgeObjectRelease(puVar1);
    if (unaff_x21 == 0) {
      thunk_FUN_1006654ec(puVar2);
      FUN_100665cbc();
      FUN_100006cdc(puVar2,puVar3);
      FUN_100006cc8(param_3,param_4);
    }
    else {
      FUN_100006cc8(param_3,param_4);
    }
  }
  else {
    FUN_1006671d8();
    _swift_allocError(&DAT_1009e4760,param_3,0,0);
    *param_3 = 1;
    _swift_willThrow();
  }
  return;
}

