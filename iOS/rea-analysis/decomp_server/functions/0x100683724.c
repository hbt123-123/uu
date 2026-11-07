// rea decompile_all
// name: FUN_100683724
// address: 0x100683724
// body: available
// range: 0x100683724-0x1006837e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100683724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)0xd3;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0xd3);
  }
  else {
    _swift_coroFrameAlloc(0xd3,0x96cb);
  }
  *param_1 = puVar1;
  FUN_1006830d8(puVar1,*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  puVar1[9] = *puVar1;
  puVar1[10] = puVar1[1];
  puVar1[0xc] = puVar1[3];
  puVar1[0xb] = puVar1[2];
  puVar1[0xe] = puVar1[5];
  puVar1[0xd] = puVar1[4];
  puVar1[0x10] = puVar1[7];
  puVar1[0xf] = puVar1[6];
  *(undefined4 *)((long)puVar1 + 0x87) = *(undefined4 *)((long)puVar1 + 0x3f);
  _swift_bridgeObjectRetain();
  FUN_10068e538(puVar1 + 2,puVar1 + 0x12);
  FUN_100040bb4(puVar1,&DAT_100ab9fa0,&DAT_10084dd58);
  auVar2._8_8_ = puVar1 + 9;
  auVar2._0_8_ = FUN_1006837e8;
  return auVar2;
}

