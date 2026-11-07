// rea decompile_all
// name: FUN_100089888
// address: 0x100089888
// body: available
// range: 0x100089888-0x10008994b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100089888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60 [3];
  undefined *local_48;
  
  local_48 = PTR___sSiN_1000f03e8;
  local_60[0] = 0;
  FUN_1000866dc(local_60,auStack_90);
  local_68 = 1;
  local_a8 = param_3;
  uStack_a0 = param_4;
  local_98 = param_5;
  local_70 = param_1;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_1);
  FUN_100099afc(&local_a8);
  FUN_100065194(&local_a8);
  FUN_10001fc18(local_60,&DAT_100104198,&DAT_1000d5180);
  return;
}

