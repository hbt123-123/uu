// rea decompile_all
// name: FUN_1000f9fe4
// address: 0x1000f9fe4
// body: available
// range: 0x1000f9fe4-0x1000fa0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f9fe4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_1000fc10c(uVar1,*(undefined8 *)(param_2 + 0x18));
  FUN_100401b14(0);
  if (((uint)uVar1 & 0xff) == 4) {
    FUN_1003fb48c(FUN_1000fa1a4,0,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002b,
                  0x8000000100889a90,0x159,0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = (undefined1)uVar1;
    FUN_1003fb4ec(FUN_1000fc808,auStack_60,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002b,
                  0x8000000100889a90,0x156,0);
    FUN_1000fc810(param_3,uVar1);
  }
  return;
}

