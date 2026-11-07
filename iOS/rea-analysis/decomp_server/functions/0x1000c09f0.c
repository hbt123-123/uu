// rea decompile_all
// name: FUN_1000c09f0
// address: 0x1000c09f0
// body: available
// range: 0x1000c09f0-0x1000c0aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000c09f0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  FUN_100039b50();
  if (((ulong)param_1 & 1) == 0) {
    FUN_1003b2720();
    lVar2 = *param_1;
    lVar1 = lVar2;
    _swift_retain();
    FUN_10039a5f0();
    _swift_release(lVar2);
    lVar2 = lVar1;
    if (lVar1 != 3) {
      lVar2 = 1;
    }
    if (lVar1 != 2) {
      lVar1 = lVar2;
    }
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000baa7c,0,0xd00000000000009f,0x8000000100882d60,&DAT_d000000000000018,
                  0x8000000100884060,0x101,0);
    lVar1 = 1;
  }
  auVar3._8_8_ = 1;
  auVar3._0_8_ = lVar1;
  return auVar3;
}

