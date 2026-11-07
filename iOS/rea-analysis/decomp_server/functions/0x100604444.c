// rea decompile_all
// name: FUN_100604444
// address: 0x100604444
// body: available
// range: 0x100604444-0x10060456f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100604444(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = &DAT_100aafe80;
  FUN_100004bb4(&DAT_100aafe80,&DAT_100847fe0);
  _swift_initStaticObject();
  puVar3 = puVar2;
  FUN_100604000();
  puVar4 = &DAT_100aafe88;
  FUN_100004bb4(&DAT_100aafe88,&DAT_100847fe8);
  _swift_arrayDestroy(puVar2 + 0x20,0x16,puVar4);
  puVar2 = puVar3;
  FUN_1006045dc(puVar3,param_1);
  _swift_bridgeObjectRelease(puVar3);
  puVar4 = puVar2;
  FUN_10060397c();
  _swift_release(puVar2);
  puVar2 = &DAT_100aafe38;
  FUN_100004bb4(&DAT_100aafe38,&DAT_100847c20);
  puVar3 = puVar2;
  FUN_100603e90();
  uVar5 = 0x2c;
  uVar6 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar2,puVar3);
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(uVar5,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x5d,0xe100000000000000);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x5b;
  return auVar1;
}

