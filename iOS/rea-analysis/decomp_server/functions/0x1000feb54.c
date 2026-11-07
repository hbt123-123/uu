// rea decompile_all
// name: FUN_1000feb54
// address: 0x1000feb54
// body: available
// range: 0x1000feb54-0x1000fec77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000feb54(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [16];
  undefined8 *local_b0;
  undefined1 auStack_a8 [16];
  undefined *local_98 [3];
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_b0 = param_1;
  FUN_1003fb48c(uVar1,param_4,auStack_c0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                0x800000010088a320,param_5,0);
  uStack_48 = param_1[2];
  uStack_50 = param_1[1];
  uStack_58 = param_1[4];
  local_60 = param_1[3];
  local_80 = &DAT_1009d98f8;
  FUN_10010304c();
  local_78 = param_4;
  FUN_10010308c();
  puVar2 = &DAT_10099cfe0;
  local_70 = param_4;
  _swift_allocObject(&DAT_10099cfe0,0x38,7);
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar2 + 0x18) = param_1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(undefined8 *)(puVar2 + 0x30) = param_1[4];
  local_68 = 1;
  local_98[0] = puVar2;
  FUN_100102fb4(&uStack_50,auStack_a8);
  FUN_100102fb4(&local_60,auStack_a8);
  (*param_2)(local_98);
  FUN_100102518(local_98);
  return;
}

