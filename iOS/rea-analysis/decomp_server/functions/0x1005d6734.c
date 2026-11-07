// rea decompile_all
// name: FUN_1005d6734
// address: 0x1005d6734
// body: available
// range: 0x1005d6734-0x1005d6817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d6734(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = &DAT_100aadca8;
  FUN_100004c48(&DAT_100aadca8,&DAT_10083f250);
  puVar2 = (undefined1 *)0x0;
  __ss6ResultOMa(0,param_4,puVar1,PTR___ss5ErrorWS_100995c48);
  lVar5 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  if (param_1 != (code *)0x0) {
    FUN_1005d42c0();
    puVar1 = &DAT_1009d90b8;
    _swift_allocError(&DAT_1009d90b8,puVar3,0,0);
    *puVar3 = 2;
    *puVar4 = puVar1;
    _swift_storeEnumTagMultiPayload(puVar4,puVar2,1);
    (*param_1)(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,puVar2);
  }
  return;
}

