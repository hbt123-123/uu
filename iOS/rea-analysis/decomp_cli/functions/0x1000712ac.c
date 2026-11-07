// rea decompile_all
// name: FUN_1000712ac
// address: 0x1000712ac
// body: available
// range: 0x1000712ac-0x10007132b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000712ac(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_60 [16];
  undefined4 *local_50;
  undefined4 local_34;
  
  local_34 = 0;
  local_50 = &local_34;
  uVar1 = 0;
  FUN_1000719c4(FUN_100073c38,auStack_60,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  if ((uVar1 & 1) == 0) {
    local_34 = 0;
  }
  *param_1 = local_34;
  *(byte *)(param_1 + 1) = ((byte)uVar1 ^ 0xff) & 1;
  return;
}

