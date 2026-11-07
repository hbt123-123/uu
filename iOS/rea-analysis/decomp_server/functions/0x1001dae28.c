// rea decompile_all
// name: FUN_1001dae28
// address: 0x1001dae28
// body: available
// range: 0x1001dae28-0x1001daf2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dae28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  puVar1 = &DAT_1009a3ab0;
  _swift_allocObject(&DAT_1009a3ab0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puVar2 = &DAT_1009a3ba0;
  _swift_allocObject(&DAT_1009a3ba0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = 0x65746f6d65727575;
  *(undefined8 *)(puVar2 + 0x28) = 0xe90000000000002d;
  _swift_retain(puVar1);
  _swift_retain(param_3);
  FUN_1001e81ec(FUN_1001e035c,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}

