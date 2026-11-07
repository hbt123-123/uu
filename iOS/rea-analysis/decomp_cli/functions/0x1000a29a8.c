// rea decompile_all
// name: FUN_1000a29a8
// address: 0x1000a29a8
// body: available
// range: 0x1000a29a8-0x1000a2ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a29a8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [32];
  undefined *local_90;
  undefined1 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined *local_68;
  
  if (param_3 == 1) {
    param_1 = &DAT_100104690;
    FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
    _swift_initStaticObject();
    FUN_100097700();
  }
  else {
    _swift_bridgeObjectRetain();
  }
  local_68 = PTR___sSSN_1000f02f8;
  lStack_78 = param_5;
  if (param_5 == 0) {
    param_4 = 0;
    local_70 = 0;
    local_68 = (undefined *)0x0;
    lStack_78 = 0;
  }
  local_80 = param_4;
  FUN_1000133cc(&local_80,auStack_b0,&DAT_100104198,&DAT_1000d5180);
  local_88 = 1;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  local_90 = param_1;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_8);
  FUN_100099afc(&local_c8);
  FUN_100065194(&local_c8);
  FUN_10001fc18(&local_80,&DAT_100104198,&DAT_1000d5180);
  return;
}

