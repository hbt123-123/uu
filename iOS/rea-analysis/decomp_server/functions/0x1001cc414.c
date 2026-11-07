// rea decompile_all
// name: FUN_1001cc414
// address: 0x1001cc414
// body: available
// range: 0x1001cc414-0x1001cc58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cc414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = param_1;
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        FUN_1001cc58c(param_3,param_1);
        return;
      }
      FUN_1001cd2ec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0);
      return;
    }
    if (lVar1 == 2) {
      FUN_1001ccfe8(param_1);
      return;
    }
    if (lVar1 != 3) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb45c(FUN_1001d2cfc,auStack_50,0xd0000000000000a1,0x800000010089dec0,
                    0xd000000000000032,0x800000010089df70,0x2f,0);
      return;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb4bc(FUN_1001d2cf4,auStack_50,0xd0000000000000a1,0x800000010089dec0,0xd000000000000032,
                0x800000010089df70,0x31,0);
  return;
}

