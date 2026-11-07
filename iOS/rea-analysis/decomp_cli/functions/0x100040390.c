// rea decompile_all
// name: FUN_100040390
// address: 0x100040390
// body: available
// range: 0x100040390-0x100040467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100040390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_d0 [80];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 auStack_68 [72];
  
  puVar4 = auStack_d0;
  puVar1 = &DAT_100103708;
  FUN_10000eb08(&DAT_100103708,&DAT_1000d2710);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  puVar2 = puVar1;
  FUN_100065928();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  *(undefined1 **)(puVar1 + 0x28) = puVar4;
  puVar1[0x30] = param_4;
  FUN_1000658d8();
  *(undefined **)(puVar1 + 0x38) = puVar2;
  *(undefined1 **)(puVar1 + 0x40) = puVar4;
  puVar1[0x48] = param_4;
  FUN_100065be4(puVar1);
  uVar3 = 0xd000000000000010;
  FUN_10005fe24(auStack_68,0xd000000000000010,0x80000001000c5d40);
  FUN_10001d358();
  FUN_1000689d4(&local_80,puVar1,uVar3,auStack_68,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  *(undefined1 *)(param_1 + 2) = local_70;
  return;
}

