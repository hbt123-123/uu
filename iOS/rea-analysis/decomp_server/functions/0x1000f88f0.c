// rea decompile_all
// name: FUN_1000f88f0
// address: 0x1000f88f0
// body: available
// range: 0x1000f88f0-0x1000f89f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f88f0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  
  FUN_1000fb630();
  uVar1 = 0;
  FUN_100401b14(0);
  local_60 = (undefined4)param_1;
  FUN_1003fb48c(uVar1,FUN_1000fb818,auStack_70,0xd0000000000000a2,0x80000001008898a0,
                0xd000000000000016,0x80000001008899c0,0xbd,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  _swift_retain(uVar1);
  FUN_100021f40(param_1,param_2 & 0xffffffff | (param_2 >> 0x20 & 1) << 0x20,1);
  _swift_release(uVar1);
  return;
}

