// rea decompile_all
// name: FUN_1001358f8
// address: 0x1001358f8
// body: available
// range: 0x1001358f8-0x1001359d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001358f8(undefined4 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined4 local_3c;
  long local_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  local_3c = param_1;
  _swift_retain(uVar1);
  FUN_1003e37e8(&local_38,&local_3c);
  _swift_release(uVar1);
  if (local_38 != 0) {
    _swift_release();
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1001359d8,0,0xd0000000000000ac,0x800000010088fc60,0xd000000000000015,
                  0x800000010088ffd0,0xe4,7);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    local_38 = 0;
    local_3c = param_1;
    _swift_retain(uVar1);
    FUN_1003e3634(&local_38,&local_3c);
    _swift_release(uVar1);
  }
  return;
}

