// rea decompile_all
// name: FUN_1001e59a8
// address: 0x1001e59a8
// body: available
// range: 0x1001e59a8-0x1001e5a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e59a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_80 [16];
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((int)param_1 == 0) {
    FUN_1005dc5d4();
    lStack_68 = param_1[1];
    local_70 = *param_1;
    lStack_58 = param_1[3];
    local_60 = param_1[2];
    local_50 = param_1[4];
    lStack_38 = param_1[2];
    local_40 = param_1[1];
    lStack_28 = param_1[4];
    lStack_30 = param_1[3];
    FUN_100102fb4(&local_40,auStack_80);
    FUN_100102fb4(&lStack_30,auStack_80);
    (*param_5)(&local_70);
    FUN_1000a9ec8(&local_40);
    FUN_1000a9ec8(&lStack_30);
  }
  else {
    local_70 = (long)(int)param_1;
    lStack_68 = param_2;
    local_60 = param_3;
    lStack_58 = param_2;
    local_50 = param_3;
    (*param_5)(&local_70);
  }
  return;
}

