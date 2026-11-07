// rea decompile_all
// name: FUN_1003e3404
// address: 0x1003e3404
// body: available
// range: 0x1003e3404-0x1003e34b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e3404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  lVar3 = *unaff_x20;
  puVar1 = &DAT_1009ba8d8;
  _swift_allocObject(&DAT_1009ba8d8,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  uStack_78 = *(undefined8 *)(lVar3 + 0x58);
  local_80 = *(undefined8 *)(lVar3 + 0x50);
  local_70 = *(undefined8 *)(lVar3 + 0x60);
  puVar2 = &DAT_100a75b48;
  puStack_68 = puVar1;
  local_60 = param_1;
  uStack_58 = param_2;
  FUN_100004bb4(&DAT_100a75b48,&DAT_100809bd8);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&uStack_41,FUN_1003e3e04,auStack_90,puVar2);
  _swift_release(puVar1);
  return;
}

