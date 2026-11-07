// rea decompile_all
// name: FUN_1000a2ae8
// address: 0x1000a2ae8
// body: available
// range: 0x1000a2ae8-0x1000a2c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a2ae8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0 [4];
  undefined *local_80;
  undefined1 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *local_58;
  
  if (param_3 == 1) {
    param_1 = &DAT_100104690;
    FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
    _swift_initStaticObject();
    FUN_100097700();
  }
  else {
    _swift_bridgeObjectRetain();
  }
  FUN_1000133cc(param_4,&local_b8,&DAT_100104198,&DAT_1000d5180);
  if (local_a0[0] == 0) {
    FUN_10001fc18(&local_b8,&DAT_100104198,&DAT_1000d5180);
    uStack_68 = 0;
    local_70 = (undefined *)0x0;
    local_58 = (undefined *)0x0;
    uStack_60 = 0;
  }
  else {
    local_58 = PTR___sypN_1000f0728 + 8;
    puVar1 = &DAT_1000faf28;
    _swift_allocObject(&DAT_1000faf28,0x30,7);
    local_70 = puVar1;
    FUN_100020a9c(&local_b8,puVar1 + 0x10);
  }
  FUN_1000133cc(&local_70,local_a0,&DAT_100104198,&DAT_1000d5180);
  local_78 = 1;
  local_b8 = param_5;
  uStack_b0 = param_6;
  local_a8 = param_7;
  local_80 = param_1;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_7);
  FUN_100099afc(&local_b8);
  FUN_100065194(&local_b8);
  FUN_10001fc18(&local_70,&DAT_100104198,&DAT_1000d5180);
  return;
}

