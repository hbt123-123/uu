// rea decompile_all
// name: FUN_1001e58dc
// address: 0x1001e58dc
// body: available
// range: 0x1001e58dc-0x1001e59a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e58dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1005dc5d4();
    uStack_68 = param_1[1];
    local_70 = *param_1;
    uStack_58 = param_1[3];
    local_60 = param_1[2];
    local_50 = param_1[4];
    uStack_38 = param_1[2];
    local_40 = param_1[1];
    uStack_28 = param_1[4];
    uStack_30 = param_1[3];
    FUN_100102fb4(&local_40,auStack_80);
    FUN_100102fb4(&uStack_30,auStack_80);
    (*param_4)(&local_70);
    FUN_1000a9ec8(&local_40);
    FUN_1000a9ec8(&uStack_30);
  }
  else {
    uStack_68 = 0xd000000000000011;
    local_70 = 1;
    local_60 = 0x800000010088a4f0;
    uStack_58 = 0xb8e49dafe89abce4;
    local_50 = 0xafa89ce598ade58d;
    (*param_4)(&local_70);
  }
  return;
}

