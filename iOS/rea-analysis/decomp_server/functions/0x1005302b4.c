// rea decompile_all
// name: FUN_1005302b4
// address: 0x1005302b4
// body: available
// range: 0x1005302b4-0x100530393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005302b4(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x21;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  lVar2 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
  puVar1 = &DAT_100aaa138;
  FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
  _swift_dynamicCast(auStack_68,auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4,puVar1,7);
  FUN_10003f030(auStack_68,local_50);
  (**(code **)(lStack_48 + 8))(param_3 & 0x1010101,local_50,lStack_48);
  if (unaff_x21 == 0) {
    FUN_1004fa030();
  }
  FUN_10003f094(auStack_68);
  return;
}

