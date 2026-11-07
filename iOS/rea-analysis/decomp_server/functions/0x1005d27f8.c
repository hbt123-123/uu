// rea decompile_all
// name: FUN_1005d27f8
// address: 0x1005d27f8
// body: available
// range: 0x1005d27f8-0x1005d28ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d27f8(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [24];
  ulong local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_48;
  
  FUN_1005d4c8c(param_1,&local_78);
  if (local_48 == '\0') {
    (*param_2)(local_78,uStack_70);
    FUN_100006cdc(local_78,uStack_70);
  }
  else if (local_48 == '\x01') {
    FUN_1005d4d44(&local_78,auStack_a8);
    puVar3 = auStack_a8;
    FUN_10003f030(puVar3,local_90);
    uVar4 = 0;
    FUN_1005cf5b0(0,local_90,local_80,puVar3);
    uVar1 = 0;
    if (local_90 >> 0x3c < 0xf) {
      uVar1 = uVar4;
    }
    uVar2 = 0xc000000000000000;
    if (local_90 >> 0x3c < 0xf) {
      uVar2 = local_90;
    }
    (*param_2)(uVar1,uVar2);
    FUN_100006cdc(uVar1,uVar2);
    FUN_10003f094(auStack_a8);
  }
  else {
    (*param_2)(0,0xc000000000000000);
  }
  return;
}

